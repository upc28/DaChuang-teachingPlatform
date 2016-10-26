#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>

int  main(int argc, char const *argv[]) {
    DIR *dir;
    struct dirent *ptr;
    char base[1000];
    char cate_dir[] = "/home/server/Dachuang/serverCode";

    if ((dir=opendir(cate_dir)) == NULL)
        {
        perror("Open dir error...");
                exit(1);
        }

    while ((ptr=readdir(dir)) != NULL)
    {
        if(strcmp(ptr->d_name,".")==0 || strcmp(ptr->d_name,"..")==0)    ///current dir OR parrent dir
                continue;
        /*else if(ptr->d_type == 8)    ///file
            //printf("d_name:%s/%s\n",basePath,ptr->d_name);
            files.push_back(ptr->d_name);
        else if(ptr->d_type == 10)    ///link file
            //printf("d_name:%s/%s\n",basePath,ptr->d_name);
            continue;
        else if(ptr->d_type == 4)    ///dir
        {
            files.push_back(ptr->d_name);
            /*
                memset(base,'\0',sizeof(base));
                strcpy(base,basePath);
                strcat(base,"/");
                strcat(base,ptr->d_nSame);
                readFileList(base);
            */
        //}
        printf("%s\n", ptr->d_name);
    }
    closedir(dir);
  return 0;
}
