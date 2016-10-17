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
#include <QtWidgets/QTableWidget>
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
    QTableWidget *testCase_tableWidget;
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
        testCase_tableWidget = new QTableWidget(ManageTab);
        if (testCase_tableWidget->columnCount() < 3)
            testCase_tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        testCase_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        testCase_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        testCase_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        testCase_tableWidget->setObjectName(QStringLiteral("testCase_tableWidget"));
        testCase_tableWidget->setGeometry(QRect(210, 70, 591, 291));
        testCase_tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        testCase_tableWidget->horizontalHeader()->setDefaultSectionSize(120);
        testCase_tableWidget->verticalHeader()->setDefaultSectionSize(30);
        testCase_tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        testCase_tableWidget->verticalHeader()->setStretchLastSection(false);
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
        QTableWidgetItem *___qtablewidgetitem = testCase_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ManageTab", "\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = testCase_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ManageTab", "\346\226\260\345\273\272\345\210\227", 0));
        QTableWidgetItem *___qtablewidgetitem2 = testCase_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ManageTab", "\346\234\237\345\276\205\350\276\223\345\207\272", 0));
        addCases_btn->setText(QApplication::translate("ManageTab", "\346\267\273\345\212\240\347\224\250\344\276\213", 0));
    } // retranslateUi

};

namespace Ui {
    class ManageTab: public Ui_ManageTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGETAB_H
