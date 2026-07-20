#ifndef MONTHLYSUMMARY_H
#define MONTHLYSUMMARY_H

#include <QObject>
#include <QTableView>
#include <QStandardItemModel>

class MonthlySummary : public QObject
{
    Q_OBJECT
public:
    explicit MonthlySummary(QTableView* tableView, QObject *parent = nullptr);
    void SetupModel();
    //void AddData(const QString &import, const QString &spending, const QString &saving);

private:
    QTableView* _tableView;
    QStandardItemModel* _model;
};

#endif // MONTHLYSUMMARY_H
