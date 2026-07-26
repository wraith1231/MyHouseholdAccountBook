#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./monthlydetails.h"
#include "./adddetailswindow.h"
#include "transactionmanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _transactionManager = new TransactionManager();
    //Time Set Start
    ui->dateEdit->setDisplayFormat("yyyy-MM");
    ui->dateEdit->setCalendarPopup(true);

    ui->dateEdit->setDate(QDate::currentDate());


    //Time Set End
    _monthlyDetails = new MonthlyDetails(ui->tableMonthlyDetails, _transactionManager, this);
    //_monthlySummary = new MonthlySummary(ui->MonthlySummaryView, this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::RefreshAll()
{
    _transactionManager->SortByDate();
    _monthlyDetails->Refresh();
}

void MainWindow::RefreshTable()
{

}

void MainWindow::RefreshSummary()
{

}

void MainWindow::on_ButtonDetailsInsert_clicked()
{
    AddDetailsWindow addDialog(this);
    addDialog.setModal(true);
    if (addDialog.exec() == QDialog::Accepted)
    {
        _transactionManager->AddTransaction(addDialog.GetTransaction());
        RefreshAll();
    }

    // connect(&addDialog,
    //         &AddDetailsWindow::TransactionAdded,
    //         this,
    //         &MainWindow::RefreshAll);
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

