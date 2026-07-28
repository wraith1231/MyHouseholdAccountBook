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
        QDate begin(date.year(), 1, 1);

        return CalculateRange(begin, begin.addYears(1));
    }
    else
    {
        QDate begin(date.year(), date.month(), 1);

        return CalculateRange(begin, begin.addMonths(1));
    }
}

Result TransactionSummary::CalculateRange(QDate begin, QDate end)
{
    const auto& transactions = _tm->GetTransactionVector();

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

