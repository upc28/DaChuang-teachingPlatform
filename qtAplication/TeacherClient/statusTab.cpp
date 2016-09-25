#include "statusTab.h"
#include "ui_statusTab.h"

StatusTab::StatusTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StatusTab)
{
    ui->setupUi(this);
}

StatusTab::~StatusTab()
{
    delete ui;
}
