#ifndef HOMETAB_H
#define HOMETAB_H

#include <QWidget>
#include "socket.h"

namespace Ui {
class HomeTab;
}

class HomeTab : public QWidget
{
    Q_OBJECT

public:
    explicit HomeTab();

    ~HomeTab();

private slots:


    void on_login_loginBtn_clicked();

private:
    Ui::HomeTab *ui;
    Socket *serverSocket;

};

#endif // HOMETAB_H
