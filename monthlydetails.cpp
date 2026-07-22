#include "monthlydetails.h"
#include <QHeaderView>

MonthlyDetails::MonthlyDetails(QTableView* tableView, QObject *parent)
    : _tableView(tableView)
{
    _model = new QStandardItemModel(this);
    Init();
}

void MonthlyDetails::Init()
{
    _model->setHorizontalHeaderLabels({"날짜", "구분", "내용", "외화", "환율", "금액"});

    _tableView->setModel(_model);
    _tableView->horizontalHeader()->setStretchLastSection(true);
}