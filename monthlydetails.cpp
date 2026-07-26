#include "monthlydetails.h"
#include <QHeaderView>
#include "transactionmanager.h"
#include "CommonStructs.h"
#include "enumconverter.h"

MonthlyDetails::MonthlyDetails(QTableView* tableView, TransactionManager* tm, QObject *parent)
    : _tableView(tableView)
    , _tm(tm)
{
    _model = new QStandardItemModel(this);
    Init();
}

void MonthlyDetails::Init()
{
    _model->setHorizontalHeaderLabels({"날짜", "구분", "카테고리", "내용", "화폐", "환율", "금액"});

    _tableView->setModel(_model);
    _tableView->horizontalHeader()->setStretchLastSection(true);
}

void MonthlyDetails::Refresh()
{
    _model->clear();
    _model->setHorizontalHeaderLabels({"날짜", "구분", "카테고리",  "내용", "화폐", "환율", "금액"});

    const auto& transactions = _tm->GetTransactionVector();
    for(const auto& t : transactions)
    {
        QList<QStandardItem*> items;

        items.append(new QStandardItem(t.date.toString("MM/dd")));
        items.append(new QStandardItem(EnumConverter::ToString(t.type)));
        items.append(new QStandardItem(t.category));
        items.append(new QStandardItem(t.memo));
        items.append(new QStandardItem(EnumConverter::ToString(t.currency)));
        items.append(new QStandardItem(QString::number(t.exchangeRate, 'f', 2)));
        QLocale locale(QLocale::Korean);
        items.append(new QStandardItem(locale.toString(t.money, 'f', 2)));
        // items.append(new QStandardItem(QString::number(t.money, 'f', 2)));

        _model->appendRow(items);
    }
}