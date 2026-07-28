#include "transactionsummary.h"
#include "transactionmanager.h"
#include "CommonStructs.h"
#include "CommonTypes.h"

TransactionSummary::TransactionSummary(TransactionManager* tm)
{
    _tm = tm;
}

Result TransactionSummary::CalculateTransaction(QDate date, bool isYear)
{
    if(isYear == true)
    {
        const auto& transactions = _tm->GetTransactionVector();

        QDate begin(date.year(), 1, 1);
        QDate end = begin.addYears(1);

        Result ret{0, 0, 0};
        for (const auto& t : transactions)
        {
            if(t.date >= begin && t.date < end)
            {
                switch(t.type)
                {
                case TransactionType::Income:
                    ret.income += t.money * t.exchangeRate;
                    break;
                case TransactionType::Expense:
                    ret.expense += t.money * t.exchangeRate;
                    break;
                case TransactionType::Transfer:
                    ret.transfer += t.money * t.exchangeRate;
                    break;
                default:
                    break;
                }
            }
        }
        return ret;
    }
    else
    {
        const auto& transactions = _tm->GetTransactionVector();

        QDate begin(date.year(), date.month(), 1);
        QDate end = begin.addMonths(1);

        Result ret{0, 0, 0};
        for (const auto& t : transactions)
        {
            if(t.date >= begin && t.date < end)
            {
                switch(t.type)
                {
                case TransactionType::Income:
                    ret.income += t.money * t.exchangeRate;
                    break;
                case TransactionType::Expense:
                    ret.expense += t.money * t.exchangeRate;
                    break;
                case TransactionType::Transfer:
                    ret.transfer += t.money * t.exchangeRate;
                    break;
                default:
                    break;
                }
            }
        }
    return ret;
    }
}

