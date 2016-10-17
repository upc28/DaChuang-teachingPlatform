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
    QStringList columItemList;

    QTreeWidgetItem* child;
    QString a = "key",b ="value";
    columItemList<<a<<b;
    child = new QTreeWidgetItem(columItemList);
    QStringList columItemList2;
    columItemList.clear();
    QTreeWidgetItem* child2;
    QString a2 = "key2",b2 ="value2";
    columItemList<<a2<<b2;
    child2 = new QTreeWidgetItem(columItemList);
    treeWidget->addTopLevelItem(child);
    child->addChild(child2);
    /************************/
    Subject* tsubject;
    for(int i=0;i < serverSocket->subject_vector->count();i++)
    {

    }

}

ManageTab::~ManageTab()
{
    delete ui;
}
