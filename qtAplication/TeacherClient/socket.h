#ifndef SOCKET_H
#define SOCKET_H

#include <QObject>
#include "QtNetwork/QTcpServer"
#include "QtNetwork/QTcpSocket"
#include "QtNetwork/QUdpSocket"

struct Question{
    QString title;
    qint16 num;
    Question(QString a,qint16 b)
    {
        title = a; num = b;
    }
};

struct Subject{
    QString title;
    qint16 num;
    QVector<Question*> *vector;
    Subject(QString a,qint16 b){vector = new QVector<Question*>();title = a; num = b;}

};


class Socket : public QObject
{
    Q_OBJECT
public:
    explicit Socket(QObject *parent = 0);
    bool login();

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
    QVector<Subject*> *subject_vector;
};

#endif // SOCKET_H
