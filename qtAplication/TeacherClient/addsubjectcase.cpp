#include "addsubjectcase.h"
#include "ui_addsubjectcase.h"
#include "QMessageBox"

AddSubjectCase::AddSubjectCase(Socket *s, CurrentTreeItem *curItem) :
    ui(new Ui::AddSubjectCase)
{
    ui->setupUi(this);
    serverSocket = s;
    currenttreeItem = curItem;
}

AddSubjectCase::~AddSubjectCase()
{
    delete ui;
}

void AddSubjectCase::on_pushButton_clicked()
{
    if(serverSocket->addSubjectCase(currenttreeItem,ui->textEdit->toPlainText(),ui->textEdit_2->toPlainText()))
    {
        QMessageBox::about(this,"Success","添加测试用例成功");
    }
    else{
        QMessageBox::about(this,"Fail","添加测试用例失败");
    }
}
