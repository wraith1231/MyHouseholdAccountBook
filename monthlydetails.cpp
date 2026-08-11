#include "monthlydetails.h"
#include <QHeaderView>
#include <QDate>
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
        items.append(new QStandardItem(EnumConverter::ToKorean(t.type)));
        items.append(new QStandardItem(t.category));
        items.append(new QStandardItem(t.memo));
        items.append(new QStandardItem(EnumConverter::ToKorean(t.currency)));
        items.append(new QStandardItem(QString::number(t.exchangeRate, 'f', 2)));

        QLocale locale(QLocale::Korean);
        items.append(new QStandardItem(locale.toString(t.money, 'f', 2)));
        items.first()->setData(t.id, Qt::UserRole);

        _model->appendRow(items);
    }
}

void MonthlyDetails::RefreshCurrentMonth(QDate date)
{
    _model->clear();
    _model->setHorizontalHeaderLabels({"날짜", "구분", "카테고리",  "내용", "화폐", "환율", "금액"});

    const auto& transactions = _tm->GetTransactionVector();

    QDate begin(date.year(), date.month(), 1);
    QDate end = begin.addMonths(1);

    for (const auto& t : transactions)
    {
        if(t.date >= begin && t.date < end)
        {
            QList<QStandardItem*> items;

            items.append(new QStandardItem(t.date.toString("MM/dd")));
            items.append(new QStandardItem(EnumConverter::ToKorean(t.type)));
            items.append(new QStandardItem(t.category));
            items.append(new QStandardItem(t.memo));
            items.append(new QStandardItem(EnumConverter::ToKorean(t.currency)));
            items.append(new QStandardItem(QString::number(t.exchangeRate, 'f', 2)));
            QLocale locale(QLocale::Korean);
            items.append(new QStandardItem(locale.toString(t.money, 'f', 2)));
            items.first()->setData(t.id, Qt::UserRole);

            _model->appendRow(items);
        }
    }
}

void MonthlyDetails::RefreshCurrentMonthSearch(QDate date, QString search)
{
    _model->clear();
    _model->setHorizontalHeaderLabels({"날짜", "구분", "카테고리",  "내용", "화폐", "환율", "금액"});

    const auto& transactions = _tm->GetTransactionVector();

    QDate begin(date.year(), date.month(), 1);
    QDate end = begin.addMonths(1);

    for (const auto& t : transactions)
    {
        if(t.date >= begin && t.date < end)
        {
            if(! (t.memo.contains(search, Qt::CaseInsensitive) || t.category.contains(search, Qt::CaseInsensitive)))
                continue;

            QList<QStandardItem*> items;

            items.append(new QStandardItem(t.date.toString("MM/dd")));
            items.append(new QStandardItem(EnumConverter::ToKorean(t.type)));
            items.append(new QStandardItem(t.category));
            items.append(new QStandardItem(t.memo));
            items.append(new QStandardItem(EnumConverter::ToKorean(t.currency)));
            items.append(new QStandardItem(QString::number(t.exchangeRate, 'f', 2)));
            QLocale locale(QLocale::Korean);
            items.append(new QStandardItem(locale.toString(t.money, 'f', 2)));
            items.first()->setData(t.id, Qt::UserRole);

            _model->appendRow(items);
        }
    }
}

int MonthlyDetails::CurrentIndex()
{
    return _model->item(_tableView->currentIndex().row(), 0)->data(Qt::UserRole).toInt();
}