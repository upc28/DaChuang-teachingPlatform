#include "widget.h"
#include "ui_widget.h"
#include <string.h>
#define BUFSIZE 1024


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    sock = new QTcpSocket;
    initeCombox();
    showCombox_4();
    showCombox_5();
    connect(ui->comboBox_3,SIGNAL(currentIndexChanged(int)),this,SLOT(showCombox_4()));
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(showCombox_5()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_4_clicked()
{
    sock->connectToHost(QHostAddress::LocalHost,10099);
    sock->waitForConnected();
    sock->write("a",1024);
    sock->flush();
    const char* buf2 = ui->lineEdit->text().toStdString().c_str();
    sock->write(buf2,1024);
    sock->flush();
    const char* buf3 = ui->comboBox_2->currentData().toString().toStdString().c_str();
    sock->write(buf3,1024);
    sock->flush();
    sock->waitForReadyRead();
    char buf1[1024];
    sock->read(buf1,1024);
    if(buf1[0]=='r')
    {
        qDebug()<<"ready to send describe";
        sock->write(ui->textEdit_3->toHtml().toStdString().c_str());
        sock->flush();
        sock->waitForReadyRead();
        sock->read(buf1,1024);
        if(buf1[0]=='r')
        {
            qDebug()<<"ready to send preCode";
            sock->write(ui->textEdit_4->toHtml().toStdString().c_str());
            sock->flush();
            sock->waitForReadyRead();
            sock->read(buf1,1024);
            if(buf1[0]=='r')
            {
                qDebug()<<"ready to send sufCode";
                sock->write(ui->textEdit_5->toHtml().toStdString().c_str());
                sock->flush();
            }
            else qDebug()<<"server error";
        }
        else qDebug()<<"server error";
    }
    else qDebug()<<"server error";
    sock->abort();

}





void Widget::showCombox_4()
{
    sock->connectToHost(QHostAddress::LocalHost,10099);
    ui->comboBox_4->clear();
    //qDebug()<<"run";
    sock->waitForConnected();
    sock->write("i",1024);
    sock->flush();
    sock->write(ui->comboBox_3->currentData().toString().toStdString().c_str(),1024);
    sock->flush();
    sock->waitForReadyRead();
    char buf[1024],buf2[1024];
    sock->read(buf,1024);
    int count = atoi(buf);
    //qDebug()<<"count:"<<count;
    while(count--)
    {
        char buff[BUFSIZE];
        sock->waitForReadyRead();
        sock->read(buff,1024);
        //qDebug()<<"buf:"<<buff;
        sock->waitForReadyRead();
        sock->read(buf2,1024);
        buf[strlen(buf2)]='\0';
        QString str2 = QString(buf2);
        str2.replace(QString("\n"), QString("\0"));
        ui->comboBox_4->addItem(str2,buff);
        //qDebug()<<buff;

    }
    sock->abort();
}

void Widget::showCombox_5()
{
    sock->connectToHost(QHostAddress::LocalHost,10099);
    ui->comboBox_5->clear();
    //qDebug()<<"run";
    sock->waitForConnected();
    sock->write("i",1024);
    sock->flush();
    sock->write(ui->comboBox->currentData().toString().toStdString().c_str(),1024);
    sock->flush();
    sock->waitForReadyRead();
    char buf[1024],buf2[1024];
    sock->read(buf,1024);
    int count = atoi(buf);
    //qDebug()<<"count:"<<count;
    while(count--)
    {
        char buff[BUFSIZE];
        sock->waitForReadyRead();
        sock->read(buff,1024);
        //qDebug()<<"buf:"<<buff;
        sock->waitForReadyRead();
        sock->read(buf2,1024);
        buf[strlen(buf2)]='\0';
        QString str2 = QString(buf2);
        str2.replace(QString("\n"), QString("\0"));
        ui->comboBox_5->addItem(str2,buff);
        //qDebug()<<buff;

    }
    sock->abort();
}


void Widget::on_pushButton_3_clicked()
{
    sock->connectToHost(QHostAddress::LocalHost,10099);
    sock->waitForConnected();
    sock->write("t",BUFSIZE);
    sock->flush();
    sock->write(ui->comboBox_4->currentData().toString().toStdString().c_str(),BUFSIZE);
    //qDebug()<<"send data: "<<ui->comboBox_4->currentData().toString().toStdString().c_str();
    sock->flush();
    sock->waitForReadyRead();
    char buf[BUFSIZE];
    sock->read(buf,BUFSIZE);
    if(buf[0]=='r')
    {
        sock->write(ui->textEdit_7->toPlainText().toStdString().c_str());
        sock->flush();
        sock->waitForReadyRead();
        sock->read(buf,BUFSIZE);
        if(buf[0]=='r')
        {
            sock->write(ui->textEdit_6->toPlainText().toStdString().c_str());
            sock->flush();
        }
        else qDebug()<<"server error";
    }
    else qDebug()<<"server error";
    sock->abort();
}

void Widget::initeCombox()
{
    sock->connectToHost(QHostAddress::LocalHost,10099);
    sock->waitForConnected();
    sock->write("n",1024);
    sock->flush();
    sock->waitForReadyRead();
    char buf1[1024],buf2[1024],buf[1024];
    sock->read(buf,1024);
    int count = atoi(buf);
    while(count--)
    {
        sock->waitForReadyRead();
        sock->read(buf1,1024);
        sock->waitForReadyRead();
        sock->read(buf2,1024);
        //qDebug()<<buf1<<buf2;
        ui->comboBox->addItem(buf1,buf2);
        ui->comboBox_2->addItem(buf1,buf2);
        ui->comboBox_3->addItem(buf1,buf2);
    }
    sock->abort();
}



void Widget::on_pushButton_clicked()
{
    sock->connectToHost(QHostAddress::LocalHost,10099);
    sock->waitForConnected();
    sock->write("c",BUFSIZE);
    sock->flush();
    sock->write(ui->comboBox_5->currentData().toString().toStdString().c_str(),BUFSIZE);
    sock->flush();
    sock->write(ui->lineEdit_2->text().toStdString().c_str(),BUFSIZE);
    sock->flush();
    sock->waitForReadyRead();
    char buf1[BUFSIZE];
    sock->read(buf1,BUFSIZE);
    if(buf1[0]=='r')
    {
        sock->write(ui->textEdit->toPlainText().toStdString().c_str());
        sock->waitForReadyRead();
        sock->read(last_codeId,BUFSIZE);
        if(last_codeId[0]=='e')
        {
            qDebug()<<"server error";
        }
        else ui->textBrowser->setText(QString("code id:")+last_codeId);
    }
    else qDebug()<<"server error";
    sock->abort();
}

void Widget::on_pushButton_2_clicked()
{
    sock->connectToHost(QHostAddress::LocalHost,10099);
    sock->waitForConnected();
    sock->write("r",BUFSIZE);
    sock->flush();
    sock->write(last_codeId,BUFSIZE);
    sock->flush();
    char buf[BUFSIZE];
    sock->waitForReadyRead();
    sock->read(buf,BUFSIZE);
    if(buf[0]=='r') qDebug()<<"server error";
    else ui->textBrowser->append(QString(buf));
    sock->abort();
}
