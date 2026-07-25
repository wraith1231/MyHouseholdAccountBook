#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./monthlydetails.h"
#include "./adddetailswindow.h"

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
    _monthlyDetails = new MonthlyDetails(ui->tableMonthlyDetails, this);
    //_monthlySummary = new MonthlySummary(ui->MonthlySummaryView, this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ButtonDetailsInsert_clicked()
{
    AddDetailsWindow addDialog(this);
    addDialog.setModal(true);
    addDialog.exec();
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


void MainWindow::on_SearchDetails_textChanged()
{

}

