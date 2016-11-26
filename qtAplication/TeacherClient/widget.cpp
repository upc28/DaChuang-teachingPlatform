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
    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL");
    database.setDatabaseName("source2");
    database.setUserName("root");
    database.setPassword("");
    if(!database.open())
    {
        qDebug()<<database.lastError().text();
    }
    else qDebug()<<database.databaseName();
    QSqlQuery query;
    query.exec("show tables");

    homeTab = new HomeTab();
    studentTab = new StudentTab();
    manageTab = new ManageTab();
    statusTab = new StatusTab();
    ui->TabWidget->addTab(homeTab,"Home");
    ui->TabWidget->addTab(studentTab,"Student");
    ui->TabWidget->addTab(manageTab,"Manage");
    ui->TabWidget->addTab(statusTab,"Status");



}

Widget::~Widget()
{
    delete ui;
}


