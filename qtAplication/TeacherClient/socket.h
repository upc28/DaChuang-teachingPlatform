#ifndef SOCKET_H
#define SOCKET_H

#include <QObject>
#include "QtNetwork/QTcpServer"
#include "QtNetwork/QTcpSocket"
#include "QtNetwork/QUdpSocket"

struct Question{
    QString title,num;

    Question(QString a,QString b)
    {
        title = a; num = b;
    }
};

struct Subject{
    QString title, num;

    QList<Question*> *list;

    Subject(QString a,QString b){list = new QList<Question*>();title = a; num = b;}

};


class Socket : public QObject
{
    Q_OBJECT
public:
    explicit Socket(QObject *parent = 0);
    bool login();

    QList<Subject*> *subject_list;
signals:
    void refreshSubjectFinish();

public slots:
    void reciveNewConnection();
    void GetSubjectList();
private:
    QTcpServer *tcpserver;
    QTcpSocket *server_tcpsocket;
    QUdpSocket *udpsocket;
    qint16 teacherport = 20711;
    qint16 serverport = 20611;
    QString serverAddress = "192.168.31.132";

};

#endif // SOCKET_H