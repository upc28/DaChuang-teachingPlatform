#include "manageTab.h"
#include "ui_manageTab.h"

ManageTab::ManageTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManageTab)
{
    ui->setupUi(this);
}

ManageTab::~ManageTab()
{
    delete ui;
}
