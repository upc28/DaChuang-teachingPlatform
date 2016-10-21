#ifndef ADDSUBJECT_H
#define ADDSUBJECT_H

#include <QDialog>
#include "socket.h"

namespace Ui {
class AddSubject;
}

class AddSubject : public QDialog
{
    Q_OBJECT

public:
    explicit AddSubject(Socket* s);
    ~AddSubject();

private slots:
    void on_Btn_add_clicked();

private:
    Ui::AddSubject *ui;
    Socket* serverSocket;
};

#endif // ADDSUBJECT_H
