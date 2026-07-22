/********************************************************************************
** Form generated from reading UI file 'adddetailswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDETAILSWINDOW_H
#define UI_ADDDETAILSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddDetailsWindow
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *TextDetailAddMemo;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QDateEdit *DateDetailsAdd;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QComboBox *ComboboxDetailsAddType;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QComboBox *ComboboxDetailsAddCategory;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_8;
    QDoubleSpinBox *SpinboxDetailsAddExchangeRate;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_7;
    QComboBox *ComboboxDetailsAddCurrency;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_9;
    QDoubleSpinBox *SpinboxDetailsAddMoney;

    void setupUi(QDialog *AddDetailsWindow)
    {
        if (AddDetailsWindow->objectName().isEmpty())
            AddDetailsWindow->setObjectName("AddDetailsWindow");
        AddDetailsWindow->resize(727, 199);
        buttonBox = new QDialogButtonBox(AddDetailsWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(380, 160, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        gridLayoutWidget = new QWidget(AddDetailsWindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 20, 711, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        TextDetailAddMemo = new QLineEdit(gridLayoutWidget);
        TextDetailAddMemo->setObjectName("TextDetailAddMemo");

        verticalLayout_4->addWidget(TextDetailAddMemo);


        gridLayout->addLayout(verticalLayout_4, 0, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DateDetailsAdd = new QDateEdit(gridLayoutWidget);
        DateDetailsAdd->setObjectName("DateDetailsAdd");

        verticalLayout->addWidget(DateDetailsAdd);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        ComboboxDetailsAddType = new QComboBox(gridLayoutWidget);
        ComboboxDetailsAddType->addItem(QString());
        ComboboxDetailsAddType->addItem(QString());
        ComboboxDetailsAddType->addItem(QString());
        ComboboxDetailsAddType->setObjectName("ComboboxDetailsAddType");

        verticalLayout_2->addWidget(ComboboxDetailsAddType);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        ComboboxDetailsAddCategory = new QComboBox(gridLayoutWidget);
        ComboboxDetailsAddCategory->setObjectName("ComboboxDetailsAddCategory");

        verticalLayout_3->addWidget(ComboboxDetailsAddCategory);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);

        gridLayoutWidget_2 = new QWidget(AddDetailsWindow);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 90, 711, 61));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName("label_8");

        verticalLayout_8->addWidget(label_8);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_8);

        SpinboxDetailsAddExchangeRate = new QDoubleSpinBox(gridLayoutWidget_2);
        SpinboxDetailsAddExchangeRate->setObjectName("SpinboxDetailsAddExchangeRate");

        verticalLayout_8->addWidget(SpinboxDetailsAddExchangeRate);


        gridLayout_2->addLayout(verticalLayout_8, 0, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName("label_7");

        verticalLayout_7->addWidget(label_7);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_7);

        ComboboxDetailsAddCurrency = new QComboBox(gridLayoutWidget_2);
        ComboboxDetailsAddCurrency->addItem(QString());
        ComboboxDetailsAddCurrency->addItem(QString());
        ComboboxDetailsAddCurrency->setObjectName("ComboboxDetailsAddCurrency");

        verticalLayout_7->addWidget(ComboboxDetailsAddCurrency);


        gridLayout_2->addLayout(verticalLayout_7, 0, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName("label_9");

        verticalLayout_9->addWidget(label_9);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_9);

        SpinboxDetailsAddMoney = new QDoubleSpinBox(gridLayoutWidget_2);
        SpinboxDetailsAddMoney->setObjectName("SpinboxDetailsAddMoney");

        verticalLayout_9->addWidget(SpinboxDetailsAddMoney);


        gridLayout_2->addLayout(verticalLayout_9, 0, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 4);

        retranslateUi(AddDetailsWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddDetailsWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddDetailsWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddDetailsWindow);
    } // setupUi

    void retranslateUi(QDialog *AddDetailsWindow)
    {
        AddDetailsWindow->setWindowTitle(QCoreApplication::translate("AddDetailsWindow", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("AddDetailsWindow", "\353\202\264\354\232\251", nullptr));
        label->setText(QCoreApplication::translate("AddDetailsWindow", "\353\202\240\354\247\234", nullptr));
        label_2->setText(QCoreApplication::translate("AddDetailsWindow", "\352\265\254\353\266\204", nullptr));
        ComboboxDetailsAddType->setItemText(0, QCoreApplication::translate("AddDetailsWindow", "\354\210\230\354\236\205", nullptr));
        ComboboxDetailsAddType->setItemText(1, QCoreApplication::translate("AddDetailsWindow", "\354\247\200\354\266\234", nullptr));
        ComboboxDetailsAddType->setItemText(2, QCoreApplication::translate("AddDetailsWindow", "\354\240\200\354\266\225", nullptr));

        label_3->setText(QCoreApplication::translate("AddDetailsWindow", "\354\271\264\355\205\214\352\263\240\353\246\254", nullptr));
        label_8->setText(QCoreApplication::translate("AddDetailsWindow", "\355\231\230\354\234\250", nullptr));
        label_7->setText(QCoreApplication::translate("AddDetailsWindow", "\355\206\265\355\231\224", nullptr));
        ComboboxDetailsAddCurrency->setItemText(0, QCoreApplication::translate("AddDetailsWindow", "\355\225\234\355\231\224", nullptr));
        ComboboxDetailsAddCurrency->setItemText(1, QCoreApplication::translate("AddDetailsWindow", "\354\231\270\355\231\224", nullptr));

        label_9->setText(QCoreApplication::translate("AddDetailsWindow", "\352\270\210\354\225\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDetailsWindow: public Ui_AddDetailsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDETAILSWINDOW_H
