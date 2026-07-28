#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./monthlydetails.h"
#include "./adddetailswindow.h"
#include "transactionmanager.h"
#include "transactionsummary.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _transactionManager = new TransactionManager();
    //Time Set Start
    ui->dateEdit->setDisplayFormat("yyyy-MM");
    ui->dateEdit->setCalendarPopup(false);

    ui->dateEdit->setDate(QDate::currentDate());


    //Time Set End
    _monthlyDetails = new MonthlyDetails(ui->tableMonthlyDetails, _transactionManager, this);
    _transactionSummary = new TransactionSummary(_transactionManager);
    //_monthlySummary = new MonthlySummary(ui->MonthlySummaryView, this);

}

MainWindow::~MainWindow()
{
    delete _transactionManager;
    delete _monthlyDetails;

    delete ui;
}

void MainWindow::RefreshAll()
{
    _transactionManager->SortByDate();

    RefreshTable();
    RefreshMonthlySummary();
    RefreshYearlySummary();
}

void MainWindow::RefreshTable()
{
    _monthlyDetails->RefreshCurrentMonth(ui->dateEdit->date());
}

void MainWindow::RefreshYearlySummary()
{
    auto r = _transactionSummary->CalculateTransaction(ui->dateEdit->date(), true);
    QLocale locale(QLocale::Korean);
    ui->LabelYearlyIncome->setText(locale.toString(r.income, 'f', 2));
    ui->LabelYearlyExpense->setText(locale.toString(r.expense, 'f', 2));
    ui->LabelYearlySaving->setText(locale.toString(r.transfer, 'f', 2));
    ui->LabelYearlyResult->setText(locale.toString((r.income - r.expense -r.transfer), 'f', 2));
}

void MainWindow::RefreshMonthlySummary()
{
    auto r = _transactionSummary->CalculateTransaction(ui->dateEdit->date(), false);

    QLocale locale(QLocale::Korean);
    ui->LabelMonthlyIncome->setText(locale.toString(r.income, 'f', 2));
    ui->LabelMonthlyExpense->setText(locale.toString(r.expense, 'f', 2));
    ui->LabelMonthlySaving->setText(locale.toString(r.transfer, 'f', 2));
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
    int index = _monthlyDetails->CurrentIndex();
    auto t = _transactionManager->GetTransaction(index);
    if(t == NULL) return;
    AddDetailsWindow addDialog(*t, this);
    addDialog.setModal(true);
    if (addDialog.exec() == QDialog::Accepted)
    {
        _transactionManager->SetTransaction(index, addDialog.GetTransaction());
        RefreshAll();
    }

}


void MainWindow::on_ButtonDetailsDelete_clicked()
{
    int index = _monthlyDetails->CurrentIndex();

    if(index < 0) return;

    _transactionManager->RemoveTransaction(index);
    RefreshAll();
}


void MainWindow::on_dateEdit_userDateChanged(const QDate &date)
{
    if(_transactionManager == nullptr)
        return;
    _transactionManager->SortByDate();

    if(_monthlyDetails == nullptr)
        return;
    RefreshAll();
}


void MainWindow::on_SearchDetails_textChanged()
{

}


void MainWindow::on_BtnPrevMonth_clicked()
{
    auto date = ui->dateEdit->date().addMonths(-1);

    if(date.month() > QDate::currentDate().month() && date.year() >= QDate::currentDate().year()
        || date.year() > QDate::currentDate().year()) return;

    ui->dateEdit->setDate(date);
    RefreshAll();
}


void MainWindow::on_BtnNextMonth_clicked()
{
    auto date = ui->dateEdit->date().addMonths(1);

    if(date.month() > QDate::currentDate().month() && date.year() >= QDate::currentDate().year()
        || date.year() > QDate::currentDate().year()) return;
    ui->dateEdit->setDate(date);
    RefreshAll();
}

