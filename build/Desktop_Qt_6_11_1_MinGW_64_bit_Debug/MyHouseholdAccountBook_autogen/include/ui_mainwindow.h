/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDashboard;
    QAction *actionSummary;
    QAction *actionSummary_2;
    QAction *actionSummary_3;
    QAction *actionSetting;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *TitleLayout;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *BtnPrevMonth;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *BtnNextMonth;
    QSpacerItem *horizontalSpacer_2;
    QWidget *gridLayoutWidget;
    QGridLayout *MonthlySummaryLayout;
    QVBoxLayout *MonthlyTitle;
    QLabel *label_10;
    QHBoxLayout *MonthlySummaryCardLayout;
    QFrame *FrameIncome;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *LabelMonthlyIncome;
    QFrame *line_4;
    QFrame *FrameExpense;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *LabelMonthlyExpense;
    QFrame *line_5;
    QFrame *FrameSaving;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_3;
    QLabel *LabelMonthlySaving;
    QFrame *line_3;
    QWidget *gridLayoutWidget_2;
    QGridLayout *DetailsLayout;
    QWidget *widget_5;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_3;
    QWidget *verticalLayoutWidget_13;
    QVBoxLayout *verticalLayout_11;
    QTableView *tableMonthlyDetails;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ButtonDetailsInsert;
    QPushButton *ButtonDetailsUpdate;
    QPushButton *ButtonDetailsDelete;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QTextEdit *SearchDetails;
    QWidget *gridLayoutWidget_3;
    QGridLayout *YearlySummaryLayout;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QGridLayout *gridLayout_4;
    QWidget *widget_2;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_5;
    QLabel *LabelYearlyExpense;
    QFrame *line_6;
    QFrame *line_7;
    QWidget *widget;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_4;
    QLabel *LabelYearlyIncome;
    QWidget *widget_4;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_7;
    QLabel *LabelYearlyResult;
    QWidget *widget_3;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_6;
    QLabel *LabelYearlySaving;
    QFrame *line_8;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 990);
        actionDashboard = new QAction(MainWindow);
        actionDashboard->setObjectName("actionDashboard");
        actionSummary = new QAction(MainWindow);
        actionSummary->setObjectName("actionSummary");
        actionSummary_2 = new QAction(MainWindow);
        actionSummary_2->setObjectName("actionSummary_2");
        actionSummary_3 = new QAction(MainWindow);
        actionSummary_3->setObjectName("actionSummary_3");
        actionSetting = new QAction(MainWindow);
        actionSetting->setObjectName("actionSetting");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(9, 0, 781, 31));
        TitleLayout = new QVBoxLayout(verticalLayoutWidget);
        TitleLayout->setObjectName("TitleLayout");
        TitleLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        TitleLayout->addWidget(label);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(-20, 20, 851, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(-140, 60, 1051, 20));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(9, 30, 781, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        BtnPrevMonth = new QPushButton(horizontalLayoutWidget);
        BtnPrevMonth->setObjectName("BtnPrevMonth");

        horizontalLayout_3->addWidget(BtnPrevMonth);


        horizontalLayout->addLayout(horizontalLayout_3);

        dateEdit = new QDateEdit(horizontalLayoutWidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setCalendarPopup(false);

        horizontalLayout->addWidget(dateEdit);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        BtnNextMonth = new QPushButton(horizontalLayoutWidget);
        BtnNextMonth->setObjectName("BtnNextMonth");

        horizontalLayout_5->addWidget(BtnNextMonth);


        horizontalLayout->addLayout(horizontalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 50);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 10);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 50);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 70, 781, 131));
        MonthlySummaryLayout = new QGridLayout(gridLayoutWidget);
        MonthlySummaryLayout->setObjectName("MonthlySummaryLayout");
        MonthlySummaryLayout->setContentsMargins(0, 0, 0, 0);
        MonthlyTitle = new QVBoxLayout();
        MonthlyTitle->setObjectName("MonthlyTitle");
        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName("label_10");
        QFont font1;
        font1.setPointSize(23);
        font1.setBold(true);
        font1.setItalic(false);
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        MonthlyTitle->addWidget(label_10);


        MonthlySummaryLayout->addLayout(MonthlyTitle, 0, 0, 1, 1);

        MonthlySummaryCardLayout = new QHBoxLayout();
        MonthlySummaryCardLayout->setObjectName("MonthlySummaryCardLayout");
        FrameIncome = new QFrame(gridLayoutWidget);
        FrameIncome->setObjectName("FrameIncome");
        FrameIncome->setFrameShape(QFrame::Shape::StyledPanel);
        FrameIncome->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget_3 = new QWidget(FrameIncome);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(-1, -1, 241, 47));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        LabelMonthlyIncome = new QLabel(verticalLayoutWidget_3);
        LabelMonthlyIncome->setObjectName("LabelMonthlyIncome");
        LabelMonthlyIncome->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->addWidget(LabelMonthlyIncome);


        MonthlySummaryCardLayout->addWidget(FrameIncome);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        MonthlySummaryCardLayout->addWidget(line_4);

        FrameExpense = new QFrame(gridLayoutWidget);
        FrameExpense->setObjectName("FrameExpense");
        FrameExpense->setFrameShape(QFrame::Shape::StyledPanel);
        FrameExpense->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget_4 = new QWidget(FrameExpense);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(-1, -1, 251, 47));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_4);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        LabelMonthlyExpense = new QLabel(verticalLayoutWidget_4);
        LabelMonthlyExpense->setObjectName("LabelMonthlyExpense");
        LabelMonthlyExpense->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_3->addWidget(LabelMonthlyExpense);


        MonthlySummaryCardLayout->addWidget(FrameExpense);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        MonthlySummaryCardLayout->addWidget(line_5);

        FrameSaving = new QFrame(gridLayoutWidget);
        FrameSaving->setObjectName("FrameSaving");
        FrameSaving->setFrameShape(QFrame::Shape::StyledPanel);
        FrameSaving->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget_5 = new QWidget(FrameSaving);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(9, -1, 241, 47));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_5);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_8);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        LabelMonthlySaving = new QLabel(verticalLayoutWidget_5);
        LabelMonthlySaving->setObjectName("LabelMonthlySaving");
        LabelMonthlySaving->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_4->addWidget(LabelMonthlySaving);


        MonthlySummaryCardLayout->addWidget(FrameSaving);


        MonthlySummaryLayout->addLayout(MonthlySummaryCardLayout, 2, 0, 1, 1);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        MonthlySummaryLayout->addWidget(line_3, 1, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 210, 781, 601));
        DetailsLayout = new QGridLayout(gridLayoutWidget_2);
        DetailsLayout->setObjectName("DetailsLayout");
        DetailsLayout->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(gridLayoutWidget_2);
        widget_5->setObjectName("widget_5");
        verticalLayoutWidget_11 = new QWidget(widget_5);
        verticalLayoutWidget_11->setObjectName("verticalLayoutWidget_11");
        verticalLayoutWidget_11->setGeometry(QRect(9, 9, 761, 31));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_11);
        label_3->setObjectName("label_3");
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(label_3);

        verticalLayoutWidget_13 = new QWidget(widget_5);
        verticalLayoutWidget_13->setObjectName("verticalLayoutWidget_13");
        verticalLayoutWidget_13->setGeometry(QRect(9, 89, 761, 501));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_13);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        tableMonthlyDetails = new QTableView(verticalLayoutWidget_13);
        tableMonthlyDetails->setObjectName("tableMonthlyDetails");
        tableMonthlyDetails->setStyleSheet(QString::fromUtf8("\353\202\240\354\247\234\n"
"\352\265\254\353\266\204\n"
"\353\202\264\354\232\251\n"
"\352\270\210\354\225\241\n"
"\353\251\224\353\252\250\n"
""));
        tableMonthlyDetails->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableMonthlyDetails->setAlternatingRowColors(true);
        tableMonthlyDetails->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableMonthlyDetails->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableMonthlyDetails->setSortingEnabled(true);

        verticalLayout_11->addWidget(tableMonthlyDetails);

        horizontalLayoutWidget_3 = new QWidget(widget_5);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 50, 241, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        ButtonDetailsInsert = new QPushButton(horizontalLayoutWidget_3);
        ButtonDetailsInsert->setObjectName("ButtonDetailsInsert");

        horizontalLayout_4->addWidget(ButtonDetailsInsert);

        ButtonDetailsUpdate = new QPushButton(horizontalLayoutWidget_3);
        ButtonDetailsUpdate->setObjectName("ButtonDetailsUpdate");

        horizontalLayout_4->addWidget(ButtonDetailsUpdate);

        ButtonDetailsDelete = new QPushButton(horizontalLayoutWidget_3);
        ButtonDetailsDelete->setObjectName("ButtonDetailsDelete");

        horizontalLayout_4->addWidget(ButtonDetailsDelete);

        horizontalLayoutWidget_2 = new QWidget(widget_5);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(400, 50, 371, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName("label_7");

        horizontalLayout_2->addWidget(label_7);

        SearchDetails = new QTextEdit(horizontalLayoutWidget_2);
        SearchDetails->setObjectName("SearchDetails");
        QFont font4;
        font4.setPointSize(9);
        SearchDetails->setFont(font4);

        horizontalLayout_2->addWidget(SearchDetails);


        DetailsLayout->addWidget(widget_5, 0, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(10, 820, 781, 121));
        YearlySummaryLayout = new QGridLayout(gridLayoutWidget_3);
        YearlySummaryLayout->setObjectName("YearlySummaryLayout");
        YearlySummaryLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName("label_4");
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        label_4->setFont(font5);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_4);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        YearlySummaryLayout->addLayout(gridLayout_3, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        widget_2 = new QWidget(gridLayoutWidget_3);
        widget_2->setObjectName("widget_2");
        verticalLayoutWidget_8 = new QWidget(widget_2);
        verticalLayoutWidget_8->setObjectName("verticalLayoutWidget_8");
        verticalLayoutWidget_8->setGeometry(QRect(0, 0, 181, 54));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget_8);
        label_9->setObjectName("label_9");
        QFont font6;
        font6.setPointSize(11);
        font6.setBold(true);
        label_9->setFont(font6);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_9);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        LabelYearlyExpense = new QLabel(verticalLayoutWidget_8);
        LabelYearlyExpense->setObjectName("LabelYearlyExpense");
        LabelYearlyExpense->setFont(font6);
        LabelYearlyExpense->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_6->addWidget(LabelYearlyExpense);


        gridLayout_4->addWidget(widget_2, 0, 2, 1, 1);

        line_6 = new QFrame(gridLayoutWidget_3);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_6, 0, 1, 1, 1);

        line_7 = new QFrame(gridLayoutWidget_3);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::VLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_7, 0, 3, 1, 1);

        widget = new QWidget(gridLayoutWidget_3);
        widget->setObjectName("widget");
        verticalLayoutWidget_7 = new QWidget(widget);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(0, 0, 181, 51));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_7);
        label_5->setObjectName("label_5");
        label_5->setFont(font6);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        LabelYearlyIncome = new QLabel(verticalLayoutWidget_7);
        LabelYearlyIncome->setObjectName("LabelYearlyIncome");
        LabelYearlyIncome->setFont(font6);
        LabelYearlyIncome->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_5->addWidget(LabelYearlyIncome);


        gridLayout_4->addWidget(widget, 0, 0, 1, 1);

        widget_4 = new QWidget(gridLayoutWidget_3);
        widget_4->setObjectName("widget_4");
        verticalLayoutWidget_10 = new QWidget(widget_4);
        verticalLayoutWidget_10->setObjectName("verticalLayoutWidget_10");
        verticalLayoutWidget_10->setGeometry(QRect(0, 0, 181, 54));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_10);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(verticalLayoutWidget_10);
        label_14->setObjectName("label_14");
        label_14->setFont(font6);
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(label_14);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_7);

        LabelYearlyResult = new QLabel(verticalLayoutWidget_10);
        LabelYearlyResult->setObjectName("LabelYearlyResult");
        LabelYearlyResult->setFont(font6);
        LabelYearlyResult->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_8->addWidget(LabelYearlyResult);


        gridLayout_4->addWidget(widget_4, 0, 6, 1, 1);

        widget_3 = new QWidget(gridLayoutWidget_3);
        widget_3->setObjectName("widget_3");
        verticalLayoutWidget_9 = new QWidget(widget_3);
        verticalLayoutWidget_9->setObjectName("verticalLayoutWidget_9");
        verticalLayoutWidget_9->setGeometry(QRect(-1, -1, 181, 54));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget_9);
        label_12->setObjectName("label_12");
        label_12->setFont(font6);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(label_12);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        LabelYearlySaving = new QLabel(verticalLayoutWidget_9);
        LabelYearlySaving->setObjectName("LabelYearlySaving");
        LabelYearlySaving->setFont(font6);
        LabelYearlySaving->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_7->addWidget(LabelYearlySaving);


        gridLayout_4->addWidget(widget_3, 0, 4, 1, 1);

        line_8 = new QFrame(gridLayoutWidget_3);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::Shape::VLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_8, 0, 5, 1, 1);


        YearlySummaryLayout->addLayout(gridLayout_4, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionDashboard);
        menu->addAction(actionSummary);
        menu->addAction(actionSummary_2);
        menu->addAction(actionSummary_3);
        menu->addAction(actionSetting);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionDashboard->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        actionSummary->setText(QCoreApplication::translate("MainWindow", "Wealth", nullptr));
        actionSummary_2->setText(QCoreApplication::translate("MainWindow", "Loan", nullptr));
        actionSummary_3->setText(QCoreApplication::translate("MainWindow", "Summary", nullptr));
        actionSetting->setText(QCoreApplication::translate("MainWindow", "Setting", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "My Household Account Bank", nullptr));
        BtnPrevMonth->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        BtnNextMonth->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\354\235\264\353\262\210 \353\213\254 \354\232\224\354\225\275", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\354\210\230\354\236\205", nullptr));
        LabelMonthlyIncome->setText(QCoreApplication::translate("MainWindow", "9,999,999,999,999,999,999,990\354\233\220", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\354\247\200\354\266\234", nullptr));
        LabelMonthlyExpense->setText(QCoreApplication::translate("MainWindow", "9,999,999,999,999,999,999,990\354\233\220", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\354\240\200\354\266\225", nullptr));
        LabelMonthlySaving->setText(QCoreApplication::translate("MainWindow", "9,999,999,999,999,999,999,990\354\233\220", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\352\261\260\353\236\230 \353\202\264\354\227\255", nullptr));
        ButtonDetailsInsert->setText(QCoreApplication::translate("MainWindow", "\354\266\224\352\260\200", nullptr));
        ButtonDetailsUpdate->setText(QCoreApplication::translate("MainWindow", "\354\210\230\354\240\225", nullptr));
        ButtonDetailsDelete->setText(QCoreApplication::translate("MainWindow", "\354\202\255\354\240\234", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\352\262\200\354\203\211", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\354\230\254\355\225\264 \354\232\224\354\225\275", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\354\264\235 \354\247\200\354\266\234", nullptr));
        LabelYearlyExpense->setText(QCoreApplication::translate("MainWindow", "9,999,999,999,999\354\233\220", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\354\264\235 \354\210\230\354\236\205", nullptr));
        LabelYearlyIncome->setText(QCoreApplication::translate("MainWindow", "9,999,999,999,999\354\233\220", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\354\210\230\354\236\205 - (\354\247\200\354\266\234 + \354\240\200\354\266\225)", nullptr));
        LabelYearlyResult->setText(QCoreApplication::translate("MainWindow", "9,999,999,999,999\354\233\220", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\354\264\235 \354\240\200\354\266\225", nullptr));
        LabelYearlySaving->setText(QCoreApplication::translate("MainWindow", "9,999,999,999,999\354\233\220", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\353\251\224\353\211\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
