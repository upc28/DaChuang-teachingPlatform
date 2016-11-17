#include "addsubjectcase.h"
#include "ui_addsubjectcase.h"
#include "QMessageBox"
#include "sqlbases.h"

AddSubjectCase::AddSubjectCase(QString subjectid) :
    ui(new Ui::AddSubjectCase)
{
    ui->setupUi(this);
    sId = subjectid;
}

AddSubjectCase::~AddSubjectCase()
{
    delete ui;
}

void AddSubjectCase::on_pushButton_clicked()
{
    if(SqlBases::addSubjectCase(new _Case(ui->textEdit->toPlainText(),ui->textEdit_2->toPlainText(),sId)))
    {
        QMessageBox::about(this,"Success","添加测试用例成功");
    }
    else{
        QMessageBox::about(this,"Fail","添加测试用例失败");
    }
}
