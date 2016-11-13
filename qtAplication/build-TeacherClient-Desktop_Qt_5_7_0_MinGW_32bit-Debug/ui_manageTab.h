/********************************************************************************
** Form generated from reading UI file 'manageTab.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGETAB_H
#define UI_MANAGETAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageTab
{
public:
    QPushButton *deleteCases_btn;
    QPushButton *addSubject_btn;
    QPushButton *deleteSubject_btn;
    QPushButton *subjectIntroduec_btn;
    QTreeWidget *subject_treeWidget;
    QTableView *testCase_tableView;
    QPushButton *addCases_btn;

    void setupUi(QWidget *ManageTab)
    {
        if (ManageTab->objectName().isEmpty())
            ManageTab->setObjectName(QStringLiteral("ManageTab"));
        ManageTab->resize(831, 446);
        deleteCases_btn = new QPushButton(ManageTab);
        deleteCases_btn->setObjectName(QStringLiteral("deleteCases_btn"));
        deleteCases_btn->setGeometry(QRect(660, 370, 141, 23));
        addSubject_btn = new QPushButton(ManageTab);
        addSubject_btn->setObjectName(QStringLiteral("addSubject_btn"));
        addSubject_btn->setGeometry(QRect(50, 370, 101, 41));
        deleteSubject_btn = new QPushButton(ManageTab);
        deleteSubject_btn->setObjectName(QStringLiteral("deleteSubject_btn"));
        deleteSubject_btn->setGeometry(QRect(370, 20, 101, 41));
        subjectIntroduec_btn = new QPushButton(ManageTab);
        subjectIntroduec_btn->setObjectName(QStringLiteral("subjectIntroduec_btn"));
        subjectIntroduec_btn->setGeometry(QRect(210, 20, 111, 41));
        subject_treeWidget = new QTreeWidget(ManageTab);
        subject_treeWidget->setObjectName(QStringLiteral("subject_treeWidget"));
        subject_treeWidget->setGeometry(QRect(20, 20, 171, 341));
        subject_treeWidget->setFrameShape(QFrame::Box);
        subject_treeWidget->setFrameShadow(QFrame::Sunken);
        subject_treeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        testCase_tableView = new QTableView(ManageTab);
        testCase_tableView->setObjectName(QStringLiteral("testCase_tableView"));
        testCase_tableView->setGeometry(QRect(210, 70, 591, 291));
        testCase_tableView->horizontalHeader()->setHighlightSections(false);
        testCase_tableView->horizontalHeader()->setMinimumSectionSize(120);
        testCase_tableView->verticalHeader()->setMinimumSectionSize(30);
        addCases_btn = new QPushButton(ManageTab);
        addCases_btn->setObjectName(QStringLiteral("addCases_btn"));
        addCases_btn->setGeometry(QRect(210, 370, 141, 23));

        retranslateUi(ManageTab);

        QMetaObject::connectSlotsByName(ManageTab);
    } // setupUi

    void retranslateUi(QWidget *ManageTab)
    {
        ManageTab->setWindowTitle(QApplication::translate("ManageTab", "Form", 0));
        deleteCases_btn->setText(QApplication::translate("ManageTab", "\345\210\240\351\231\244\347\224\250\344\276\213", 0));
        addSubject_btn->setText(QApplication::translate("ManageTab", "\346\267\273\345\212\240\351\242\230\347\233\256", 0));
        deleteSubject_btn->setText(QApplication::translate("ManageTab", "\345\210\240\351\231\244\351\242\230\347\233\256", 0));
        subjectIntroduec_btn->setText(QApplication::translate("ManageTab", "\351\242\230\347\233\256\347\256\200\344\273\213", 0));
        QTreeWidgetItem *___qtreewidgetitem = subject_treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ManageTab", "\351\242\230\347\233\256\345\210\227\350\241\250", 0));
        addCases_btn->setText(QApplication::translate("ManageTab", "\346\267\273\345\212\240\347\224\250\344\276\213", 0));
    } // retranslateUi

};

namespace Ui {
    class ManageTab: public Ui_ManageTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGETAB_H
