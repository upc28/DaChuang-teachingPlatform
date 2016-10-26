/********************************************************************************
** Form generated from reading UI file 'addsubjectcase.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUBJECTCASE_H
#define UI_ADDSUBJECTCASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddSubjectCase
{
public:
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddSubjectCase)
    {
        if (AddSubjectCase->objectName().isEmpty())
            AddSubjectCase->setObjectName(QStringLiteral("AddSubjectCase"));
        AddSubjectCase->resize(478, 218);
        textEdit = new QTextEdit(AddSubjectCase);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 40, 181, 161));
        textEdit_2 = new QTextEdit(AddSubjectCase);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(220, 40, 181, 161));
        label = new QLabel(AddSubjectCase);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 54, 12));
        label_2 = new QLabel(AddSubjectCase);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 10, 54, 12));
        pushButton = new QPushButton(AddSubjectCase);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 110, 61, 41));
        pushButton_2 = new QPushButton(AddSubjectCase);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 162, 61, 41));

        retranslateUi(AddSubjectCase);

        QMetaObject::connectSlotsByName(AddSubjectCase);
    } // setupUi

    void retranslateUi(QDialog *AddSubjectCase)
    {
        AddSubjectCase->setWindowTitle(QApplication::translate("AddSubjectCase", "Dialog", 0));
        label->setText(QApplication::translate("AddSubjectCase", "\350\276\223\345\205\245", 0));
        label_2->setText(QApplication::translate("AddSubjectCase", "\350\276\223\345\207\272", 0));
        pushButton->setText(QApplication::translate("AddSubjectCase", "\346\267\273\345\212\240", 0));
        pushButton_2->setText(QApplication::translate("AddSubjectCase", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class AddSubjectCase: public Ui_AddSubjectCase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUBJECTCASE_H
