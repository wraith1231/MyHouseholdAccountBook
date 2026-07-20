#include "monthlysummary.h"
#include <QHeaderView>

MonthlySummary::MonthlySummary(QTableView* tableView, QObject *parent) : QObject(parent), _tableView(tableView)
{
    _model = new QStandardItemModel(this);
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