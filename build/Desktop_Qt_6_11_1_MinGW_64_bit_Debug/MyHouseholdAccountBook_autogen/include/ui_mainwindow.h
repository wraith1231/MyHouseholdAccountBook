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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *TitleLayout;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QDateEdit *dateEdit;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QFrame *line_4;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *line_5;
    QFrame *frame_3;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QLabel *label_9;
    QFrame *line_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 602);
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
        dateEdit = new QDateEdit(horizontalLayoutWidget);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout->addWidget(dateEdit);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 70, 781, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName("label_10");
        QFont font1;
        font1.setPointSize(23);
        font1.setBold(true);
        font1.setItalic(false);
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_10);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame = new QFrame(gridLayoutWidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget_3 = new QWidget(frame);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(-1, -1, 241, 44));
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

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->addWidget(label_5);


        horizontalLayout_2->addWidget(frame);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_2->addWidget(line_4);

        frame_2 = new QFrame(gridLayoutWidget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget_4 = new QWidget(frame_2);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(-1, -1, 251, 41));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_4);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget_4);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_3->addWidget(label_7);


        horizontalLayout_2->addWidget(frame_2);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_2->addWidget(line_5);

        frame_3 = new QFrame(gridLayoutWidget);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget_5 = new QWidget(frame_3);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(9, -1, 241, 41));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_5);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget_5);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_4->addWidget(label_9);


        horizontalLayout_2->addWidget(frame_3);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "My Household Account Bank", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\354\235\264\353\262\210 \353\213\254 \354\232\224\354\225\275", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\354\210\230\354\236\205", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\354\247\200\354\266\234", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\354\240\200\354\266\225", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
