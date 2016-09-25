#ifndef STUDENTTAB_H
#define STUDENTTAB_H

#include <QWidget>

namespace Ui {
class StudentTab;
}

class StudentTab : public QWidget
{
    Q_OBJECT

public:
    explicit StudentTab(QWidget *parent = 0);
    ~StudentTab();

private:
    Ui::StudentTab *ui;
};

#endif // STUDENTTAB_H
