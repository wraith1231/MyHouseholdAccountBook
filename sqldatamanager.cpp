#include "sqldatamanager.h"
#include "CommonStructs.h"
#include "enumconverter.h"

SQLDataManager::SQLDataManager()
{
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("household.db");

    if(!_db.open())
    {
        qDebug() << _db.lastError().text();
        return;
    }

    QSqlQuery query;
    if(!query.exec(""
                    "CREATE TABLE IF NOT EXISTS transactions("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "date TEXT,"
                    "type TEXT,"
                    "category TEXT,"
                    "memo TEXT,"
                    "currency TEXT,"
                    "exchangeRate REAL,"
                    "money REAL)"))
    {
        qDebug() << query.lastError().text();
        return;
    }

}

bool SQLDataManager::InsertTransaction(Transaction& t)
{
    QSqlQuery query;
    query.prepare(
        "INSERT INTO transactions(date, type, category, memo, currency, exchangeRate, money) "
        "VALUES (:date, :type, :category, :memo, :currency, :exchangeRate, :money);");

    query.bindValue(":date", t.date.toString("yyyy-MM-dd"));
    query.bindValue(":type", EnumConverter::ToKorean(t.type));
    query.bindValue(":category", t.category);
    query.bindValue(":memo", t.memo);
    query.bindValue(":currency", EnumConverter::ToKorean(t.currency));
    query.bindValue(":exchangeRate", t.exchangeRate);
    query.bindValue(":money", t.money);

    if(!query.exec())
    {
        qDebug() << query.lastError().text();
        return false;
    }

    t.id = query.lastInsertId().toInt();
    return true;
}

bool SQLDataManager::DeleteTransaction(const Transaction& t)
{
    QSqlQuery query;
    query.prepare("DELETE FROM transactions WHERE id = :id;");
    query.bindValue(":id", t.id);

    if(!query.exec())
    {
        qDebug() << query.lastError().text();
        return false;
    }

    return true;
}
bool SQLDataManager::DeleteTransaction(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM transactions WHERE id = :id;");
    query.bindValue(":id", id);

    if(!query.exec())
    {
        qDebug() << query.lastError().text();
        return false;
    }

    return true;
}

bool SQLDataManager::UpdateTransaction(Transaction &t)
{
    QSqlQuery query;
    query.prepare("UPDATE transactions SET "
                  "date = :date,"
                  "type = :type,"
                  "category = :category,"
                  "memo = :memo,"
                  "currency = :currency,"
                  "exchangeRate = :exchangeRate,"
                  "money = :money "
                  "WHERE id = :id;");
    query.bindValue(":id", t.id);
    query.bindValue(":date", t.date.toString("yyyy-MM-dd"));
    query.bindValue(":type", EnumConverter::ToKorean(t.type));
    query.bindValue(":category", t.category);
    query.bindValue(":memo", t.memo);
    query.bindValue(":currency", EnumConverter::ToKorean(t.currency));
    query.bindValue(":exchangeRate", t.exchangeRate);
    query.bindValue(":money", t.money);
    if(!query.exec())
    {
        qDebug() << query.lastError().text();
        return false;
    }
    return true;
}

std::vector<Transaction> SQLDataManager::SelectTransactions(QString q)
{
    std::vector<Transaction> transactions;
    QSqlQuery query;
    if(!query.exec(q))
    {
        qDebug() << query.lastError().text();
        return transactions;
    }

    while(query.next())
    {
        Transaction t;
        t.id = query.value("id").toInt();
        t.date = query.value("date").toDate();
        t.type = EnumConverter::ToTransactionType( query.value("type").toString());
        t.category = query.value("category").toString();
        t.memo = query.value("memo").toString();
        t.currency = EnumConverter::ToCurrency( query.value("currency").toString());
        t.exchangeRate = query.value("exchangeRate").toDouble();
        t.money = query.value("money").toDouble();

        transactions.push_back(t);
    }

    return transactions;
}

std::vector<Transaction> SQLDataManager::SelectAllTransactionsFromTransactions()
{
    return SelectTransactions("SELECT id, date, type, category, memo, currency, exchangeRate, money FROM transactions");
}
