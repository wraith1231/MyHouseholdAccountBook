#include "wealthwindow.h"
#include "ui_wealthwindow.h"

WealthWindow::WealthWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WealthWindow)
{
    ui->setupUi(this);
}

WealthWindow::~WealthWindow()
{
    delete ui;
}
