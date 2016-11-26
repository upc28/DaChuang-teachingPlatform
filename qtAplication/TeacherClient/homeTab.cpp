#include "homeTab.h"
#include "ui_homeTab.h"

HomeTab::HomeTab() :
    ui(new Ui::HomeTab)
{
    ui->setupUi(this);
    ui->status_serverStatus->setText("连接服务节点失败");
}

HomeTab::~HomeTab()
{
    delete ui;
}



void HomeTab::on_login_loginBtn_clicked()
{
    serverSocket->GetSubjectList();
}
