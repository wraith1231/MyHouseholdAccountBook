#include "enumconverter.h"
#include "CommonTypes.h"

QString EnumConverter::ToString(TransactionType t)
{
    switch(t)
    {
    case TransactionType::Income:
        return "Income";
    case TransactionType::Expense:
        return "Expense";
    case TransactionType::Transfer:
        return "Transfer";
    default:
        return "";
    }
}

QString EnumConverter::ToString(SortOrder t)
{
    switch(t)
    {
    case SortOrder::Ascending:
        return "Ascending";
    case SortOrder::Descending:
        return "Descending";
    default:
        return "";
    }
}

QString EnumConverter::ToString(Currency t)
{
    switch(t)
    {
    case Currency::KRW:
        return "KRW";
    default:
        return "Other";
    }
}

QString EnumConverter::ToString(IncomeCategory t)
{
    switch(t)
    {
    case IncomeCategory::Salary:
        return "Salary";
    case IncomeCategory::Allowance:
        return "Allowance";
    case IncomeCategory::Gift:
        return "Gift";
    case IncomeCategory::Interest:
        return "Interest";
    case IncomeCategory::Dividend:
        return "Dividend";
    case IncomeCategory::Etc:
        return "Etc";
    default:
        return "";
    }
}

QString EnumConverter::ToString(ExpenseCategory t)
{
    switch(t)
    {
    case ExpenseCategory::Food:
        return "Food";
    case ExpenseCategory::Transportation:
        return "Transportation";
    case ExpenseCategory::Entertainment:
        return "Entertainment";
    case ExpenseCategory::Communication:
        return "Communication";
    case ExpenseCategory::Rent:
        return "Rent";
    case ExpenseCategory::Maintenance:
        return "Maintenance";
    case ExpenseCategory::Insurance:
        return "Insurance";
    case ExpenseCategory::Interest:
        return "Interest";
    case ExpenseCategory::CreditCardPayment:
        return "CreditCardPayment";
    case ExpenseCategory::Etc:
        return "Etc";
    default:
        return "";
    }
}

QString EnumConverter::ToString(TransferCategory t)
{
    switch (t) {
    case TransferCategory::Investment:
        return "Investment";
    case TransferCategory::Installment:
        return "Installment";
    case TransferCategory::Deposit:
        return "Deposit";
    case TransferCategory::Exchange:
        return "Exchange";
    case TransferCategory::Etc:
        return "Etc";
    default:
        return "";
    }
}

TransactionType EnumConverter::ToTransactionType(QString t)
{
    if (t == "Income")
        return TransactionType::Income;
    else if(t == "Expense")
        return TransactionType::Expense;
    else if(t == "Transfer")
        return TransactionType::Transfer;

    return TransactionType::Income;
}

SortOrder EnumConverter::ToSortOrder(QString t)
{
    if(t == "Ascending")
        return SortOrder::Ascending;
    else
        return SortOrder::Descending;
}

Currency EnumConverter::ToCurrency(QString t)
{
    if(t == "KRW")
        return Currency::KRW;
    else
        return Currency::Other;
}

IncomeCategory EnumConverter::ToIncomeCategory(QString t)
{
    if(t == "Salary")
        return IncomeCategory::Salary;
    else if(t == "Allowance")
        return IncomeCategory::Allowance;
    else if(t == "Gift")
        return IncomeCategory::Gift;
    else if(t == "Interest")
        return IncomeCategory::Interest;
    else if(t == "Dividend")
        return IncomeCategory::Dividend;
    else
        return IncomeCategory::Etc;
}

ExpenseCategory EnumConverter::ToExpenseCategory(QString t)
{
    if(t == "Food")
        return ExpenseCategory::Food;
    else if(t == "Transportation")
        return ExpenseCategory::Transportation;
    else if(t == "Entertainment")
        return ExpenseCategory::Entertainment;
    else if(t == "Communication")
        return ExpenseCategory::Communication;
    else if(t == "Rent")
        return ExpenseCategory::Rent;
    else if(t == "Maintenance")
        return ExpenseCategory::Maintenance;
    else if(t == "Insurance")
        return ExpenseCategory::Insurance;
    else if(t == "Interest")
        return ExpenseCategory::Interest;
    else if(t == "CreditCardPayment")
        return ExpenseCategory::CreditCardPayment;
    else
        return ExpenseCategory::Etc;
}

TransferCategory EnumConverter::ToTransferCategory(QString t)
{
    if(t == "Investment")
        return TransferCategory::Investment;
    else if(t == "Installment")
        return TransferCategory::Installment;
    else if(t == "Deposit")
        return TransferCategory::Deposit;
    else if(t == "Exchange")
        return TransferCategory::Exchange;
    else
        return TransferCategory::Etc;
}
