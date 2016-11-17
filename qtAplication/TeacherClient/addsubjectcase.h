#ifndef ADDSUBJECTCASE_H
#define ADDSUBJECTCASE_H

#include <QDialog>
#include "socket.h"

namespace Ui {
class AddSubjectCase;
}

class AddSubjectCase : public QDialog
{
    Q_OBJECT

public:
    explicit AddSubjectCase(QString subjectid);
    ~AddSubjectCase();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddSubjectCase *ui;
    QString sId;
};

#endif // ADDSUBJECTCASE_H
