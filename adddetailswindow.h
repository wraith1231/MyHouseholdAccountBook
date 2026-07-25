#ifndef ADDDETAILSWINDOW_H
#define ADDDETAILSWINDOW_H

#include <QDialog>
#include "./CommonStructs.h"

enum class TransactionType;

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

    void on_ComboboxDetailsAddType_currentIndexChanged(int index);

    void on_ComboboxDetailsAddCurrency_currentIndexChanged(int index);

private:
    Ui::AddDetailsWindow *ui;

    std::optional<Transaction> _data;
    void ClearCategoryItems(TransactionType t);
};

#endif // ADDDETAILSWINDOW_H
