/********************************************************************************
** Form generated from reading UI file 'studentTab.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTTAB_H
#define UI_STUDENTTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentTab
{
public:
    QPushButton *publishTask_btn;
    QPushButton *publishAnnounce_btn;
    QPushButton *groupManage_btn;
    QTableWidget *student_TableWidget;

    void setupUi(QWidget *StudentTab)
    {
        if (StudentTab->objectName().isEmpty())
            StudentTab->setObjectName(QStringLiteral("StudentTab"));
        StudentTab->resize(831, 446);
        publishTask_btn = new QPushButton(StudentTab);
        publishTask_btn->setObjectName(QStringLiteral("publishTask_btn"));
        publishTask_btn->setGeometry(QRect(340, 110, 171, 41));
        publishAnnounce_btn = new QPushButton(StudentTab);
        publishAnnounce_btn->setObjectName(QStringLiteral("publishAnnounce_btn"));
        publishAnnounce_btn->setGeometry(QRect(340, 200, 171, 41));
        groupManage_btn = new QPushButton(StudentTab);
        groupManage_btn->setObjectName(QStringLiteral("groupManage_btn"));
        groupManage_btn->setGeometry(QRect(340, 20, 171, 41));
        student_TableWidget = new QTableWidget(StudentTab);
        if (student_TableWidget->columnCount() < 3)
            student_TableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        student_TableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        student_TableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        student_TableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        student_TableWidget->setObjectName(QStringLiteral("student_TableWidget"));
        student_TableWidget->setGeometry(QRect(20, 20, 291, 401));

        retranslateUi(StudentTab);

        QMetaObject::connectSlotsByName(StudentTab);
    } // setupUi

    void retranslateUi(QWidget *StudentTab)
    {
        StudentTab->setWindowTitle(QApplication::translate("StudentTab", "Form", 0));
        publishTask_btn->setText(QApplication::translate("StudentTab", "\345\217\221\345\270\203\344\273\273\345\212\241", 0));
        publishAnnounce_btn->setText(QApplication::translate("StudentTab", "\345\217\221\345\270\203\345\205\254\345\221\212", 0));
        groupManage_btn->setText(QApplication::translate("StudentTab", "\345\210\206\347\273\204\347\256\241\347\220\206", 0));
        QTableWidgetItem *___qtablewidgetitem = student_TableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("StudentTab", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem1 = student_TableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("StudentTab", "\345\255\246\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem2 = student_TableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("StudentTab", "\345\210\206\347\273\204", 0));
    } // retranslateUi

};

namespace Ui {
    class StudentTab: public Ui_StudentTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTTAB_H
