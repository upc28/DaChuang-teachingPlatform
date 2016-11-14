#ifndef MANAGETAB_H
#define MANAGETAB_H

#include <QWidget>
#include "socket.h"
#include "addsubject.h"
#include "addsubjectcase.h"
#include "sqlbases.h"

namespace Ui {
class ManageTab;
}



class ManageTab : public QWidget
{
    Q_OBJECT

public:
    explicit ManageTab(Socket *s);
    ~ManageTab();

private slots:
    void RefreshTree();

    void on_subject_treeWidget_doubleClicked(const QModelIndex &index);

    void on_addSubject_btn_clicked();

    void on_deleteSubject_btn_clicked();

    void on_addCases_btn_clicked();

private:
    Ui::ManageTab *ui;
    Socket* serverSocket;
    AddSubject* addsubject;
    AddSubjectCase* addsubjectcase;
    CurrentTreeItem *currentTreeItem;
    void RefreshCaseList(QList<_case *> *list);
};

#endif // MANAGETAB_H
