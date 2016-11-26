#include "manageTab.h"
#include "ui_manageTab.h"
#include "qtreewidget.h"
#include "qstringlist.h"
#include "QTableWidgetItem"
#include "QStandardItemModel"
#include "qabstractitemview.h"
#include "qmessagebox.h"

ManageTab::ManageTab() :
    ui(new Ui::ManageTab)
{
    ui->setupUi(this);
    currentTreeItem = new CurrentTreeItem();



    subjectList = new QList<SubjectList*>();
    caseList = new QList<_Case*>();
    RefreshTree();
}

void ManageTab::RefreshTree()
{
    SqlBases::reSubject(subjectList);
    QTreeWidget *treeWidget = ui->subject_treeWidget;
    treeWidget->clear();
    QStringList columItemList;
    for(int i=0;i < subjectList->count();i++)
    {
        columItemList.clear();
        columItemList<< subjectList->at(i)->title;
        QTreeWidgetItem* child= new QTreeWidgetItem(columItemList);
        treeWidget->addTopLevelItem(child);
        QList<_Subject*> *tlist = subjectList->at(i)->list;
        for(int j = 0;j<tlist->count();j++)
        {
            columItemList.clear();
            columItemList<<tlist->at(j)->title;//<<tlist->at(j)->num;
            child->addChild(new QTreeWidgetItem(columItemList));
        }
    }

}

void ManageTab::RefreshCaseList()
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

    for(int i=0;i<caseList->count();i++)
    {

        caseModel->setItem(i,0,new QStandardItem(caseList->at(i)->input));
        caseModel->setItem(i,1,new QStandardItem(caseList->at(i)->output));
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
    SqlBases::reSubjectCase(subjectList->at(index.parent().row())->list->at(index.row())->id,caseList);
    RefreshCaseList();


}

void ManageTab::on_addSubject_btn_clicked()
{

    //addsubject = new AddSubject(subjectList);
    //addsubject->show();

}


void ManageTab::on_deleteSubject_btn_clicked()
{
    if(currentTreeItem->parentRow==-1&&currentTreeItem->row==-1)
        return;
    qDebug()<<QMessageBox::question(this,"删除题目","确认删除题目")<<""<<QMessageBox::Ok;
    if(QMessageBox::question(this,"删除题目","确认删除题目",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes)==QMessageBox::Yes)
    {
        SqlBases::deleteSubject(subjectList->at(currentTreeItem->parentRow)->list->at(currentTreeItem->row)->id);
        qDebug()<<"delete subject";
        RefreshTree();
    }
}

void ManageTab::on_addCases_btn_clicked()
{
    if(currentTreeItem->parentRow==-1&&currentTreeItem->row==-1)
        return;
    qDebug()<<subjectList->at(currentTreeItem->parentRow)->list->at(currentTreeItem->row)->id;
    addsubjectcase = new AddSubjectCase(subjectList->at(currentTreeItem->parentRow)->list->at(currentTreeItem->row)->id);
    addsubjectcase->show();
}


void ManageTab::on_deleteCases_btn_clicked()
{
    qDebug()<<ui->testCase_tableView->currentIndex().row();
    SqlBases::deleteSubjectCase(caseList->at(ui->testCase_tableView->currentIndex().row())->id);
}
