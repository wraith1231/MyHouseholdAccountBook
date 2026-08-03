#ifndef SQLDATAMANAGER_H
#define SQLDATAMANAGER_H
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>


class SQLDataManager
{
public:
    SQLDataManager();

private:
    QSqlDatabase _db;

};

#endif // SQLDATAMANAGER_H
