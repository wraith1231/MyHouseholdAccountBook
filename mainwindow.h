#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MonthlySummary;
class MonthlyDetails;
class TransactionManager;
class TransactionSummary;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

    void RefreshAll();
    void RefreshTable();
    void RefreshMonthlySummary();
    void RefreshYearlySummary();

private slots:
    void on_ButtonDetailsInsert_clicked();

    void on_ButtonDetailsUpdate_clicked();

    void on_ButtonDetailsDelete_clicked();

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_SearchDetails_textChanged();

    void on_BtnPrevMonth_clicked();

    void on_BtnNextMonth_clicked();

private:
    Ui::MainWindow *ui;
    MonthlySummary* _monthlySummary = nullptr;
    MonthlyDetails* _monthlyDetails = nullptr;
    TransactionManager* _transactionManager = nullptr;
    TransactionSummary* _transactionSummary = nullptr;
};
#endif // MAINWINDOW_H
