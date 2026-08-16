#ifndef WEALTHWINDOW_H
#define WEALTHWINDOW_H

#include <QWidget>

namespace Ui {
class WealthWindow;
}

class WealthWindow : public QWidget
{
    Q_OBJECT

public:
    explicit WealthWindow(QWidget *parent = nullptr);
    ~WealthWindow();

private:
    Ui::WealthWindow *ui;
};

#endif // WEALTHWINDOW_H
