/********************************************************************************
** Form generated from reading UI file 'homeTab.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMETAB_H
#define UI_HOMETAB_H

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

class Ui_HomeTab
{
public:
    QTextBrowser *logBrowser;
    QPushButton *exitBtn_2;
    QGroupBox *groupBox_6;
    QPushButton *login_loginBtn_2;
    QLineEdit *login_account_2;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *login_name_2;
    QGroupBox *groupBox_7;
    QLabel *label_7;
    QLabel *label_12;
    QLabel *status_numOnline_2;
    QLabel *status_serverStatus_2;

    void setupUi(QWidget *HomeTab)
    {
        if (HomeTab->objectName().isEmpty())
            HomeTab->setObjectName(QStringLiteral("HomeTab"));
        HomeTab->resize(831, 446);
        logBrowser = new QTextBrowser(HomeTab);
        logBrowser->setObjectName(QStringLiteral("logBrowser"));
        logBrowser->setGeometry(QRect(390, 230, 411, 171));
        exitBtn_2 = new QPushButton(HomeTab);
        exitBtn_2->setObjectName(QStringLiteral("exitBtn_2"));
        exitBtn_2->setGeometry(QRect(130, 310, 120, 30));
        groupBox_6 = new QGroupBox(HomeTab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(30, 30, 311, 211));
        login_loginBtn_2 = new QPushButton(groupBox_6);
        login_loginBtn_2->setObjectName(QStringLiteral("login_loginBtn_2"));
        login_loginBtn_2->setGeometry(QRect(100, 170, 120, 30));
        login_account_2 = new QLineEdit(groupBox_6);
        login_account_2->setObjectName(QStringLiteral("login_account_2"));
        login_account_2->setGeometry(QRect(79, 40, 171, 31));
        QFont font;
        font.setPointSize(11);
        login_account_2->setFont(font);
        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 50, 54, 12));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 120, 54, 12));
        label_6->setAlignment(Qt::AlignCenter);
        login_name_2 = new QLineEdit(groupBox_6);
        login_name_2->setObjectName(QStringLiteral("login_name_2"));
        login_name_2->setGeometry(QRect(79, 110, 171, 31));
        login_name_2->setFont(font);
        groupBox_7 = new QGroupBox(HomeTab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(390, 30, 271, 141));
        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 80, 80, 20));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 40, 80, 20));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        status_numOnline_2 = new QLabel(groupBox_7);
        status_numOnline_2->setObjectName(QStringLiteral("status_numOnline_2"));
        status_numOnline_2->setGeometry(QRect(140, 40, 80, 20));
        status_serverStatus_2 = new QLabel(groupBox_7);
        status_serverStatus_2->setObjectName(QStringLiteral("status_serverStatus_2"));
        status_serverStatus_2->setGeometry(QRect(140, 80, 80, 20));

        retranslateUi(HomeTab);

        QMetaObject::connectSlotsByName(HomeTab);
    } // setupUi

    void retranslateUi(QWidget *HomeTab)
    {
        HomeTab->setWindowTitle(QApplication::translate("HomeTab", "Form", 0));
        exitBtn_2->setText(QApplication::translate("HomeTab", "\351\200\200\345\207\272", 0));
        groupBox_6->setTitle(QApplication::translate("HomeTab", "Login", 0));
        login_loginBtn_2->setText(QApplication::translate("HomeTab", "\347\231\273\351\231\206", 0));
        label_5->setText(QApplication::translate("HomeTab", "\350\264\246\345\217\267", 0));
        label_6->setText(QApplication::translate("HomeTab", "\345\247\223\345\220\215", 0));
        groupBox_7->setTitle(QApplication::translate("HomeTab", "Status", 0));
        label_7->setText(QApplication::translate("HomeTab", "\346\234\215\345\212\241\345\231\250\347\212\266\346\200\201", 0));
        label_12->setText(QApplication::translate("HomeTab", "\345\234\250\347\272\277\344\272\272\346\225\260", 0));
        status_numOnline_2->setText(QApplication::translate("HomeTab", "TextLabel", 0));
        status_serverStatus_2->setText(QApplication::translate("HomeTab", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class HomeTab: public Ui_HomeTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMETAB_H
