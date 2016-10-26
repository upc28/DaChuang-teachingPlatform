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

struct _case{
    QString input,output;
    _case(QString a,QString b)
    {
        input = a;output = b;
    }
};

struct CaseList{
    QString introduce;
    QList<_case*> *list;
    CaseList(){
        list = new QList<_case*>();
    }
};

struct Subject_Case{
    QString introduce;
    QList<_case> case_list;
};

struct CurrentTreeItem{
    int parentRow,row;
    CurrentTreeItem(){
        parentRow = -1;row = -1;
    }
};

struct AddSubject_s{
    QString chapterid,title,introduce,preCode,sufCode;
    AddSubject_s(QString a,QString b,QString c,QString d,QString e){
        chapterid = a;title = b;introduce = c;preCode = d;sufCode = e;
    }
};

class Socket : public QObject
{
    Q_OBJECT
public:
    explicit Socket(QObject *parent = 0);
    bool login();

    QList<Subject*> *subject_list;      //保存章节题目名称信息
    Subject_Case* subject_case;
    void getSubjectCase(QString num,CaseList* caselist);
    bool addSubject(AddSubject_s* addSubject_s);
    bool addSubjectCase(CurrentTreeItem *currentTreeItem, QString input, QString output);
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
