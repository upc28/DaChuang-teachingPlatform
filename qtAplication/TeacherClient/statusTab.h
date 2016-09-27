#ifndef STATUSTAB_H
#define STATUSTAB_H

#include <QWidget>
#include "socket.h"

namespace Ui {
class StatusTab;
}

class StatusTab : public QWidget
{
    Q_OBJECT

public:
    explicit StatusTab(QWidget *parent = 0);
    ~StatusTab();

private:
    Ui::StatusTab *ui;
};

#endif // STATUSTAB_H
