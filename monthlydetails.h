#ifndef MONTHLYDETAILS_H
#define MONTHLYDETAILS_H

#include <QObject>
#include <QTableView>
#include <QStandardItemModel>

class TransactionManager;

class MonthlyDetails : public QObject
{
public:
    explicit MonthlyDetails(QTableView* tableView, TransactionManager* tm, QObject *parent = nullptr);
    void Init();

    void Refresh();
    void RefreshCurrentMonth(QDate date);
    void RefreshCurrentMonthSearch(QDate date, QString search);

    int CurrentIndex();
private:
    QTableView* _tableView;
    QStandardItemModel* _model;
    TransactionManager* _tm;

};

#endif // MONTHLYDETAILS_H
