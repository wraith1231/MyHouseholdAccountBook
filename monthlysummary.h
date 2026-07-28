#ifndef MONTHLYSUMMARY_H
#define MONTHLYSUMMARY_H

#include <QObject>
#include <QTableView>
#include <QStandardItemModel>

class TransactionManager;

class MonthlySummary : public QObject
{
    Q_OBJECT
public:
    explicit MonthlySummary(TransactionManager* tm, QTableView* tableView, QObject *parent = nullptr);
    void SetupModel();
    void Refresh(QDate date);
    //void AddData(const QString &import, const QString &spending, const QString &saving);

private:
    QTableView* _tableView;
    QStandardItemModel* _model;
    TransactionManager* _tm;
};

#endif // MONTHLYSUMMARY_H
