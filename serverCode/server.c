#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <fcntl.h>
#include <mysql/mysql.h>
#include <sys/stat.h>


#define BUFSIZE 1024
#define SUBJECT_IDSIZE 1024
#define USER_IDSIZE 1024
#define QUERYSIZE 100
#define SELCET_QUERY "select directory_dir from subject where id = %s"
#define INSERT_QUERY "insert into history(subject_id,date,time,result,user_id) values(%s,CURDATE(),CURTIME(),'Building',%s)"
#define SELECT_ID_QUERY "select id from history order by id desc limit 0,1"
#define FLAGS O_RDWR | O_CREATE
#define MODE S_IRWXU|S_IRGRP|S_IXGRP|S_IROTH|S_IXOTH
#define DATAPATH "/mnt/hgfs/upc28/data"

int receiveFile(int accept_fd,char* filename)
{
  int fd,count;
  char buf[BUFSIZE];
  if((fd=open(filename,O_RDWR | O_CREAT,MODE))==-1)
  {
    printf("open file error:%s\n",filename );
    return 0;
  }
  else{
    while (1) {
      count = read(accept_fd,buf,BUFSIZE);
      write(fd,buf,count);
      if(count<BUFSIZE) break;
    }
    close(fd);
    return 1;
  }
}

int sendFile(int accept_fd,char* filename)
{
  int fd,count;
  printf("send filename:%s\n",filename );
  if((fd=open(filename,O_RDONLY))==-1)
  {
    printf("openfile error:%s\n",filename);
    return 0;
  }
  char buf[BUFSIZE];
  while((count=read(fd,buf,BUFSIZE))==1024)
  {
    printf("read file:%s\n",buf );
    write(accept_fd,buf,count);
  }
  printf("read file:%s\n",buf );
  write(accept_fd,buf,count);
  close(fd);
  return 1;

}

int sendCase(int accept_fd,char* filename)
{
    DIR *dir;
    struct dirent *ptr;
    if((dir=opendir(filename))==NULL)
    {
      printf("open dir ERROR:%s\n",filename );
      return 0;
    }
    int total = 0;
    while((ptr=readdir(dir))!=NULL)
    {
      if(strcmp(ptr->d_name,".")==0 || strcmp(ptr->d_name,"..")==0)    ///current dir OR parrent dir
              continue;
      total++;
    }
    char buf[BUFSIZE];
    sprintf(buf,"%d",total);
    write(accept_fd,buf,BUFSIZE);

    if((dir=opendir(filename))==NULL)
    {
      printf("open dir ERROR\n" );
      return 0;
    }

    while((ptr=readdir(dir))!=NULL)
    {
      if(strcmp(ptr->d_name,".")==0 || strcmp(ptr->d_name,"..")==0)    ///current dir OR parrent dir
              continue;
      char buf[255];
      sprintf(buf,"%s/%s",filename,ptr->d_name);
      printf("send file :%s\n", buf);
      if(sendFile(accept_fd,buf)==0)
        return 0;
      for(total = 0;total == 0;total=read(accept_fd,buf,BUFSIZE));
    }
}


int main()
{
    //daemon(0,0);
    MYSQL mysql;
    int field_num,field_count;
    const char* db = "source";
    mysql_init(&mysql);
    if(mysql_real_connect(&mysql,"192.168.81.1","upc28","1996",NULL,0,NULL,0)==NULL)
    {
      printf("mysql connect errer! %d: %s\n",mysql_errno(&mysql),mysql_error(&mysql));
      exit(1);
    }
    if(mysql_select_db(&mysql,db)!=0)
    {
      printf("select db error\n");
      exit(1);
    }
    mysql_set_character_set( & mysql, "utf8" ) ;
    MYSQL_RES* res;
    MYSQL_ROW row;
    /****************************/
    int port = 20611;
    struct sockaddr_in sin;
    struct sockaddr_in csocket;
    socklen_t len;
    sin.sin_family = AF_INET;
    sin.sin_addr.s_addr = INADDR_ANY;
    sin.sin_port = htons(port);
    int server_fd = socket(AF_INET,SOCK_STREAM,0);
    if(server_fd==-1) printf("create sock fail\n");
    if(bind(server_fd,(struct sockaddr*)&sin,sizeof(sin))!=-1)
	  printf("blind success\n");
    else printf("bind fail\n");
    if(listen(server_fd,10)!=-1) printf("listen success\n");
    else printf("listen fail\n");
    /***************************/
    while(1)
    {
        int accept_fd = accept(server_fd,(struct sockaddr*)&csocket,&len);
	       if(accept_fd!=-1) printf("receive connect\n");
        if(fork()==0)
        {
            printf("fork success\n");
            char buf[BUFSIZE];
            char query[QUERYSIZE];
            while(1){
            ssize_t size = 0;
            char ff;
            for(size = 0;size == 0 ;size = read(accept_fd,&ff,1));

	          printf("receive : %s\n",buf );
            char buf1[BUFSIZE],buf2[BUFSIZE],buf3[BUFSIZE];
            switch (ff) {
              case 'c':   //提交编译程序
                read(accept_fd,buf1,BUFSIZE);
                printf("receive : %s\n",buf1 );
                read(accept_fd,buf2,BUFSIZE);
                printf("receive : %s\n",buf2 );
                sprintf(query,"insert into history(subject_id,date,time,result,user_id) values(%s,CURDATE(),CURTIME(),1,%s)",buf1,buf2);
                printf("%s\n",query );
                mysql_real_query(&mysql,query,strlen(query));
                sprintf(query,"select id from history order by id desc limit 0,1");
                printf("%s\n",query );
                mysql_real_query(&mysql,query,strlen(query));
                res = mysql_store_result(&mysql);
                row = mysql_fetch_row(res);
                //char* trow  = row[0];
                strcpy(buf2,row[0]);
                mysql_free_result(res);
                sprintf(query,"select directory_dir from subject where id = %s",buf1);
                mysql_real_query(&mysql,query,strlen(query));
                res = mysql_store_result(&mysql);
                row = mysql_fetch_row(res);
                write(accept_fd,"r",1);
                sprintf(buf3,"%s/usr/%s.c",row[0],buf2);//buf3 .c路径  buf2文件名
                if(receiveFile(accept_fd,buf3)==1)
                {
                  printf("receive %s success\n", buf3);
                  write(accept_fd,buf2,BUFSIZE);
                }
                else {
                  printf("receive %s fail\n", buf3);
                  write(accept_fd,"e",BUFSIZE);
                }
                mysql_free_result(res);

                break;

              case 'a':  //上传题目
                //read(accept_fd,buf1,BUFSIZE); //chapter_id
                for(size = 0;size == 0;size=read(accept_fd,buf1,BUFSIZE));
                printf("receive chapter_id: %s\n", buf1);
                //read(accept_fd,buf2,BUFSIZE); //title
                for(size = 0;size == 0;size=read(accept_fd,buf2,BUFSIZE));
                printf("receive title : %s\n",buf2 );
                sprintf(query,"insert into subject (CHAPTERID,TITLE) values(%s,\'%s\')",buf1,buf2);
                printf("%s\n",query );
                mysql_real_query(&mysql,query,strlen(query));
                sprintf(query,"select id from subject order by id desc limit 0,1");
                mysql_real_query(&mysql,query,strlen(query));
                res = mysql_store_result(&mysql);
                row = mysql_fetch_row(res); //row[0]  id
                sprintf(buf3,"%s/%s",DATAPATH,row[0]);
                sprintf(buf1,"%s/case",buf3);
                sprintf(buf2,"%s/user",buf3);
                //mysql_free_result(res);
                if(mkdir(buf3,S_IRUSR|S_IWUSR|S_IXUSR)==-1||mkdir(buf2,S_IRUSR|S_IWUSR|S_IXUSR)==-1||mkdir(buf1,S_IRUSR|S_IWUSR|S_IXUSR)==-1)
                {
                  printf("mkdir error: %s\n",buf3 );
                  write(accept_fd,"e",BUFSIZE);
                }
                else {
                  write(accept_fd,"r",BUFSIZE);
                  char filename[255];
                  sprintf(filename,"%s/describe",buf3);
                  if(receiveFile(accept_fd,filename)==1)
                  {
                    write(accept_fd,"r",BUFSIZE);
                    printf("wirte describe success\n" );
                    sprintf(filename,"%s/preCode",buf3);
                    if(receiveFile(accept_fd,filename)==1)
                    {
                      write(accept_fd,"r",BUFSIZE);
                      printf("wirte preCode success\n" );
                      sprintf(filename,"%s/sufCode",buf3);
                      if(receiveFile(accept_fd,filename)==1)
                      {
                        printf("wirte sufCode success\n" );
                        write(accept_fd,"r",BUFSIZE);
                      }
                      else write(accept_fd,"e",BUFSIZE);
                    }
                    else write(accept_fd,"e",BUFSIZE);
                  }
                  else write(accept_fd,"e",BUFSIZE);
                }
                mysql_free_result(res);
                break;
              case 'r':    //查询评测结果
                read(accept_fd,buf1,BUFSIZE);
                sprintf(query,"select result from history where id = %s",buf1);
                mysql_real_query(&mysql,query,strlen(query));
                res = mysql_store_result(&mysql);
                row = mysql_fetch_row(res);
                write(accept_fd,row[0],BUFSIZE);
                mysql_free_result(res);
                break;
              case 'i':  //返回章节题目

                for(size = 0;size == 0;size=read(accept_fd,buf1,BUFSIZE))  ;

                sprintf(query,"select ID,TITLE from subject where CHAPTERID = %s",buf1);
                printf("id = %s\n",buf1 );
                if(mysql_real_query(&mysql,query,strlen(query))!=0) printf("quer error\n");
                res = mysql_store_result(&mysql);
                if(res==NULL) printf("use result error\n");
                int count = mysql_num_rows(res);
                sprintf(buf1,"%d",count);
                printf("result count : %d\n",count );
                write(accept_fd,buf1,BUFSIZE);
                int i;
                for(i=0;i<count;i++)
                {
                  row = mysql_fetch_row(res);
                  write(accept_fd,row[0],BUFSIZE);
                  write(accept_fd,row[1],BUFSIZE);
                }
                mysql_free_result(res);
                break;
              case 't':   //上传测试用例
                read(accept_fd,buf1,BUFSIZE);
                sprintf(query,"update subject set CASECOUNT=CASECOUNT+1 where id = %s",buf1);
                printf("%s\n",query );
                if(mysql_real_query(&mysql,query,strlen(query))!=0) printf("quer error\n");
                sprintf(query,"select ID,CASECOUNT from subject where id = %s",buf1);
                if(mysql_real_query(&mysql,query,strlen(query))!=0) printf("quer error\n");
                res = mysql_store_result(&mysql);
                if(res==NULL) printf("use result error\n");
                row = mysql_fetch_row(res);
                sprintf(buf2,"%s/%s/case/%s.in",DATAPATH,row[0],row[1]);
                write(accept_fd,"r",1);
                if(receiveFile(accept_fd,buf2)==1)
                {
                  printf("write in success: %s\n",buf2 );
                  write(accept_fd,"r",BUFSIZE);
                  sprintf(buf2,"%s/%s/case/%s.out",DATAPATH,row[0],row[1]);
                  if(receiveFile(accept_fd,buf2)==1)
                  {
                    printf("write in success: %s\n",buf2 );
                    write(accept_fd,"r",BUFSIZE);
                  }
                  else write(accept_fd,"e",BUFSIZE);
                }
                else write(accept_fd,"e",BUFSIZE);
                mysql_free_result(res);
                break;
              case 'n': //返回章节标题
                sprintf(query,"select TITLE,ID from chapter");
                if(mysql_real_query(&mysql,query,strlen(query))!=0) printf("quer error\n");
                res = mysql_store_result(&mysql);
                if(res==NULL) printf("use result error\n");
                count = mysql_num_rows(res);
                sprintf(buf1,"%d",count);
                printf("result count : %d\n",count );
                write(accept_fd,buf1,BUFSIZE);
                for(i=0;i<count;i++)
                {
                  row = mysql_fetch_row(res);
                  write(accept_fd,row[0],BUFSIZE);
                  write(accept_fd,row[1],BUFSIZE);
                  printf("%s %s",row[0],row[1]);
                }
                mysql_free_result(res);
                break;
              case 'l':  //return subject Introduce and CaseList
                printf("goto l\n" );
                read(accept_fd,buf1,BUFSIZE);
                printf("recive id:%s\n", buf1);
                sprintf(buf2,"%s/%s/describe",DATAPATH,buf1);
                if(sendFile(accept_fd,buf2)==1)
                {
                  printf("send file success\n");
                }
                else {
                  printf("send file fail\n");
                }
                sprintf(buf2,"%s/%s/case",DATAPATH,buf1);
                if(sendCase(accept_fd,buf2)==1)
                {
                  printf("send case success\n");
                }
                else printf("send case fail\n");
                break;
              case 'e':
                close(accept_fd);
                close(server_fd);
                printf("close connection\n" );
                exit(0);
              default:
                close(accept_fd);
                close(server_fd);
                exit(0);
            }}
             close(accept_fd);
             close(server_fd);
            exit(0);
        }
        else  close(accept_fd);
    }
    close(server_fd);
    return 0;
}
