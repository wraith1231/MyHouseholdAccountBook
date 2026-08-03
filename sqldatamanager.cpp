#include "sqldatamanager.h"

SQLDataManager::SQLDataManager()
{
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("household.db");

    if(!_db.open())
    {
        qDebug() << _db.lastError().text();

    }

}
