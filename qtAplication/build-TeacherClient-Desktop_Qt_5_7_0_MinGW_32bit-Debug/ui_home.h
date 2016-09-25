/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QGroupBox *groupBox_4;
    QPushButton *login_loginBtn;
    QLineEdit *login_account;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *login_name;
    QTextBrowser *logBro;
    QPushButton *exitBtn;
    QGroupBox *groupBox_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *status_numOnline;
    QLabel *status_serverStatus;

    void setupUi(QWidget *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QStringLiteral("home"));
        home->resize(831, 446);
        groupBox_4 = new QGroupBox(home);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 50, 311, 211));
        login_loginBtn = new QPushButton(groupBox_4);
        login_loginBtn->setObjectName(QStringLiteral("login_loginBtn"));
        login_loginBtn->setGeometry(QRect(100, 170, 120, 30));
        login_account = new QLineEdit(groupBox_4);
        login_account->setObjectName(QStringLiteral("login_account"));
        login_account->setGeometry(QRect(79, 40, 171, 31));
        QFont font;
        font.setPointSize(11);
        login_account->setFont(font);
        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 54, 12));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 54, 12));
        label_2->setAlignment(Qt::AlignCenter);
        login_name = new QLineEdit(groupBox_4);
        login_name->setObjectName(QStringLiteral("login_name"));
        login_name->setGeometry(QRect(79, 110, 171, 31));
        login_name->setFont(font);
        logBro = new QTextBrowser(home);
        logBro->setObjectName(QStringLiteral("logBro"));
        logBro->setGeometry(QRect(380, 250, 421, 171));
        exitBtn = new QPushButton(home);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(120, 330, 120, 30));
        groupBox_5 = new QGroupBox(home);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(380, 50, 271, 141));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 80, 80, 20));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 40, 80, 20));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        status_numOnline = new QLabel(groupBox_5);
        status_numOnline->setObjectName(QStringLiteral("status_numOnline"));
        status_numOnline->setGeometry(QRect(140, 40, 80, 20));
        status_serverStatus = new QLabel(groupBox_5);
        status_serverStatus->setObjectName(QStringLiteral("status_serverStatus"));
        status_serverStatus->setGeometry(QRect(140, 80, 80, 20));

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QWidget *home)
    {
        home->setWindowTitle(QApplication::translate("home", "Form", 0));
        groupBox_4->setTitle(QApplication::translate("home", "Login", 0));
        login_loginBtn->setText(QApplication::translate("home", "\347\231\273\351\231\206", 0));
        label->setText(QApplication::translate("home", "\350\264\246\345\217\267", 0));
        label_2->setText(QApplication::translate("home", "\345\247\223\345\220\215", 0));
        exitBtn->setText(QApplication::translate("home", "\351\200\200\345\207\272", 0));
        groupBox_5->setTitle(QApplication::translate("home", "Status", 0));
        label_4->setText(QApplication::translate("home", "\346\234\215\345\212\241\345\231\250\347\212\266\346\200\201", 0));
        label_3->setText(QApplication::translate("home", "\345\234\250\347\272\277\344\272\272\346\225\260", 0));
        status_numOnline->setText(QApplication::translate("home", "TextLabel", 0));
        status_serverStatus->setText(QApplication::translate("home", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
