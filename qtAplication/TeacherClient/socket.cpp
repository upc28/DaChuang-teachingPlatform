#include "socket.h"

Socket::Socket(QObject *parent) : QObject(parent)
{
    subject_vector = new QVector<Subject*>();
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
    subject_vector->clear();
    server_tcpsocket->write("n");
    server_tcpsocket->flush();
    server_tcpsocket->waitForReadyRead();
    char buf1[1024],buf2[1024],buf[1024];
    server_tcpsocket->read(buf,1024);
    int count = atoi(buf);
    for(int i=0;i<count;i++)
    {
        //server_tcpsocket->waitForReadyRead();
        server_tcpsocket->read(buf1,1024);
        //server_tcpsocket->waitForReadyRead();
        server_tcpsocket->read(buf2,1024);
        subject_vector->push_back(new Subject(QString(buf1),QString(buf2).toInt()));
        //subject_list->at(i).num =  QString(buf2);
    }
    for(int i=0;i<subject_vector->count();i++)
    {
        subject_vector->at(i)->vector->clear();
        server_tcpsocket->write("i");
        server_tcpsocket->flush();
        qDebug(QString::number(subject_vector->at(i)->num,10).toStdString().data());
        server_tcpsocket->write(QString::number(subject_vector->at(i)->num,10).toStdString().data());
        server_tcpsocket->flush();
        char buf1[1024],buf2[1024],buf[1024];
        server_tcpsocket->read(buf,1024);
        int count = atoi(buf);
        for(int i=0;i<count;i++)
        {
            server_tcpsocket->read(buf1,1024);
            server_tcpsocket->read(buf2,1024);
            subject_vector->at(i)->vector->push_back(new Question(QString(buf1),QString(buf2).toInt()));
        }


    }
}
