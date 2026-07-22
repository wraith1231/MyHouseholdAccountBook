#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./monthlysummary.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Time Set Start
    ui->dateEdit->setDisplayFormat("yyyy-MM");
    ui->dateEdit->setCalendarPopup(true);

    ui->dateEdit->setDate(QDate::currentDate());


    //Time Set End

    //_monthlySummary = new MonthlySummary(ui->MonthlySummaryView, this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ButtonDetailsInsert_clicked()
{

}


void MainWindow::on_ButtonDetailsUpdate_clicked()
{

}


void MainWindow::on_ButtonDetailsDelete_clicked()
{

}


void MainWindow::on_dateEdit_userDateChanged(const QDate &date)
{

}

