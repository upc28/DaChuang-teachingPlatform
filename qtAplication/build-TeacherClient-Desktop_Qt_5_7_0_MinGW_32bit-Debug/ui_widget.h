/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *home;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_4;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *tab_2;
    QTreeWidget *treeWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *tab_4;
    QTreeWidget *treeWidget_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QRadioButton *radioButton;
    QGroupBox *groupBox_2;
    QLabel *label_10;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QLabel *label_11;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_10;
    QRadioButton *radioButton_2;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_11;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(850, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(850, 500));
        Widget->setMaximumSize(QSize(850, 500));
        Widget->setBaseSize(QSize(850, 500));
        Widget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 831, 481));
        tabWidget->setStyleSheet(QLatin1String("QTabBar::tab{width:120}\n"
"QTabBar::tab{height:35}"));
        home = new QWidget();
        home->setObjectName(QStringLiteral("home"));
        textBrowser = new QTextBrowser(home);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(370, 250, 441, 171));
        pushButton_3 = new QPushButton(home);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 330, 120, 30));
        groupBox_4 = new QGroupBox(home);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 50, 311, 211));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 170, 120, 30));
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(79, 40, 171, 31));
        QFont font;
        font.setPointSize(11);
        lineEdit->setFont(font);
        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 54, 12));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 54, 12));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(79, 110, 171, 31));
        lineEdit_2->setFont(font);
        groupBox_5 = new QGroupBox(home);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(370, 50, 271, 141));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 80, 80, 20));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 40, 80, 20));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 40, 80, 20));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 80, 80, 20));
        tabWidget->addTab(home, QString());
        tabWidget->setTabText(tabWidget->indexOf(home), QStringLiteral("Home"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        treeWidget = new QTreeWidget(tab_2);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 311, 421));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 20, 171, 41));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 110, 171, 41));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 210, 171, 41));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        treeWidget_2 = new QTreeWidget(tab_4);
        new QTreeWidgetItem(treeWidget_2);
        new QTreeWidgetItem(treeWidget_2);
        new QTreeWidgetItem(treeWidget_2);
        new QTreeWidgetItem(treeWidget_2);
        new QTreeWidgetItem(treeWidget_2);
        new QTreeWidgetItem(treeWidget_2);
        treeWidget_2->setObjectName(QStringLiteral("treeWidget_2"));
        treeWidget_2->setGeometry(QRect(10, 10, 171, 341));
        treeWidget_2->setFrameShape(QFrame::NoFrame);
        treeWidget_2->setFrameShadow(QFrame::Sunken);
        tableWidget = new QTableWidget(tab_4);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(210, 70, 591, 291));
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(120);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(210, 20, 111, 41));
        pushButton_7 = new QPushButton(tab_4);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 360, 101, 41));
        pushButton_8 = new QPushButton(tab_4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(660, 370, 141, 23));
        pushButton_9 = new QPushButton(tab_4);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(210, 370, 141, 23));
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 601, 71));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 30, 54, 22));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(270, 30, 54, 22));
        label_9->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(80, 30, 161, 22));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(320, 30, 231, 22));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(570, 30, 21, 21));
        radioButton->setIconSize(QSize(20, 20));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(640, 10, 171, 131));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 30, 54, 12));
        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(10, 50, 151, 22));
        comboBox_4 = new QComboBox(groupBox_2);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(10, 100, 151, 22));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 80, 54, 12));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(140, 10, 21, 21));
        radioButton_3->setIconSize(QSize(20, 20));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(640, 150, 171, 51));
        pushButton_10 = new QPushButton(groupBox_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 20, 121, 23));
        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(140, 20, 21, 21));
        radioButton_2->setIconSize(QSize(20, 20));
        tableWidget_2 = new QTableWidget(tab);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(20, 90, 601, 331));
        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(640, 220, 171, 51));
        tabWidget->addTab(tab, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        pushButton_3->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", 0));
        groupBox_4->setTitle(QApplication::translate("Widget", "Login", 0));
        pushButton->setText(QApplication::translate("Widget", "\347\231\273\351\231\206", 0));
        label->setText(QApplication::translate("Widget", "\350\264\246\345\217\267", 0));
        label_2->setText(QApplication::translate("Widget", "\345\247\223\345\220\215", 0));
        groupBox_5->setTitle(QApplication::translate("Widget", "Status", 0));
        label_4->setText(QApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\347\212\266\346\200\201", 0));
        label_3->setText(QApplication::translate("Widget", "\345\234\250\347\272\277\344\272\272\346\225\260", 0));
        label_5->setText(QApplication::translate("Widget", "TextLabel", 0));
        label_6->setText(QApplication::translate("Widget", "TextLabel", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("Widget", "\345\210\206\347\273\204", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("Widget", "\345\255\246\345\217\267", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("Widget", "\345\247\223\345\220\215", 0));
        pushButton_2->setText(QApplication::translate("Widget", "\345\210\206\347\273\204\347\256\241\347\220\206", 0));
        pushButton_4->setText(QApplication::translate("Widget", "\345\217\221\345\270\203\344\273\273\345\212\241", 0));
        pushButton_5->setText(QApplication::translate("Widget", "\345\217\221\345\270\203\345\205\254\345\221\212", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "Student", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_2->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("Widget", "\351\242\230\347\233\256\345\210\227\350\241\250", 0));

        const bool __sortingEnabled = treeWidget_2->isSortingEnabled();
        treeWidget_2->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget_2->topLevelItem(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("Widget", "\347\254\254\344\270\200\347\253\240", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget_2->topLevelItem(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("Widget", "\347\254\254\344\272\214\347\253\240", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget_2->topLevelItem(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("Widget", "\347\254\254\344\270\211\347\253\240", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget_2->topLevelItem(3);
        ___qtreewidgetitem5->setText(0, QApplication::translate("Widget", "\347\254\254\345\233\233\347\253\240", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget_2->topLevelItem(4);
        ___qtreewidgetitem6->setText(0, QApplication::translate("Widget", "\347\254\254\344\272\224\347\253\240", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget_2->topLevelItem(5);
        ___qtreewidgetitem7->setText(0, QApplication::translate("Widget", "\347\254\254\345\205\255\347\253\240", 0));
        treeWidget_2->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "\346\234\237\345\276\205\350\276\223\345\207\272", 0));
        pushButton_6->setText(QApplication::translate("Widget", "\351\242\230\347\233\256\347\256\200\344\273\213", 0));
        pushButton_7->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\351\242\230\347\233\256", 0));
        pushButton_8->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\347\224\250\344\276\213", 0));
        pushButton_9->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\347\224\250\344\276\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Widget", "mannageSubject", 0));
        groupBox->setTitle(QApplication::translate("Widget", "\351\242\230\347\233\256", 0));
        label_8->setText(QApplication::translate("Widget", "\347\253\240\350\212\202", 0));
        label_9->setText(QApplication::translate("Widget", "\351\242\230\347\233\256", 0));
        radioButton->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Widget", "\344\273\273\345\212\241", 0));
        label_10->setText(QApplication::translate("Widget", "\346\227\245\346\234\237", 0));
        label_11->setText(QApplication::translate("Widget", "\351\242\230\347\233\256", 0));
        radioButton_3->setText(QString());
        groupBox_3->setTitle(QApplication::translate("Widget", "\346\227\245\346\234\237", 0));
        pushButton_10->setText(QApplication::translate("Widget", "choose", 0));
        radioButton_2->setText(QString());
        pushButton_11->setText(QApplication::translate("Widget", "\345\210\267\346\226\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "status", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
