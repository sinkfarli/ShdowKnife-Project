/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *Top;
    QHBoxLayout *horizontalLayout;
    QPushButton *MeanBtn;
    QLabel *MeabText;
    QSpacerItem *horizontalSpacer;
    QPushButton *HistoryBtn;
    QWidget *Bottom;
    QVBoxLayout *verticalLayout_3;
    QWidget *Show;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *Ketboard;
    QHBoxLayout *horizontalLayout_2;
    QWidget *Group1;
    QVBoxLayout *verticalLayout_4;
    QPushButton *PushButton1;
    QPushButton *PushButton2;
    QPushButton *PushButton3;
    QPushButton *PushButton4;
    QPushButton *PushButton5;
    QPushButton *PushButton6;
    QWidget *Group2;
    QVBoxLayout *verticalLayout_7;
    QPushButton *PushButton7;
    QPushButton *PushButton8;
    QPushButton *PushButton9;
    QPushButton *PushButton10;
    QPushButton *PushButton11;
    QPushButton *PushButton12;
    QWidget *Group3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *PushButton13;
    QPushButton *PushButton14;
    QPushButton *PushButton15;
    QPushButton *PushButton16;
    QPushButton *PushButton17;
    QPushButton *PushButton18;
    QWidget *Group4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *PushButton19;
    QPushButton *PushButton20;
    QPushButton *PushButton21;
    QPushButton *PushButton22;
    QPushButton *PushButton23;
    QPushButton *PushButton24;

    void setupUi(QWidget *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(320, 500);
        Calculator->setMinimumSize(QSize(320, 500));
        Calculator->setMaximumSize(QSize(320, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Calculate/Image/Calculate/calculate.png"), QSize(), QIcon::Normal, QIcon::Off);
        Calculator->setWindowIcon(icon);
        Calculator->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(Calculator);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Calculator);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Top = new QWidget(widget);
        Top->setObjectName(QString::fromUtf8("Top"));
        Top->setStyleSheet(QString::fromUtf8("#MeanBtn,\n"
"#HistoryBtn{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(20, 47, 78, 219), stop:1 rgba(85, 98, 112, 226));\n"
" color:rgba(255,255,255,210);\n"
" border-radius:5px;\n"
"}\n"
"#MeanBtn:hover,\n"
"#HistoryBtnhover{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
"}\n"
"#MeanBtn:pressed,\n"
"#HistoryBtn:pressed{\n"
" background-color:rgba(105,118,132,200);\n"
"}\n"
"#MeabText{\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(Top);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MeanBtn = new QPushButton(Top);
        MeanBtn->setObjectName(QString::fromUtf8("MeanBtn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MainInterface/Image/MainInterface/align-justify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MeanBtn->setIcon(icon1);
        MeanBtn->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(MeanBtn);

        MeabText = new QLabel(Top);
        MeabText->setObjectName(QString::fromUtf8("MeabText"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        MeabText->setFont(font);

        horizontalLayout->addWidget(MeabText);

        horizontalSpacer = new QSpacerItem(171, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        HistoryBtn = new QPushButton(Top);
        HistoryBtn->setObjectName(QString::fromUtf8("HistoryBtn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MainInterface/Image/MainInterface/clock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        HistoryBtn->setIcon(icon2);
        HistoryBtn->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(HistoryBtn);


        verticalLayout_2->addWidget(Top, 0, Qt::AlignTop);

        Bottom = new QWidget(widget);
        Bottom->setObjectName(QString::fromUtf8("Bottom"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Bottom->sizePolicy().hasHeightForWidth());
        Bottom->setSizePolicy(sizePolicy);
        Bottom->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        verticalLayout_3 = new QVBoxLayout(Bottom);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        Show = new QWidget(Bottom);
        Show->setObjectName(QString::fromUtf8("Show"));
        Show->setMaximumSize(QSize(16777215, 120));
        gridLayout = new QGridLayout(Show);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(Show);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::NoEcho);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        label = new QLabel(Show);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout_3->addWidget(Show);

        Ketboard = new QWidget(Bottom);
        Ketboard->setObjectName(QString::fromUtf8("Ketboard"));
        Ketboard->setStyleSheet(QString::fromUtf8("#PushButton1,#PushButton2,#PushButton3,#PushButton4,#PushButton5,\n"
"#PushButton6,#PushButton7,#PushButton8,#PushButton9,#PushButton10,\n"
"#PushButton11,#PushButton12,#PushButton13,#PushButton14,#PushButton15,\n"
"#PushButton16,#PushButton17,#PushButton18,#PushButton19,#PushButton20,\n"
"#PushButton21,#PushButton22,#PushButton23,#PushButton24{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(20, 47, 78, 219), stop:1 rgba(85, 98, 112, 226));\n"
" color:rgba(255,255,255,210);\n"
" border-radius:5px;\n"
"}\n"
"#PushButton1:hover,#PushButton2:hover,#PushButton3:hover,#PushButton4:hover,#PushButton5:hover,\n"
"#PushButton6:hover,#PushButton7:hover,#PushButton8:hover,#PushButton9:hover,#PushButton10:hover,\n"
"#PushButton11:hover,#PushButton12:hover,#PushButton13:hover,#PushButton14:hover,#PushButton15:hover,\n"
"#PushButton16:hover,#PushButton17:hover,#PushButton18:hover,#PushButton19:hover,#PushButton20:hover,\n"
"#PushButton21:hover,#PushButton22:hover,#PushButto"
                        "n23:hover,#PushButton24:hover{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
"}\n"
"#PushButton1:pressed,#PushButton2:pressed,#PushButton3:pressed,#PushButton4:pressed,#PushButton5:pressed,\n"
"#PushButton6:pressed,#PushButton7:pressed,#PushButton8:pressed,#PushButton9:pressed,#PushButton10:pressed,\n"
"#PushButton11:pressed,#PushButton12:pressed,#PushButton13:pressed,#PushButton14:pressed,#PushButton15:pressed,\n"
"#PushButton16:pressed,#PushButton17:pressed,#PushButton18:pressed,#PushButton19:pressed,#PushButton20:pressed,\n"
"#PushButton21:pressed,#PushButton22:pressed,#PushButton23:pressed,#PushButton24:pressed{\n"
" background-color:rgba(105,118,132,200);\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(Ketboard);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Group1 = new QWidget(Ketboard);
        Group1->setObjectName(QString::fromUtf8("Group1"));
        verticalLayout_4 = new QVBoxLayout(Group1);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, 0, 0, 0);
        PushButton1 = new QPushButton(Group1);
        PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
        PushButton1->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(12);
        PushButton1->setFont(font1);

        verticalLayout_4->addWidget(PushButton1);

        PushButton2 = new QPushButton(Group1);
        PushButton2->setObjectName(QString::fromUtf8("PushButton2"));
        PushButton2->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setPointSize(11);
        PushButton2->setFont(font2);

        verticalLayout_4->addWidget(PushButton2);

        PushButton3 = new QPushButton(Group1);
        PushButton3->setObjectName(QString::fromUtf8("PushButton3"));
        PushButton3->setMinimumSize(QSize(0, 50));
        QFont font3;
        font3.setPointSize(15);
        PushButton3->setFont(font3);

        verticalLayout_4->addWidget(PushButton3);

        PushButton4 = new QPushButton(Group1);
        PushButton4->setObjectName(QString::fromUtf8("PushButton4"));
        PushButton4->setMinimumSize(QSize(0, 50));
        PushButton4->setFont(font3);

        verticalLayout_4->addWidget(PushButton4);

        PushButton5 = new QPushButton(Group1);
        PushButton5->setObjectName(QString::fromUtf8("PushButton5"));
        PushButton5->setMinimumSize(QSize(0, 50));
        PushButton5->setFont(font3);

        verticalLayout_4->addWidget(PushButton5);

        PushButton6 = new QPushButton(Group1);
        PushButton6->setObjectName(QString::fromUtf8("PushButton6"));
        PushButton6->setMinimumSize(QSize(0, 50));
        PushButton6->setFont(font3);

        verticalLayout_4->addWidget(PushButton6);


        horizontalLayout_2->addWidget(Group1);

        Group2 = new QWidget(Ketboard);
        Group2->setObjectName(QString::fromUtf8("Group2"));
        verticalLayout_7 = new QVBoxLayout(Group2);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        PushButton7 = new QPushButton(Group2);
        PushButton7->setObjectName(QString::fromUtf8("PushButton7"));
        PushButton7->setMinimumSize(QSize(0, 50));
        PushButton7->setFont(font1);

        verticalLayout_7->addWidget(PushButton7);

        PushButton8 = new QPushButton(Group2);
        PushButton8->setObjectName(QString::fromUtf8("PushButton8"));
        PushButton8->setMinimumSize(QSize(0, 50));
        PushButton8->setFont(font2);

        verticalLayout_7->addWidget(PushButton8);

        PushButton9 = new QPushButton(Group2);
        PushButton9->setObjectName(QString::fromUtf8("PushButton9"));
        PushButton9->setMinimumSize(QSize(0, 50));
        PushButton9->setFont(font3);

        verticalLayout_7->addWidget(PushButton9);

        PushButton10 = new QPushButton(Group2);
        PushButton10->setObjectName(QString::fromUtf8("PushButton10"));
        PushButton10->setMinimumSize(QSize(0, 50));
        PushButton10->setFont(font3);

        verticalLayout_7->addWidget(PushButton10);

        PushButton11 = new QPushButton(Group2);
        PushButton11->setObjectName(QString::fromUtf8("PushButton11"));
        PushButton11->setMinimumSize(QSize(0, 50));
        PushButton11->setFont(font3);

        verticalLayout_7->addWidget(PushButton11);

        PushButton12 = new QPushButton(Group2);
        PushButton12->setObjectName(QString::fromUtf8("PushButton12"));
        PushButton12->setMinimumSize(QSize(0, 50));
        PushButton12->setFont(font3);

        verticalLayout_7->addWidget(PushButton12);


        horizontalLayout_2->addWidget(Group2);

        Group3 = new QWidget(Ketboard);
        Group3->setObjectName(QString::fromUtf8("Group3"));
        verticalLayout_6 = new QVBoxLayout(Group3);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        PushButton13 = new QPushButton(Group3);
        PushButton13->setObjectName(QString::fromUtf8("PushButton13"));
        PushButton13->setMinimumSize(QSize(0, 50));
        PushButton13->setFont(font1);

        verticalLayout_6->addWidget(PushButton13);

        PushButton14 = new QPushButton(Group3);
        PushButton14->setObjectName(QString::fromUtf8("PushButton14"));
        PushButton14->setMinimumSize(QSize(0, 50));
        PushButton14->setFont(font2);

        verticalLayout_6->addWidget(PushButton14);

        PushButton15 = new QPushButton(Group3);
        PushButton15->setObjectName(QString::fromUtf8("PushButton15"));
        PushButton15->setMinimumSize(QSize(0, 50));
        PushButton15->setFont(font3);

        verticalLayout_6->addWidget(PushButton15);

        PushButton16 = new QPushButton(Group3);
        PushButton16->setObjectName(QString::fromUtf8("PushButton16"));
        PushButton16->setMinimumSize(QSize(0, 50));
        PushButton16->setFont(font3);

        verticalLayout_6->addWidget(PushButton16);

        PushButton17 = new QPushButton(Group3);
        PushButton17->setObjectName(QString::fromUtf8("PushButton17"));
        PushButton17->setMinimumSize(QSize(0, 50));
        PushButton17->setFont(font3);

        verticalLayout_6->addWidget(PushButton17);

        PushButton18 = new QPushButton(Group3);
        PushButton18->setObjectName(QString::fromUtf8("PushButton18"));
        PushButton18->setMinimumSize(QSize(0, 50));
        QFont font4;
        font4.setPointSize(20);
        PushButton18->setFont(font4);

        verticalLayout_6->addWidget(PushButton18);


        horizontalLayout_2->addWidget(Group3);

        Group4 = new QWidget(Ketboard);
        Group4->setObjectName(QString::fromUtf8("Group4"));
        verticalLayout_5 = new QVBoxLayout(Group4);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 2, 0);
        PushButton19 = new QPushButton(Group4);
        PushButton19->setObjectName(QString::fromUtf8("PushButton19"));
        PushButton19->setMinimumSize(QSize(0, 50));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(false);
        PushButton19->setFont(font5);

        verticalLayout_5->addWidget(PushButton19);

        PushButton20 = new QPushButton(Group4);
        PushButton20->setObjectName(QString::fromUtf8("PushButton20"));
        PushButton20->setMinimumSize(QSize(0, 50));
        QFont font6;
        font6.setPointSize(15);
        font6.setBold(false);
        PushButton20->setFont(font6);

        verticalLayout_5->addWidget(PushButton20);

        PushButton21 = new QPushButton(Group4);
        PushButton21->setObjectName(QString::fromUtf8("PushButton21"));
        PushButton21->setMinimumSize(QSize(0, 50));
        PushButton21->setFont(font6);

        verticalLayout_5->addWidget(PushButton21);

        PushButton22 = new QPushButton(Group4);
        PushButton22->setObjectName(QString::fromUtf8("PushButton22"));
        PushButton22->setMinimumSize(QSize(0, 50));
        PushButton22->setFont(font3);

        verticalLayout_5->addWidget(PushButton22);

        PushButton23 = new QPushButton(Group4);
        PushButton23->setObjectName(QString::fromUtf8("PushButton23"));
        PushButton23->setMinimumSize(QSize(0, 50));
        PushButton23->setFont(font3);

        verticalLayout_5->addWidget(PushButton23);

        PushButton24 = new QPushButton(Group4);
        PushButton24->setObjectName(QString::fromUtf8("PushButton24"));
        PushButton24->setMinimumSize(QSize(0, 50));
        PushButton24->setFont(font3);

        verticalLayout_5->addWidget(PushButton24);


        horizontalLayout_2->addWidget(Group4);


        verticalLayout_3->addWidget(Ketboard);


        verticalLayout_2->addWidget(Bottom);


        verticalLayout->addWidget(widget);


        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QWidget *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        MeanBtn->setText(QString());
        MeabText->setText(QCoreApplication::translate("Calculator", "Standard", nullptr));
        HistoryBtn->setText(QString());
        label->setText(QString());
        PushButton1->setText(QCoreApplication::translate("Calculator", "%", nullptr));
        PushButton2->setText(QCoreApplication::translate("Calculator", "\345\210\206\344\271\213\344\270\200", nullptr));
        PushButton3->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        PushButton4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        PushButton5->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        PushButton6->setText(QCoreApplication::translate("Calculator", "\302\261", nullptr));
        PushButton7->setText(QCoreApplication::translate("Calculator", "CE", nullptr));
        PushButton8->setText(QCoreApplication::translate("Calculator", "\345\271\263\346\226\271", nullptr));
        PushButton9->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        PushButton10->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        PushButton11->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        PushButton12->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        PushButton13->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        PushButton14->setText(QCoreApplication::translate("Calculator", "\345\274\200\346\240\271", nullptr));
        PushButton15->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        PushButton16->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        PushButton17->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        PushButton18->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        PushButton19->setText(QCoreApplication::translate("Calculator", "\345\210\240\351\231\244", nullptr));
        PushButton20->setText(QCoreApplication::translate("Calculator", "\303\267", nullptr));
        PushButton21->setText(QCoreApplication::translate("Calculator", "\303\227", nullptr));
        PushButton22->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        PushButton23->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        PushButton24->setText(QCoreApplication::translate("Calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
