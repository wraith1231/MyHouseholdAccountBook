#include "adddetailswindow.h"
#include "ui_adddetailswindow.h"
#include "./CommonStructs.h"
#include <QDateEdit>
#include "./CommonTypes.h"

AddDetailsWindow::AddDetailsWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddDetailsWindow)
{

    Init();
}

AddDetailsWindow::AddDetailsWindow(const Transaction &transaction, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddDetailsWindow)
    , _data(transaction)
{

    Init();
}

AddDetailsWindow::~AddDetailsWindow()
{
    delete ui;
}

void AddDetailsWindow::Init()
{
    if(!_data.has_value())
    {
        _data->id = -1;
        _data->date = ui->DateDetailsAdd->date();
        _data->type = TransactionType::Income;
        //_data->category = static_cast<IncomeCategory>( IncomeCategory::Salary);
        //_data->currency = Currency::KRW;
    }

    ui->setupUi(this);
}

void AddDetailsWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{

}