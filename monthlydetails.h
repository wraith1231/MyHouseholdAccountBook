#ifndef MONTHLYDETAILS_H
#define MONTHLYDETAILS_H

#include <QObject>
#include <QTableView>
#include <QStandardItemModel>

class MonthlyDetails : public QObject
{
public:
    explicit MonthlyDetails(QTableView* tableView, QObject *parent = nullptr);
    void Init();

private:
    QTableView* _tableView;
    QStandardItemModel* _model;

};

#endif // MONTHLYDETAILS_H
