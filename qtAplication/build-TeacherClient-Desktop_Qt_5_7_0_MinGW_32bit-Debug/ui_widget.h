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
    QTabWidget *TabWidget;
    QWidget *home_tab;
    QTextBrowser *logBro;
    QPushButton *exitBtn;
    QGroupBox *groupBox_4;
    QPushButton *login_loginBtn;
    QLineEdit *login_account;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *login_name;
    QGroupBox *groupBox_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *status_numOnline;
    QLabel *status_serverStatus;
    QWidget *student_tab;
    QPushButton *groupManage_btn;
    QPushButton *publishTask_btn;
    QPushButton *publishAnnounce_btn;
    QTableWidget *student_TableWidget;
    QWidget *manageSubject_tab;
    QTreeWidget *subject_treeWidget;
    QTableWidget *testCase_tableWidget;
    QPushButton *subjectIntroduec_btn;
    QPushButton *addSubject_btn;
    QPushButton *deleteCases_btn;
    QPushButton *addCases_btn;
    QPushButton *deleteSubject_btn;
    QWidget *status_tab;
    QGroupBox *groupBox;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *title_chapterComboBox;
    QComboBox *title_subjectComboBox;
    QRadioButton *title_rBtn;
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
    QTableWidget *display_tableWidget;
    QPushButton *refresh_btn;

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
        TabWidget = new QTabWidget(Widget);
        TabWidget->setObjectName(QStringLiteral("TabWidget"));
        TabWidget->setGeometry(QRect(10, 10, 831, 481));
        TabWidget->setStyleSheet(QLatin1String("QTabBar::tab{width:120}\n"
"QTabBar::tab{height:35}"));
        home_tab = new QWidget();
        home_tab->setObjectName(QStringLiteral("home_tab"));
        logBro = new QTextBrowser(home_tab);
        logBro->setObjectName(QStringLiteral("logBro"));
        logBro->setGeometry(QRect(370, 250, 441, 171));
        exitBtn = new QPushButton(home_tab);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(110, 330, 120, 30));
        groupBox_4 = new QGroupBox(home_tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 50, 311, 211));
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
        groupBox_5 = new QGroupBox(home_tab);
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
        status_numOnline = new QLabel(groupBox_5);
        status_numOnline->setObjectName(QStringLiteral("status_numOnline"));
        status_numOnline->setGeometry(QRect(140, 40, 80, 20));
        status_serverStatus = new QLabel(groupBox_5);
        status_serverStatus->setObjectName(QStringLiteral("status_serverStatus"));
        status_serverStatus->setGeometry(QRect(140, 80, 80, 20));
        TabWidget->addTab(home_tab, QString());
        TabWidget->setTabText(TabWidget->indexOf(home_tab), QStringLiteral("Home"));
        student_tab = new QWidget();
        student_tab->setObjectName(QStringLiteral("student_tab"));
        groupManage_btn = new QPushButton(student_tab);
        groupManage_btn->setObjectName(QStringLiteral("groupManage_btn"));
        groupManage_btn->setGeometry(QRect(340, 20, 171, 41));
        publishTask_btn = new QPushButton(student_tab);
        publishTask_btn->setObjectName(QStringLiteral("publishTask_btn"));
        publishTask_btn->setGeometry(QRect(340, 110, 171, 41));
        publishAnnounce_btn = new QPushButton(student_tab);
        publishAnnounce_btn->setObjectName(QStringLiteral("publishAnnounce_btn"));
        publishAnnounce_btn->setGeometry(QRect(340, 200, 171, 41));
        student_TableWidget = new QTableWidget(student_tab);
        if (student_TableWidget->columnCount() < 3)
            student_TableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        student_TableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        student_TableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        student_TableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        student_TableWidget->setObjectName(QStringLiteral("student_TableWidget"));
        student_TableWidget->setGeometry(QRect(20, 20, 291, 411));
        TabWidget->addTab(student_tab, QString());
        manageSubject_tab = new QWidget();
        manageSubject_tab->setObjectName(QStringLiteral("manageSubject_tab"));
        subject_treeWidget = new QTreeWidget(manageSubject_tab);
        new QTreeWidgetItem(subject_treeWidget);
        new QTreeWidgetItem(subject_treeWidget);
        new QTreeWidgetItem(subject_treeWidget);
        new QTreeWidgetItem(subject_treeWidget);
        new QTreeWidgetItem(subject_treeWidget);
        new QTreeWidgetItem(subject_treeWidget);
        subject_treeWidget->setObjectName(QStringLiteral("subject_treeWidget"));
        subject_treeWidget->setGeometry(QRect(10, 10, 171, 341));
        subject_treeWidget->setFrameShape(QFrame::NoFrame);
        subject_treeWidget->setFrameShadow(QFrame::Sunken);
        testCase_tableWidget = new QTableWidget(manageSubject_tab);
        if (testCase_tableWidget->columnCount() < 3)
            testCase_tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        testCase_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        testCase_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        testCase_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        testCase_tableWidget->setObjectName(QStringLiteral("testCase_tableWidget"));
        testCase_tableWidget->setGeometry(QRect(210, 70, 591, 291));
        testCase_tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        testCase_tableWidget->horizontalHeader()->setDefaultSectionSize(120);
        testCase_tableWidget->verticalHeader()->setDefaultSectionSize(30);
        testCase_tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        testCase_tableWidget->verticalHeader()->setStretchLastSection(false);
        subjectIntroduec_btn = new QPushButton(manageSubject_tab);
        subjectIntroduec_btn->setObjectName(QStringLiteral("subjectIntroduec_btn"));
        subjectIntroduec_btn->setGeometry(QRect(210, 20, 111, 41));
        addSubject_btn = new QPushButton(manageSubject_tab);
        addSubject_btn->setObjectName(QStringLiteral("addSubject_btn"));
        addSubject_btn->setGeometry(QRect(40, 360, 101, 41));
        deleteCases_btn = new QPushButton(manageSubject_tab);
        deleteCases_btn->setObjectName(QStringLiteral("deleteCases_btn"));
        deleteCases_btn->setGeometry(QRect(660, 370, 141, 23));
        addCases_btn = new QPushButton(manageSubject_tab);
        addCases_btn->setObjectName(QStringLiteral("addCases_btn"));
        addCases_btn->setGeometry(QRect(210, 370, 141, 23));
        deleteSubject_btn = new QPushButton(manageSubject_tab);
        deleteSubject_btn->setObjectName(QStringLiteral("deleteSubject_btn"));
        deleteSubject_btn->setGeometry(QRect(370, 20, 101, 41));
        TabWidget->addTab(manageSubject_tab, QString());
        status_tab = new QWidget();
        status_tab->setObjectName(QStringLiteral("status_tab"));
        groupBox = new QGroupBox(status_tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 601, 71));
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
        groupBox_2 = new QGroupBox(status_tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(640, 10, 171, 131));
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
        groupBox_3 = new QGroupBox(status_tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(640, 150, 171, 71));
        date_chooseBtn = new QPushButton(groupBox_3);
        date_chooseBtn->setObjectName(QStringLiteral("date_chooseBtn"));
        date_chooseBtn->setGeometry(QRect(10, 40, 151, 23));
        date_rBtn = new QRadioButton(groupBox_3);
        date_rBtn->setObjectName(QStringLiteral("date_rBtn"));
        date_rBtn->setGeometry(QRect(150, 10, 21, 21));
        date_rBtn->setIconSize(QSize(20, 20));
        display_tableWidget = new QTableWidget(status_tab);
        display_tableWidget->setObjectName(QStringLiteral("display_tableWidget"));
        display_tableWidget->setGeometry(QRect(20, 90, 601, 331));
        refresh_btn = new QPushButton(status_tab);
        refresh_btn->setObjectName(QStringLiteral("refresh_btn"));
        refresh_btn->setGeometry(QRect(640, 230, 171, 51));
        TabWidget->addTab(status_tab, QString());

        retranslateUi(Widget);

        TabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        exitBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", 0));
        groupBox_4->setTitle(QApplication::translate("Widget", "Login", 0));
        login_loginBtn->setText(QApplication::translate("Widget", "\347\231\273\351\231\206", 0));
        label->setText(QApplication::translate("Widget", "\350\264\246\345\217\267", 0));
        label_2->setText(QApplication::translate("Widget", "\345\247\223\345\220\215", 0));
        groupBox_5->setTitle(QApplication::translate("Widget", "Status", 0));
        label_4->setText(QApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\347\212\266\346\200\201", 0));
        label_3->setText(QApplication::translate("Widget", "\345\234\250\347\272\277\344\272\272\346\225\260", 0));
        status_numOnline->setText(QApplication::translate("Widget", "TextLabel", 0));
        status_serverStatus->setText(QApplication::translate("Widget", "TextLabel", 0));
        groupManage_btn->setText(QApplication::translate("Widget", "\345\210\206\347\273\204\347\256\241\347\220\206", 0));
        publishTask_btn->setText(QApplication::translate("Widget", "\345\217\221\345\270\203\344\273\273\345\212\241", 0));
        publishAnnounce_btn->setText(QApplication::translate("Widget", "\345\217\221\345\270\203\345\205\254\345\221\212", 0));
        QTableWidgetItem *___qtablewidgetitem = student_TableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem1 = student_TableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\345\255\246\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem2 = student_TableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "\345\210\206\347\273\204", 0));
        TabWidget->setTabText(TabWidget->indexOf(student_tab), QApplication::translate("Widget", "Student", 0));
        QTreeWidgetItem *___qtreewidgetitem = subject_treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("Widget", "\351\242\230\347\233\256\345\210\227\350\241\250", 0));

        const bool __sortingEnabled = subject_treeWidget->isSortingEnabled();
        subject_treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = subject_treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("Widget", "\347\254\254\344\270\200\347\253\240", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = subject_treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("Widget", "\347\254\254\344\272\214\347\253\240", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = subject_treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("Widget", "\347\254\254\344\270\211\347\253\240", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = subject_treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("Widget", "\347\254\254\345\233\233\347\253\240", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = subject_treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("Widget", "\347\254\254\344\272\224\347\253\240", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = subject_treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("Widget", "\347\254\254\345\205\255\347\253\240", 0));
        subject_treeWidget->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem3 = testCase_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem4 = testCase_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", 0));
        QTableWidgetItem *___qtablewidgetitem5 = testCase_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget", "\346\234\237\345\276\205\350\276\223\345\207\272", 0));
        subjectIntroduec_btn->setText(QApplication::translate("Widget", "\351\242\230\347\233\256\347\256\200\344\273\213", 0));
        addSubject_btn->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\351\242\230\347\233\256", 0));
        deleteCases_btn->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\347\224\250\344\276\213", 0));
        addCases_btn->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\347\224\250\344\276\213", 0));
        deleteSubject_btn->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\351\242\230\347\233\256", 0));
        TabWidget->setTabText(TabWidget->indexOf(manageSubject_tab), QApplication::translate("Widget", "manageSubject", 0));
        groupBox->setTitle(QApplication::translate("Widget", "\351\242\230\347\233\256", 0));
        label_8->setText(QApplication::translate("Widget", "\347\253\240\350\212\202", 0));
        label_9->setText(QApplication::translate("Widget", "\351\242\230\347\233\256", 0));
        title_rBtn->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Widget", "\344\273\273\345\212\241", 0));
        label_10->setText(QApplication::translate("Widget", "\346\227\245\346\234\237", 0));
        label_11->setText(QApplication::translate("Widget", "\351\242\230\347\233\256", 0));
        task_rBtn->setText(QString());
        radioButton_4->setText(QString());
        groupBox_3->setTitle(QApplication::translate("Widget", "\346\227\245\346\234\237", 0));
        date_chooseBtn->setText(QApplication::translate("Widget", "choose", 0));
        date_rBtn->setText(QString());
        refresh_btn->setText(QApplication::translate("Widget", "\345\210\267\346\226\260", 0));
        TabWidget->setTabText(TabWidget->indexOf(status_tab), QApplication::translate("Widget", "status", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
