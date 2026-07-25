#ifndef ENUMCONVERTER_H
#define ENUMCONVERTER_H
#include <QString>

enum class TransactionType;
enum class SortOrder;
enum class Currency;
enum class IncomeCategory;
enum class ExpenseCategory;
enum class TransferCategory;

namespace EnumConverter
{
    QString ToString(TransactionType t);
    QString ToString(SortOrder t);
    QString ToString(Currency t);
    QString ToString(IncomeCategory t);
    QString ToString(ExpenseCategory t);
    QString ToString(TransferCategory t);

    TransactionType ToTransactionType(QString t);
    SortOrder ToSortOrder(QString t);
    Currency ToCurrency(QString t);
    IncomeCategory ToIncomeCategory(QString t);
    ExpenseCategory ToExpenseCategory(QString t);
    TransferCategory ToTransferCategory(QString t);

};

#endif // ENUMCONVERTER_H
