#ifndef SUMMARYWINDOW_H
#define SUMMARYWINDOW_H

#include <QWidget>

namespace Ui {
class SummaryWindow;
}

class SummaryWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SummaryWindow(QWidget *parent = nullptr);
    ~SummaryWindow();

private:
    Ui::SummaryWindow *ui;
};

#endif // SUMMARYWINDOW_H
