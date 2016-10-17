#ifndef MANAGETAB_H
#define MANAGETAB_H

#include <QWidget>
#include "socket.h"

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

private:
    Ui::ManageTab *ui;
    Socket* serverSocket;
};

#endif // MANAGETAB_H
