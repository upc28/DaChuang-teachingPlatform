#include "addsubject.h"
#include "ui_addsubject.h"
#include "QMessageBox"
#include "sqlbases.h"

AddSubject::AddSubject(Socket *s) :
    ui(new Ui::AddSubject)
{
    ui->setupUi(this);
    serverSocket = s;
    for(int i=0;i<serverSocket->subject_list->count();i++)
    {
        ui->comBox->addItem(serverSocket->subject_list->at(i)->title,serverSocket->subject_list->at(i)->num);
    }
}

AddSubject::~AddSubject()
{
    delete ui;
}

void AddSubject::on_Btn_add_clicked()
{
    if(SqlBases::addSubject(new _Subject(ui->lineEdit->text(),ui->textEdit->toPlainText(),ui->textEdit_pre->toPlainText(),ui->textEdit_suf->toPlainText(),"1")))
    {
        QMessageBox::about(this,"Success","添加题目成功");
    }
    else{
        QMessageBox::about(this,"Fail","添加题目失败");
    }
}
