#ifndef MANAGETAB_H
#define MANAGETAB_H

#include <QWidget>
#include "socket.h"
#include "addsubject.h"
#include "addsubjectcase.h"
#include "sqlbases.h"
#include "bases.h"

namespace Ui {
class ManageTab;
}




class ManageTab : public QWidget
{
    Q_OBJECT

public:
    explicit ManageTab();
    ~ManageTab();

private slots:
    void RefreshTree();

    void on_subject_treeWidget_doubleClicked(const QModelIndex &index);

    void on_addSubject_btn_clicked();

    void on_deleteSubject_btn_clicked();

    void on_addCases_btn_clicked();

    void on_deleteCases_btn_clicked();

private:
    Ui::ManageTab *ui;
    Socket* serverSocket;
    //AddSubject* addsubject;
    AddSubjectCase* addsubjectcase;
    CurrentTreeItem *currentTreeItem;
    void RefreshCaseList();


    QList<SubjectList*> *subjectList;
    QList<_Case*> *caseList;
};

#endif // MANAGETAB_H
