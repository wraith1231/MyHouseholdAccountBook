#ifndef ADDDETAILSWINDOW_H
#define ADDDETAILSWINDOW_H

#include <QDialog>
#include "./CommonStructs.h"

namespace Ui {
class AddDetailsWindow;
}

class AddDetailsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddDetailsWindow(QWidget *parent = nullptr);
    explicit AddDetailsWindow(const Transaction &transaction, QWidget *parent = nullptr);
    ~AddDetailsWindow();

private slots:
    void Init();
    void on_comboBox_2_currentTextChanged(const QString &arg1);

private:
    Ui::AddDetailsWindow *ui;

    std::optional<Transaction> _data;
};

#endif // ADDDETAILSWINDOW_H
