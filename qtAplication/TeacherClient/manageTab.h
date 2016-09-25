#ifndef MANAGETAB_H
#define MANAGETAB_H

#include <QWidget>

namespace Ui {
class ManageTab;
}

class ManageTab : public QWidget
{
    Q_OBJECT

public:
    explicit ManageTab(QWidget *parent = 0);
    ~ManageTab();

private:
    Ui::ManageTab *ui;
};

#endif // MANAGETAB_H
