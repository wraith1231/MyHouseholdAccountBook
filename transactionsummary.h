#ifndef TRANSACTIONSUMMARY_H
#define TRANSACTIONSUMMARY_H
#include <QDate>

class TransactionManager;

struct Result { double income; double expense; double transfer;};

class TransactionSummary
{
public:
    TransactionSummary(TransactionManager* tm);
    Result CalculateTransaction(QDate date, bool isYear);
    Result CalculateRange(QDate begin, QDate end);

private:
    TransactionManager* _tm;
};

#endif // TRANSACTIONSUMMARY_H
