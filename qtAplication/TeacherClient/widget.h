#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "homeTab.h"
#include "studentTab.h"
#include "manageTab.h"
#include "statusTab.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();


private:
    Ui::Widget *ui;
    HomeTab *homeTab;
    StudentTab *studentTab;
    ManageTab *manageTab;
    StatusTab *statusTab;

};

#endif // WIDGET_H
