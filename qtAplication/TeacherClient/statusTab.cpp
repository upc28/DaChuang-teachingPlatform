#include "statusTab.h"
#include "ui_statusTab.h"
#include "qcombobox.h"

StatusTab::StatusTab(Socket *s) :
    ui(new Ui::StatusTab)
{
    ui->setupUi(this);
    serverSocket = s;
    connect(serverSocket,SIGNAL(refreshSubjectFinish()),this,SLOT(refreshTitleBox()));
}

void StatusTab::refreshTitleBox()
{
    QComboBox *chapter = ui->title_chapterComboBox ;
    chapter->clear();
    for(int i=0;i<serverSocket->subject_list->count();i++)
    {
        chapter->addItem(serverSocket->subject_list->at(i)->title,serverSocket->subject_list->at(i)->num);
    }
}

void StatusTab::refreshTitleBox_subject(int i)
{
    QComboBox *subject = ui->title_subjectComboBox;
    subject->clear();
    QList<Question*>* tlist = serverSocket->subject_list->at(i)->list;
    for(int j=0;j<tlist->count();j++)
    {
        subject->addItem(tlist->at(j)->title,tlist->at(j)->num);
    }
}

StatusTab::~StatusTab()
{
    delete ui;
}

void StatusTab::on_title_chapterComboBox_currentIndexChanged(int index)
{
    refreshTitleBox_subject(ui->title_chapterComboBox->currentIndex());
}
