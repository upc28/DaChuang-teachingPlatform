#include "addsubjectcase.h"
#include "ui_addsubjectcase.h"
#include "QMessageBox"
#include "sqlbases.h"

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
    if(SqlBases::addSubjectCase(new _Case(ui->textEdit->toPlainText(),ui->textEdit_2->toPlainText(),"1")))
    {
        QMessageBox::about(this,"Success","添加测试用例成功");
    }
    else{
        QMessageBox::about(this,"Fail","添加测试用例失败");
    }
}
