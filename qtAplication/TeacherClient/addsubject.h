#ifndef ADDSUBJECT_H
#define ADDSUBJECT_H

#include <QDialog>
#include "socket.h"
#include "manageTab.h"
#include "bases.h"

namespace Ui {
class AddSubject;
}

class AddSubject : public QDialog
{
    Q_OBJECT

public:
    explicit AddSubject(QList<SubjectList*> *l);
    ~AddSubject();

private slots:
    void on_Btn_add_clicked();

private:
    Ui::AddSubject *ui;
    Socket* serverSocket;

    QList<SubjectList*> *list;
};

#endif // ADDSUBJECT_H
