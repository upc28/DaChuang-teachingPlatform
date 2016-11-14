#include "widget.h"
#include "ui_widget.h"
#include "qdebug.h"
#include "QtSql/QSqlError"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));

    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));
    Socket *ss= new Socket();
    homeTab = new HomeTab(ss);
    studentTab = new StudentTab();
    manageTab = new ManageTab(ss);
    statusTab = new StatusTab(ss);
    ui->TabWidget->addTab(homeTab,"Home");
    ui->TabWidget->addTab(studentTab,"Student");
    ui->TabWidget->addTab(manageTab,"Manage");
    ui->TabWidget->addTab(statusTab,"Status");
    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL");
    database.setDatabaseName("source");
    database.setUserName("root");
    database.setPassword("");
    if(!database.open())
    {
        qDebug()<<database.lastError().text();
    }
    else qDebug()<<database.databaseName();
    QSqlQuery query;
    query.exec("show tables");


}

Widget::~Widget()
{
    delete ui;
}


