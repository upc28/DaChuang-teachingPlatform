/********************************************************************************
** Form generated from reading UI file 'statusTab.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSTAB_H
#define UI_STATUSTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatusTab
{
public:
    QPushButton *refresh_btn;
    QTableWidget *display_tableWidget;
    QGroupBox *groupBox_2;
    QLabel *label_10;
    QComboBox *task_dateComboBox;
    QComboBox *task_subjectComboBox;
    QLabel *label_11;
    QRadioButton *task_rBtn;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_3;
    QPushButton *date_chooseBtn;
    QRadioButton *date_rBtn;
    QGroupBox *groupBox;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *title_chapterComboBox;
    QComboBox *title_subjectComboBox;
    QRadioButton *title_rBtn;

    void setupUi(QWidget *StatusTab)
    {
        if (StatusTab->objectName().isEmpty())
            StatusTab->setObjectName(QStringLiteral("StatusTab"));
        StatusTab->resize(831, 446);
        refresh_btn = new QPushButton(StatusTab);
        refresh_btn->setObjectName(QStringLiteral("refresh_btn"));
        refresh_btn->setGeometry(QRect(630, 230, 171, 51));
        display_tableWidget = new QTableWidget(StatusTab);
        display_tableWidget->setObjectName(QStringLiteral("display_tableWidget"));
        display_tableWidget->setGeometry(QRect(10, 90, 601, 331));
        groupBox_2 = new QGroupBox(StatusTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(630, 10, 171, 131));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 30, 54, 12));
        task_dateComboBox = new QComboBox(groupBox_2);
        task_dateComboBox->setObjectName(QStringLiteral("task_dateComboBox"));
        task_dateComboBox->setGeometry(QRect(10, 50, 151, 22));
        task_subjectComboBox = new QComboBox(groupBox_2);
        task_subjectComboBox->setObjectName(QStringLiteral("task_subjectComboBox"));
        task_subjectComboBox->setGeometry(QRect(10, 100, 151, 22));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 80, 54, 12));
        task_rBtn = new QRadioButton(groupBox_2);
        task_rBtn->setObjectName(QStringLiteral("task_rBtn"));
        task_rBtn->setGeometry(QRect(150, 10, 21, 21));
        task_rBtn->setIconSize(QSize(20, 20));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(140, 160, 21, 21));
        radioButton_4->setIconSize(QSize(20, 20));
        groupBox_3 = new QGroupBox(StatusTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(630, 150, 171, 71));
        date_chooseBtn = new QPushButton(groupBox_3);
        date_chooseBtn->setObjectName(QStringLiteral("date_chooseBtn"));
        date_chooseBtn->setGeometry(QRect(10, 40, 151, 23));
        date_rBtn = new QRadioButton(groupBox_3);
        date_rBtn->setObjectName(QStringLiteral("date_rBtn"));
        date_rBtn->setGeometry(QRect(150, 10, 21, 21));
        date_rBtn->setIconSize(QSize(20, 20));
        groupBox = new QGroupBox(StatusTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 601, 71));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 30, 54, 22));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(250, 30, 54, 22));
        label_9->setAlignment(Qt::AlignCenter);
        title_chapterComboBox = new QComboBox(groupBox);
        title_chapterComboBox->setObjectName(QStringLiteral("title_chapterComboBox"));
        title_chapterComboBox->setGeometry(QRect(60, 30, 161, 22));
        title_subjectComboBox = new QComboBox(groupBox);
        title_subjectComboBox->setObjectName(QStringLiteral("title_subjectComboBox"));
        title_subjectComboBox->setGeometry(QRect(300, 30, 231, 22));
        title_rBtn = new QRadioButton(groupBox);
        title_rBtn->setObjectName(QStringLiteral("title_rBtn"));
        title_rBtn->setGeometry(QRect(570, 30, 21, 21));
        title_rBtn->setIconSize(QSize(20, 20));

        retranslateUi(StatusTab);

        QMetaObject::connectSlotsByName(StatusTab);
    } // setupUi

    void retranslateUi(QWidget *StatusTab)
    {
        StatusTab->setWindowTitle(QApplication::translate("StatusTab", "Form", 0));
        refresh_btn->setText(QApplication::translate("StatusTab", "\345\210\267\346\226\260", 0));
        groupBox_2->setTitle(QApplication::translate("StatusTab", "\344\273\273\345\212\241", 0));
        label_10->setText(QApplication::translate("StatusTab", "\346\227\245\346\234\237", 0));
        label_11->setText(QApplication::translate("StatusTab", "\351\242\230\347\233\256", 0));
        task_rBtn->setText(QString());
        radioButton_4->setText(QString());
        groupBox_3->setTitle(QApplication::translate("StatusTab", "\346\227\245\346\234\237", 0));
        date_chooseBtn->setText(QApplication::translate("StatusTab", "choose", 0));
        date_rBtn->setText(QString());
        groupBox->setTitle(QApplication::translate("StatusTab", "\351\242\230\347\233\256", 0));
        label_8->setText(QApplication::translate("StatusTab", "\347\253\240\350\212\202", 0));
        label_9->setText(QApplication::translate("StatusTab", "\351\242\230\347\233\256", 0));
        title_rBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StatusTab: public Ui_StatusTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUSTAB_H
