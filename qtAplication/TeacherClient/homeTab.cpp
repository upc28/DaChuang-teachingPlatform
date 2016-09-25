#include "homeTab.h"
#include "ui_homeTab.h"

HomeTab::HomeTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeTab)
{
    ui->setupUi(this);
}

HomeTab::~HomeTab()
{
    delete ui;
}
