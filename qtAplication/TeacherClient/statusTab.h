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
    explicit StatusTab();
    ~StatusTab();

private slots:
    void refreshTitleBox();

    void on_title_chapterComboBox_currentIndexChanged(int index);

private:
    Ui::StatusTab *ui;
    Socket* serverSocket;
    void refreshTitleBox_subject(int i);
};

#endif // STATUSTAB_H
