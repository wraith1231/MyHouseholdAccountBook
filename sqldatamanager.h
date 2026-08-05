#ifndef SQLDATAMANAGER_H
#define SQLDATAMANAGER_H
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

struct Transaction;

class SQLDataManager
{
public:
    SQLDataManager();

    bool InsertTransaction(Transaction& t);
    bool DeleteTransaction(const Transaction& t);
    bool DeleteTransaction(int id);
    bool UpdateTransaction(Transaction& t);
    std::vector<Transaction> SelectTransactions(QString q);

    std::vector<Transaction> SelectAllTransactionsFromTransactions();

private:
    QSqlDatabase _db;

};

#endif // SQLDATAMANAGER_H
