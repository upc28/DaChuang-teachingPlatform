#include "manageTab.h"
#include "ui_manageTab.h"
#include "qtreewidget.h"
#include "qstringlist.h"

ManageTab::ManageTab(Socket *s) :
    ui(new Ui::ManageTab)
{
    ui->setupUi(this);
    serverSocket = s;
    connect(serverSocket,SIGNAL(refreshSubjectFinish()),this,SLOT(RefreshTree()));
}

void ManageTab::RefreshTree()
{
    QTreeWidget *treeWidget = ui->subject_treeWidget;
    treeWidget->clear();
    QStringList columItemList;
    for(int i=0;i < serverSocket->subject_list->count();i++)
    {
        columItemList.clear();
        columItemList<< serverSocket->subject_list->at(i)->title << serverSocket->subject_list->at(i)->num;
        QTreeWidgetItem* child= new QTreeWidgetItem(columItemList);
        treeWidget->addTopLevelItem(child);
        QList<Question*> *tlist = serverSocket->subject_list->at(i)->list;
        for(int j = 0;j<tlist->count();j++)
        {
            columItemList.clear();
            columItemList<<tlist->at(j)->title<<tlist->at(j)->num;
            child->addChild(new QTreeWidgetItem(columItemList));
        }
    }

}

ManageTab::~ManageTab()
{
    delete ui;
}

void ManageTab::on_subject_treeWidget_doubleClicked(const QModelIndex &index)
{
    qDebug()<<&index;
}

void ManageTab::on_addSubject_btn_clicked()
{
    addsubject = new AddSubject(serverSocket);
    addsubject->show();

}













