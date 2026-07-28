#include "monthlysummary.h"
#include <QHeaderView>
#include <QDate>
#include "transactionmanager.h"
#include "CommonStructs.h"
#include "CommonTypes.h"

MonthlySummary::MonthlySummary(TransactionManager* tm, QTableView* tableView, QObject *parent) : QObject(parent), _tableView(tableView)
{
    _model = new QStandardItemModel(this);
    _tm = tm;
    SetupModel();
}

void MonthlySummary::SetupModel()
{
    _model->setHorizontalHeaderLabels({"수입", "지출", "저축"});

    _tableView->setModel(_model);

    QHeaderView *header = _tableView->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    /*
    _tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    _tableView->setSortingEnabled(false);
    _tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    _tableView->verticalHeader()->setVisible(false);
*/
}

void MonthlySummary::Refresh(QDate date)
{
    const auto& transactions = _tm->GetTransactionVector();

    QDate begin(date.year(), date.month(), 1);
    QDate end = begin.addMonths(1);

    double income = 0;
    double expense = 0;
    double transfer = 0;
    for (const auto& t : transactions)
    {
        if(t.date >= begin && t.date < end)
        {
            switch(t.type)
            {
            case TransactionType::Income:
                income += t.money * t.exchangeRate;
                break;
            case TransactionType::Expense:
                expense += t.money * t.exchangeRate;
                break;
            case TransactionType::Transfer:
                transfer += t.money * t.exchangeRate;
                break;
            default:
                break;
            }
        }
    }


}

/*
void MonthlySummary::AddData(const QString &import, const QString &spending, const QString &saving)
{
    QList<QStandardItem*> row;

    auto *item0 = new QStandardItem(import);
    item0->setTextAlignment(Qt::AlignRight);

    auto *item1 = new QStandardItem(spending);
    item1->setTextAlignment(Qt::AlignRight);

    auto *item2 = new QStandardItem(saving);
    item2->setTextAlignment(Qt::AlignRight);

    row << item0 << item1 << item2;
    _model->appendRow(row);
}
*/