/********************************************************************************
** Form generated from reading UI file 'addsubject.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUBJECT_H
#define UI_ADDSUBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddSubject
{
public:
    QPushButton *Btn_add;
    QPushButton *Btn_cancel;
    QTextEdit *textEdit;
    QComboBox *comBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QTextEdit *textEdit_pre;
    QTextEdit *textEdit_suf;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *AddSubject)
    {
        if (AddSubject->objectName().isEmpty())
            AddSubject->setObjectName(QStringLiteral("AddSubject"));
        AddSubject->resize(505, 496);
        Btn_add = new QPushButton(AddSubject);
        Btn_add->setObjectName(QStringLiteral("Btn_add"));
        Btn_add->setGeometry(QRect(260, 10, 71, 31));
        Btn_cancel = new QPushButton(AddSubject);
        Btn_cancel->setObjectName(QStringLiteral("Btn_cancel"));
        Btn_cancel->setGeometry(QRect(380, 10, 71, 31));
        textEdit = new QTextEdit(AddSubject);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 80, 471, 161));
        comBox = new QComboBox(AddSubject);
        comBox->setObjectName(QStringLiteral("comBox"));
        comBox->setGeometry(QRect(10, 10, 221, 22));
        lineEdit = new QLineEdit(AddSubject);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 50, 341, 20));
        label = new QLabel(AddSubject);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 61, 16));
        label->setAlignment(Qt::AlignCenter);
        textEdit_pre = new QTextEdit(AddSubject);
        textEdit_pre->setObjectName(QStringLiteral("textEdit_pre"));
        textEdit_pre->setGeometry(QRect(10, 280, 221, 191));
        textEdit_suf = new QTextEdit(AddSubject);
        textEdit_suf->setObjectName(QStringLiteral("textEdit_suf"));
        textEdit_suf->setGeometry(QRect(260, 280, 221, 191));
        label_2 = new QLabel(AddSubject);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 260, 54, 12));
        label_3 = new QLabel(AddSubject);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 260, 54, 12));

        retranslateUi(AddSubject);

        QMetaObject::connectSlotsByName(AddSubject);
    } // setupUi

    void retranslateUi(QDialog *AddSubject)
    {
        AddSubject->setWindowTitle(QApplication::translate("AddSubject", "Dialog", 0));
        Btn_add->setText(QApplication::translate("AddSubject", "\346\267\273\345\212\240", 0));
        Btn_cancel->setText(QApplication::translate("AddSubject", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("AddSubject", "\351\242\230\347\233\256", 0));
        label_2->setText(QApplication::translate("AddSubject", "\345\211\215\347\275\256\344\273\243\347\240\201", 0));
        label_3->setText(QApplication::translate("AddSubject", "\345\220\216\347\275\256\344\273\243\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class AddSubject: public Ui_AddSubject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUBJECT_H
