#include "studentTab.h"
#include "ui_studentTab.h"

StudentTab::StudentTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentTab)
{
    ui->setupUi(this);
}

StudentTab::~StudentTab()
{
    delete ui;
}
