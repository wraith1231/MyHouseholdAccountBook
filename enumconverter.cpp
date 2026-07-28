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

QString EnumConverter::ToKorean(TransactionType t)
{
    switch(t)
    {
    case TransactionType::Income:
        return "수입";
    case TransactionType::Expense:
        return "지출";
    case TransactionType::Transfer:
        return "저축";
    default:
        return "";
    }
}

QString EnumConverter::ToKorean(SortOrder t)
{
    switch(t)
    {
    case SortOrder::Ascending:
        return "오름차순";
    case SortOrder::Descending:
        return "내림차순";
    default:
        return "";
    }
}

QString EnumConverter::ToKorean(Currency t)
{
    switch(t)
    {
    case Currency::KRW:
        return "한화";
    default:
        return "외화";
    }
}

QString EnumConverter::ToKorean(IncomeCategory t)
{
    switch(t)
    {
    case IncomeCategory::Salary:
        return "급여";
    case IncomeCategory::Allowance:
        return "용돈";
    case IncomeCategory::Gift:
        return "선물";
    case IncomeCategory::Interest:
        return "이자";
    case IncomeCategory::Dividend:
        return "배당";
    case IncomeCategory::Etc:
        return "그외";
    default:
        return "";
    }
}

QString EnumConverter::ToKorean(ExpenseCategory t)
{
    switch(t)
    {
    case ExpenseCategory::Food:
        return "식비";
    case ExpenseCategory::Transportation:
        return "교통비";
    case ExpenseCategory::Entertainment:
        return "유흥비";
    case ExpenseCategory::Communication:
        return "통신비";
    case ExpenseCategory::Rent:
        return "월세";
    case ExpenseCategory::Maintenance:
        return "관리비";
    case ExpenseCategory::Insurance:
        return "보험";
    case ExpenseCategory::Interest:
        return "이자";
    case ExpenseCategory::CreditCardPayment:
        return "신용카드대금";
    case ExpenseCategory::Etc:
        return "그외";
    default:
        return "";
    }
}

QString EnumConverter::ToKorean(TransferCategory t)
{
    switch (t) {
    case TransferCategory::Investment:
        return "투자";
    case TransferCategory::Installment:
        return "적금";
    case TransferCategory::Deposit:
        return "예금";
    case TransferCategory::Exchange:
        return "환전";
    case TransferCategory::Etc:
        return "그외";
    default:
        return "";
    }
}

TransactionType EnumConverter::ToTransactionType(QString t)
{
    if (t == "Income" || t == "수입")
        return TransactionType::Income;
    else if(t == "Expense" || t == "지출")
        return TransactionType::Expense;
    else if(t == "Transfer" || t == "저축")
        return TransactionType::Transfer;

    return TransactionType::Income;
}

SortOrder EnumConverter::ToSortOrder(QString t)
{
    if(t == "Ascending" || t == "오름차순")
        return SortOrder::Ascending;
    else
        return SortOrder::Descending;
}

Currency EnumConverter::ToCurrency(QString t)
{
    if(t == "KRW" || t == "한화")
        return Currency::KRW;
    else
        return Currency::Other;
}

IncomeCategory EnumConverter::ToIncomeCategory(QString t)
{
    if(t == "Salary" || t == "급여")
        return IncomeCategory::Salary;
    else if(t == "Allowance" || t == "용돈")
        return IncomeCategory::Allowance;
    else if(t == "Gift" || t == "선물")
        return IncomeCategory::Gift;
    else if(t == "Interest" || t == "이자")
        return IncomeCategory::Interest;
    else if(t == "Dividend" || t == "배당")
        return IncomeCategory::Dividend;
    else
        return IncomeCategory::Etc;
}

ExpenseCategory EnumConverter::ToExpenseCategory(QString t)
{
    if(t == "Food" || t == "식비")
        return ExpenseCategory::Food;
    else if(t == "Transportation" || t == "교통비")
        return ExpenseCategory::Transportation;
    else if(t == "Entertainment" || t == "유흥비")
        return ExpenseCategory::Entertainment;
    else if(t == "Communication" || t == "통신비")
        return ExpenseCategory::Communication;
    else if(t == "Rent" || t == "월세")
        return ExpenseCategory::Rent;
    else if(t == "Maintenance" || t == "관리비")
        return ExpenseCategory::Maintenance;
    else if(t == "Insurance" || t == "보험")
        return ExpenseCategory::Insurance;
    else if(t == "Interest" || t == "이자")
        return ExpenseCategory::Interest;
    else if(t == "CreditCardPayment" || t == "신용카드대금")
        return ExpenseCategory::CreditCardPayment;
    else
        return ExpenseCategory::Etc;
}

TransferCategory EnumConverter::ToTransferCategory(QString t)
{
    if(t == "Investment" || t == "투자")
        return TransferCategory::Investment;
    else if(t == "Installment" || t == "적금")
        return TransferCategory::Installment;
    else if(t == "Deposit" || t == "예금")
        return TransferCategory::Deposit;
    else if(t == "Exchange" || t == "환전")
        return TransferCategory::Exchange;
    else
        return TransferCategory::Etc;
}
