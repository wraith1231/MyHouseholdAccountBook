#include "adddetailswindow.h"
#include "ui_adddetailswindow.h"
#include "./CommonStructs.h"
#include <QDateEdit>
#include "./CommonTypes.h"
#include "enumconverter.h"
#include "transactionmanager.h"

AddDetailsWindow::AddDetailsWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddDetailsWindow)
{
    ui->setupUi(this);
    ui->DateDetailsAdd->setDate(QDate::currentDate());

    Init();
}

AddDetailsWindow::AddDetailsWindow(const Transaction &transaction, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddDetailsWindow)
    , _data(transaction)
{
    ui->setupUi(this);

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
        _data.emplace();
        _data->date = ui->DateDetailsAdd->date();
        _data->type = TransactionType::Income;
        _data->category = EnumConverter::ToString(IncomeCategory::Salary);
        _data->currency = Currency::KRW;
        _data->memo = "";
        _data->exchangeRate = 1.0f;
        _data->money = 0;
    }

    ui->ComboboxDetailsAddType->setCurrentIndex(static_cast<int>(_data->type));

    ClearCategoryItems(_data->type);
    switch (_data->type) {
    case TransactionType::Income:
        ui->ComboboxDetailsAddCategory->setCurrentIndex(static_cast<int>(EnumConverter::ToIncomeCategory(_data->category)));
        break;
    case TransactionType::Expense:
        ui->ComboboxDetailsAddCategory->setCurrentIndex(static_cast<int>(EnumConverter::ToExpenseCategory(_data->category)));
        break;
    case TransactionType::Transfer:
        ui->ComboboxDetailsAddCategory->setCurrentIndex(static_cast<int>(EnumConverter::ToTransferCategory(_data->category)));
        break;
    }

    ui->ComboboxDetailsAddCurrency->setCurrentIndex(static_cast<int>(_data->currency));
    ui->SpinboxDetailsAddExchangeRate->setMaximum(10000000);
    on_ComboboxDetailsAddCurrency_currentIndexChanged(static_cast<int>(_data->currency));
    ui->SpinboxDetailsAddExchangeRate->setValue(_data->exchangeRate);
    ui->SpinboxDetailsAddMoney->setValue(_data->money);
    ui->TextDetailAddMemo->setText(_data->memo);

}


void AddDetailsWindow::ClearCategoryItems(TransactionType t)
{
    switch(t)
    {
    case TransactionType::Income:
        ui->ComboboxDetailsAddCategory->clear();
        for(int i = 0; i < static_cast<int>(IncomeCategory::Etc) + 1; i++)
            ui->ComboboxDetailsAddCategory->addItem(EnumConverter::ToString(static_cast<IncomeCategory>(i)));

        break;
    case TransactionType::Expense:
        ui->ComboboxDetailsAddCategory->clear();
        for(int i = 0; i < static_cast<int>(ExpenseCategory::Etc) + 1; i++)
            ui->ComboboxDetailsAddCategory->addItem(EnumConverter::ToString(static_cast<ExpenseCategory>(i)));
        break;
    case TransactionType::Transfer:
        ui->ComboboxDetailsAddCategory->clear();
        for(int i = 0; i < static_cast<int>(TransferCategory::Etc) + 1; i++)
            ui->ComboboxDetailsAddCategory->addItem(EnumConverter::ToString(static_cast<TransferCategory>(i)));
        break;
    }
    ui->ComboboxDetailsAddCategory->setCurrentIndex(0);
}
void AddDetailsWindow::on_ComboboxDetailsAddType_currentIndexChanged(int index)
{
    ClearCategoryItems(static_cast<TransactionType>(index));
}


void AddDetailsWindow::on_ComboboxDetailsAddCurrency_currentIndexChanged(int index)
{
    if (index == static_cast<int>(Currency::KRW))
    {
        ui->SpinboxDetailsAddExchangeRate->setEnabled(false);
        ui->SpinboxDetailsAddExchangeRate->setValue(1);
    }
    else ui->SpinboxDetailsAddExchangeRate->setEnabled(true);
}


void AddDetailsWindow::on_buttonBox_accepted()
{
    _data->date = ui->DateDetailsAdd->date();
    _data->type = static_cast<TransactionType>(ui->ComboboxDetailsAddType->currentIndex());

    _data->category = ui->ComboboxDetailsAddCategory->currentText();
    _data->memo = ui->TextDetailAddMemo->text();
    _data->currency = static_cast<Currency>(ui->ComboboxDetailsAddCurrency->currentIndex());
    _data->exchangeRate = ui->SpinboxDetailsAddExchangeRate->value();
    _data->money = ui->SpinboxDetailsAddMoney->value();

    accept();
}

