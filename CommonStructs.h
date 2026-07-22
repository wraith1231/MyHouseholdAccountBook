#ifndef COMMONSTRUCTS_H
#define COMMONSTRUCTS_H

#include <QString>
#include <QDate>
#include "CommonTypes.h"

struct Transaction
{
    int id;
    QDate date;
    TransactionType type;
    QString category;
    QString memo;
    QString currency;
    double exchangeRate;
    double money;
};

#endif // COMMONSTRUCTS_H
