#ifndef MANAGETAB_H
#define MANAGETAB_H

#include <QWidget>
#include "socket.h"
#include "addsubject.h"

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

private:
    Ui::ManageTab *ui;
    Socket* serverSocket;
    AddSubject* addsubject;
};

#endif // MANAGETAB_H
