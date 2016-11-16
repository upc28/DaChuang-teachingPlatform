#include "manageTab.h"
#include "ui_manageTab.h"
#include "qtreewidget.h"
#include "qstringlist.h"
#include "QTableWidgetItem"
#include "QStandardItemModel"
#include "qabstractitemview.h"

ManageTab::ManageTab(Socket *s) :
    ui(new Ui::ManageTab)
{
    ui->setupUi(this);
    currentTreeItem = new CurrentTreeItem();
    serverSocket = s;
    connect(serverSocket,SIGNAL(refreshSubjectFinish()),this,SLOT(RefreshTree()));

    subjectList = new QList<SubjectList*>();
    SqlBases::reSubject(subjectList);
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
            columItemList<<tlist->at(j)->title;//<<tlist->at(j)->num;
            child->addChild(new QTreeWidgetItem(columItemList));
        }
    }

}

void ManageTab::RefreshCaseList(QList<_case*> *list)
{
    QTableView* tableview = ui->testCase_tableView;
    QStandardItemModel *caseModel = new QStandardItemModel();
    caseModel->setHorizontalHeaderItem(0,new QStandardItem("输入"));
    caseModel->setHorizontalHeaderItem(1,new QStandardItem("输出"));
    tableview->setModel(caseModel);
    tableview->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableview->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableview->setColumnWidth(0,270);
    tableview->setColumnWidth(1,270);

    for(int i=0;i<list->count();i++)
    {

        caseModel->setItem(i,0,new QStandardItem(list->at(i)->input));
        caseModel->setItem(i,1,new QStandardItem(list->at(i)->output));
    }
}

ManageTab::~ManageTab()
{
    delete ui;
}

void ManageTab::on_subject_treeWidget_doubleClicked(const QModelIndex &index)
{
    if(index.parent().row()==-1) return;
    qDebug()<<index.parent().row();
    qDebug()<<index.row();
    currentTreeItem->parentRow = index.parent().row();
    currentTreeItem->row = index.row();
    CaseList *caselist = new CaseList();
    serverSocket->getSubjectCase(serverSocket->subject_list->at(index.parent().row())->list->at(index.row())->num,caselist);
    //qDebug()<<(serverSocket->subject_list->at(index.parent().row())->list->at(index.row())->num);
    RefreshCaseList(caselist->list);


}

void ManageTab::on_addSubject_btn_clicked()
{

    //addsubject = new AddSubject(subjectList);
    //addsubject->show();

}


void ManageTab::on_deleteSubject_btn_clicked()
{

}

void ManageTab::on_addCases_btn_clicked()
{
    if(currentTreeItem->parentRow==-1&&currentTreeItem->row==-1)
        return;
    //addsubjectcase = new AddSubjectCase(subjectList,currentTreeItem);
    addsubjectcase->show();

}

















