#ifndef COMMONTYPES_H
#define COMMONTYPES_H

enum class TransactionType
{
    Income,
    Expense,
    Transfer,
};

enum class SortOrder
{
    Ascending,
    Descending,
};

enum class Currency
{
    KRW,
    Other,
};

enum class IncomeCategory
{
    Salary,
    Allowance,
    Gift,
    Interest,
    Dividend,
    Etc,
};

enum class ExpenseCategory
{
    Food,
    Transportation,
    Entertainment,
    Communication,
    Rent,
    Maintenance,
    Insurance,
    Interest,
    CreditCardPayment,
    Etc,
};

enum class TransferCategory
{
    Investment,
    Installment,
    Deposit,
    Exchange,
    Etc,
};



#endif // COMMONTYPES_H
