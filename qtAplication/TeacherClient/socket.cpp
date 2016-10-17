#include "socket.h"

Socket::Socket(QObject *parent) : QObject(parent)
{
    subject_list = new QList<Subject*>();
}

bool Socket::login()
{
    server_tcpsocket = new QTcpSocket;
    server_tcpsocket->connectToHost(serverAddress,20611);
    if(!server_tcpsocket->waitForConnected())
        return false;
    else return true;
}

void Socket::reciveNewConnection()
{

}

void Socket::GetSubjectList()
{
    subject_list->clear();
    server_tcpsocket->write("n");
    server_tcpsocket->flush();
    server_tcpsocket->waitForReadyRead();
    char buf1[1024],buf2[1024],buf[1024];
    server_tcpsocket->read(buf,1024);
    int count = atoi(buf);
    for(int i=0;i<count;i++)
    {
        server_tcpsocket->waitForReadyRead(20);
        server_tcpsocket->read(buf1,1024);
        server_tcpsocket->waitForReadyRead(20);
        server_tcpsocket->read(buf2,1024);
        qDebug()<<buf1<<" "<<buf2;
        subject_list->push_back(new Subject(QString(buf1),QString(buf2)));
/*!!!这句不能删，否则list值为空=。=！！！*/  //qDebug()<<QString(buf1)<<" "<<QString(buf2);
        //subject_list->at(i).num =  QString(buf2);
    }
    QList<Question*> * tlist;
    for(int i=0;i<subject_list->count();i++)
    {
        tlist  = subject_list->at(i)->list;
        tlist->clear();
        server_tcpsocket->write("i");
        server_tcpsocket->flush();
        //qDebug(QString::number(tlist->num,10).toStdString().data());
        server_tcpsocket->write(QString::number(subject_list->at(i)->num.toInt(),10).toStdString().data());
        qDebug()<<"send "<<QString::number(subject_list->at(i)->num.toInt(),10);
        server_tcpsocket->flush();
        char buf1[1024],buf2[1024],buf[1024];
        server_tcpsocket->waitForReadyRead(50);
        server_tcpsocket->read(buf,1024);
        int count = atoi(buf);
        qDebug()<<"cout "<<count;
        for(int i=0;i<count;i++)
        {
            server_tcpsocket->waitForReadyRead(20);
            server_tcpsocket->read(buf1,1024);
            server_tcpsocket->waitForReadyRead(20);
            server_tcpsocket->read(buf2,1024);
            qDebug()<<buf1<<" "<<buf2;
            tlist->push_back(new Question(QString(buf2),QString(buf1)));
        }
    }
    emit refreshSubjectFinish();
}
