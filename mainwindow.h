#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MonthlySummary;
class MonthlyDetails;

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

private slots:
    void on_ButtonDetailsInsert_clicked();

    void on_ButtonDetailsUpdate_clicked();

    void on_ButtonDetailsDelete_clicked();

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_SearchDetails_textChanged();

private:
    Ui::MainWindow *ui;
    MonthlySummary* _monthlySummary;
    MonthlyDetails* _monthlyDetails;
};
#endif // MAINWINDOW_H
