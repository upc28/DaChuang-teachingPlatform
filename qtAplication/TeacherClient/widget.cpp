#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    Socket *ss= new Socket();
    homeTab = new HomeTab(ss);
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


