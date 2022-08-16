/********************************************************************************
** Form generated from reading UI file 'maininterface.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAININTERFACE_H
#define UI_MAININTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainInterface
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *LeftWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Logo;
    QSpacerItem *horizontalSpacer;
    QLabel *Text;
    QPushButton *HomeBtn;
    QPushButton *ToolBtn;
    QPushButton *LogBtn;
    QPushButton *PersonageCenterBtn;
    QPushButton *SetBtn;
    QSpacerItem *verticalSpacer_2;
    QWidget *RightWidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *HomePage;
    QVBoxLayout *verticalLayout_3;
    QWidget *Hwidget1;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *HomeLogo;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *Hwidget2;
    QVBoxLayout *verticalLayout_4;
    QWidget *WeatherAndTime;
    QHBoxLayout *horizontalLayout_4;
    QWidget *Weather;
    QVBoxLayout *verticalLayout_5;
    QWidget *Weather1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *City;
    QPushButton *RefreshWBtn;
    QWidget *Weather2;
    QHBoxLayout *horizontalLayout_5;
    QWidget *Weather3;
    QHBoxLayout *horizontalLayout_6;
    QWidget *Weather4;
    QGridLayout *gridLayout_2;
    QLabel *PictureW;
    QWidget *Weather5;
    QVBoxLayout *verticalLayout_6;
    QLabel *LowT;
    QLabel *CurrentTemp;
    QLabel *HighT;
    QWidget *CalendarTime;
    QVBoxLayout *verticalLayout_7;
    QWidget *Time;
    QVBoxLayout *verticalLayout_8;
    QLabel *TimeLab;
    QWidget *Year;
    QGridLayout *gridLayout_4;
    QLabel *YearLab;
    QWidget *widget_2;
    QWidget *ToolPage;
    QVBoxLayout *verticalLayout_9;
    QWidget *ToolWg;
    QPushButton *CalculatorBtn;

    void setupUi(QMainWindow *MainInterface)
    {
        if (MainInterface->objectName().isEmpty())
            MainInterface->setObjectName(QString::fromUtf8("MainInterface"));
        MainInterface->resize(1010, 680);
        MainInterface->setMinimumSize(QSize(850, 580));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/LoginInterfare/Image/LoginInterfare/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainInterface->setWindowIcon(icon);
        MainInterface->setAutoFillBackground(false);
        MainInterface->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        centralwidget = new QWidget(MainInterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(850, 580));
        centralwidget->setStyleSheet(QString::fromUtf8("#LeftWidget{\n"
"	background-color: rgb(245, 245, 245);\n"
"}"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LeftWidget = new QWidget(centralwidget);
        LeftWidget->setObjectName(QString::fromUtf8("LeftWidget"));
        LeftWidget->setStyleSheet(QString::fromUtf8("#Logo{\n"
"	border-image: url(:/LoginInterfare/Image/LoginInterfare/logo.png);\n"
"	border-radius:10px;\n"
"}\n"
"#Text{\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"#HomeBtn,\n"
"#ToolBtn,\n"
"#LogBtn,\n"
"#PersonageCenterBtn,\n"
"#SetBtn{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(245, 245, 245);\n"
"	border:none;\n"
"}\n"
"#HomeBtn:pressed,\n"
"#ToolBtn:pressed,\n"
"#LogBtn:pressed,\n"
"#PersonageCenterBtn:pressed,\n"
"#SetBtn:pressed{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"	border:none;\n"
"}\n"
"#HomeBtn:checked,\n"
"#ToolBtn:checked,\n"
"#LogBtn:checked,\n"
"#PersonageCenterBtn:checked,\n"
"#SetBtn:checked{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"	border:none;\n"
"}"));
        verticalLayout = new QVBoxLayout(LeftWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Logo = new QLabel(LeftWidget);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setMinimumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(Logo);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Text = new QLabel(LeftWidget);
        Text->setObjectName(QString::fromUtf8("Text"));
        Text->setMinimumSize(QSize(110, 40));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        Text->setFont(font);
        Text->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(Text);


        verticalLayout->addLayout(horizontalLayout_2);

        HomeBtn = new QPushButton(LeftWidget);
        HomeBtn->setObjectName(QString::fromUtf8("HomeBtn"));
        HomeBtn->setMinimumSize(QSize(25, 50));
        QFont font1;
        font1.setPointSize(10);
        HomeBtn->setFont(font1);
        HomeBtn->setIconSize(QSize(24, 24));
        HomeBtn->setCheckable(true);
        HomeBtn->setChecked(false);
        HomeBtn->setAutoExclusive(true);

        verticalLayout->addWidget(HomeBtn);

        ToolBtn = new QPushButton(LeftWidget);
        ToolBtn->setObjectName(QString::fromUtf8("ToolBtn"));
        ToolBtn->setMinimumSize(QSize(25, 50));
        ToolBtn->setFont(font1);
        ToolBtn->setCheckable(true);
        ToolBtn->setAutoExclusive(true);

        verticalLayout->addWidget(ToolBtn);

        LogBtn = new QPushButton(LeftWidget);
        LogBtn->setObjectName(QString::fromUtf8("LogBtn"));
        LogBtn->setMinimumSize(QSize(25, 50));
        LogBtn->setFont(font1);
        LogBtn->setCheckable(true);
        LogBtn->setAutoExclusive(true);

        verticalLayout->addWidget(LogBtn);

        PersonageCenterBtn = new QPushButton(LeftWidget);
        PersonageCenterBtn->setObjectName(QString::fromUtf8("PersonageCenterBtn"));
        PersonageCenterBtn->setMinimumSize(QSize(25, 50));
        PersonageCenterBtn->setFont(font1);
        PersonageCenterBtn->setCheckable(true);
        PersonageCenterBtn->setAutoExclusive(true);

        verticalLayout->addWidget(PersonageCenterBtn);

        SetBtn = new QPushButton(LeftWidget);
        SetBtn->setObjectName(QString::fromUtf8("SetBtn"));
        SetBtn->setMinimumSize(QSize(25, 50));
        SetBtn->setFont(font1);
        SetBtn->setCheckable(true);
        SetBtn->setAutoExclusive(true);

        verticalLayout->addWidget(SetBtn);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(LeftWidget, 0, Qt::AlignLeft);

        RightWidget = new QWidget(centralwidget);
        RightWidget->setObjectName(QString::fromUtf8("RightWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RightWidget->sizePolicy().hasHeightForWidth());
        RightWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(RightWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(RightWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        HomePage = new QWidget();
        HomePage->setObjectName(QString::fromUtf8("HomePage"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(HomePage->sizePolicy().hasHeightForWidth());
        HomePage->setSizePolicy(sizePolicy1);
        HomePage->setStyleSheet(QString::fromUtf8("#HomeLogo{\n"
"	border-image: url(:/LoginInterfare/Image/LoginInterfare/logo.png);\n"
"	border-radius:10px;\n"
"}\n"
"#RefreshWBtn{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(20, 47, 78, 219), stop:1 rgba(85, 98, 112, 226));\n"
" color:rgba(255,255,255,210);\n"
" border-radius:5px;\n"
"}#RefreshWBtn:hover{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
"}\n"
"#RefreshWBtn:pressed{\n"
" background-color:rgba(105,118,132,200);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(HomePage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Hwidget1 = new QWidget(HomePage);
        Hwidget1->setObjectName(QString::fromUtf8("Hwidget1"));
        horizontalLayout_3 = new QHBoxLayout(Hwidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        HomeLogo = new QLabel(Hwidget1);
        HomeLogo->setObjectName(QString::fromUtf8("HomeLogo"));
        HomeLogo->setMinimumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(HomeLogo);

        label_2 = new QLabel(Hwidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        label_2->setFont(font2);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addWidget(Hwidget1, 0, Qt::AlignTop);

        Hwidget2 = new QWidget(HomePage);
        Hwidget2->setObjectName(QString::fromUtf8("Hwidget2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Hwidget2->sizePolicy().hasHeightForWidth());
        Hwidget2->setSizePolicy(sizePolicy2);
        verticalLayout_4 = new QVBoxLayout(Hwidget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        WeatherAndTime = new QWidget(Hwidget2);
        WeatherAndTime->setObjectName(QString::fromUtf8("WeatherAndTime"));
        sizePolicy2.setHeightForWidth(WeatherAndTime->sizePolicy().hasHeightForWidth());
        WeatherAndTime->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(WeatherAndTime);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Weather = new QWidget(WeatherAndTime);
        Weather->setObjectName(QString::fromUtf8("Weather"));
        sizePolicy2.setHeightForWidth(Weather->sizePolicy().hasHeightForWidth());
        Weather->setSizePolicy(sizePolicy2);
        verticalLayout_5 = new QVBoxLayout(Weather);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        Weather1 = new QWidget(Weather);
        Weather1->setObjectName(QString::fromUtf8("Weather1"));
        horizontalLayout_7 = new QHBoxLayout(Weather1);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        City = new QLabel(Weather1);
        City->setObjectName(QString::fromUtf8("City"));

        horizontalLayout_7->addWidget(City);

        RefreshWBtn = new QPushButton(Weather1);
        RefreshWBtn->setObjectName(QString::fromUtf8("RefreshWBtn"));
        RefreshWBtn->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_7->addWidget(RefreshWBtn);


        verticalLayout_5->addWidget(Weather1, 0, Qt::AlignTop);

        Weather2 = new QWidget(Weather);
        Weather2->setObjectName(QString::fromUtf8("Weather2"));
        sizePolicy2.setHeightForWidth(Weather2->sizePolicy().hasHeightForWidth());
        Weather2->setSizePolicy(sizePolicy2);
        horizontalLayout_5 = new QHBoxLayout(Weather2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        Weather3 = new QWidget(Weather2);
        Weather3->setObjectName(QString::fromUtf8("Weather3"));
        horizontalLayout_6 = new QHBoxLayout(Weather3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        Weather4 = new QWidget(Weather3);
        Weather4->setObjectName(QString::fromUtf8("Weather4"));
        gridLayout_2 = new QGridLayout(Weather4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        PictureW = new QLabel(Weather4);
        PictureW->setObjectName(QString::fromUtf8("PictureW"));
        PictureW->setFont(font2);
        PictureW->setStyleSheet(QString::fromUtf8(""));
        PictureW->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(PictureW, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(Weather4);

        Weather5 = new QWidget(Weather3);
        Weather5->setObjectName(QString::fromUtf8("Weather5"));
        verticalLayout_6 = new QVBoxLayout(Weather5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        LowT = new QLabel(Weather5);
        LowT->setObjectName(QString::fromUtf8("LowT"));

        verticalLayout_6->addWidget(LowT);

        CurrentTemp = new QLabel(Weather5);
        CurrentTemp->setObjectName(QString::fromUtf8("CurrentTemp"));

        verticalLayout_6->addWidget(CurrentTemp);

        HighT = new QLabel(Weather5);
        HighT->setObjectName(QString::fromUtf8("HighT"));

        verticalLayout_6->addWidget(HighT);


        horizontalLayout_6->addWidget(Weather5);


        horizontalLayout_5->addWidget(Weather3);


        verticalLayout_5->addWidget(Weather2);


        horizontalLayout_4->addWidget(Weather);

        CalendarTime = new QWidget(WeatherAndTime);
        CalendarTime->setObjectName(QString::fromUtf8("CalendarTime"));
        verticalLayout_7 = new QVBoxLayout(CalendarTime);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        Time = new QWidget(CalendarTime);
        Time->setObjectName(QString::fromUtf8("Time"));
        sizePolicy2.setHeightForWidth(Time->sizePolicy().hasHeightForWidth());
        Time->setSizePolicy(sizePolicy2);
        verticalLayout_8 = new QVBoxLayout(Time);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        TimeLab = new QLabel(Time);
        TimeLab->setObjectName(QString::fromUtf8("TimeLab"));
        QFont font3;
        font3.setPointSize(35);
        font3.setBold(true);
        TimeLab->setFont(font3);

        verticalLayout_8->addWidget(TimeLab);


        verticalLayout_7->addWidget(Time);

        Year = new QWidget(CalendarTime);
        Year->setObjectName(QString::fromUtf8("Year"));
        gridLayout_4 = new QGridLayout(Year);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 0, 0, -1);
        YearLab = new QLabel(Year);
        YearLab->setObjectName(QString::fromUtf8("YearLab"));
        YearLab->setFont(font1);

        gridLayout_4->addWidget(YearLab, 0, 0, 1, 1, Qt::AlignBottom);


        verticalLayout_7->addWidget(Year);


        horizontalLayout_4->addWidget(CalendarTime);


        verticalLayout_4->addWidget(WeatherAndTime, 0, Qt::AlignTop);

        widget_2 = new QWidget(Hwidget2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        verticalLayout_4->addWidget(widget_2);


        verticalLayout_3->addWidget(Hwidget2);

        stackedWidget->addWidget(HomePage);
        ToolPage = new QWidget();
        ToolPage->setObjectName(QString::fromUtf8("ToolPage"));
        ToolPage->setStyleSheet(QString::fromUtf8("#CalculatorBtn{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(20, 47, 78, 219), stop:1 rgba(85, 98, 112, 226));\n"
" color:rgba(255,255,255,210);\n"
" border-radius:5px;\n"
"}#CalculatorBtn:hover{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
"}\n"
"#CalculatorBtn:pressed{\n"
" background-color:rgba(105,118,132,200);\n"
"}"));
        verticalLayout_9 = new QVBoxLayout(ToolPage);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        ToolWg = new QWidget(ToolPage);
        ToolWg->setObjectName(QString::fromUtf8("ToolWg"));
        ToolWg->setStyleSheet(QString::fromUtf8(""));
        CalculatorBtn = new QPushButton(ToolWg);
        CalculatorBtn->setObjectName(QString::fromUtf8("CalculatorBtn"));
        CalculatorBtn->setGeometry(QRect(20, 20, 120, 50));
        CalculatorBtn->setMinimumSize(QSize(120, 50));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        CalculatorBtn->setFont(font4);

        verticalLayout_9->addWidget(ToolWg);

        stackedWidget->addWidget(ToolPage);

        verticalLayout_2->addWidget(stackedWidget);


        horizontalLayout->addWidget(RightWidget);

        MainInterface->setCentralWidget(centralwidget);

        retranslateUi(MainInterface);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainInterface);
    } // setupUi

    void retranslateUi(QMainWindow *MainInterface)
    {
        MainInterface->setWindowTitle(QCoreApplication::translate("MainInterface", "ShadowKnife", nullptr));
        Logo->setText(QString());
        Text->setText(QCoreApplication::translate("MainInterface", "Shadowknife", nullptr));
        HomeBtn->setText(QCoreApplication::translate("MainInterface", "\344\270\273\351\241\265", nullptr));
        ToolBtn->setText(QCoreApplication::translate("MainInterface", "\345\267\245\345\205\267\347\256\261", nullptr));
        LogBtn->setText(QCoreApplication::translate("MainInterface", "\346\227\245\345\277\227", nullptr));
        PersonageCenterBtn->setText(QCoreApplication::translate("MainInterface", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        SetBtn->setText(QCoreApplication::translate("MainInterface", "\350\256\276\347\275\256", nullptr));
        HomeLogo->setText(QString());
        label_2->setText(QCoreApplication::translate("MainInterface", "ShadowKnife System", nullptr));
        City->setText(QCoreApplication::translate("MainInterface", "\345\275\223\345\211\215\344\275\215\347\275\256", nullptr));
        RefreshWBtn->setText(QCoreApplication::translate("MainInterface", "\345\210\267\346\226\260", nullptr));
        PictureW->setText(QCoreApplication::translate("MainInterface", "\345\233\276\347\211\207", nullptr));
        LowT->setText(QCoreApplication::translate("MainInterface", "\346\234\200\344\275\216\346\270\251\345\272\246", nullptr));
        CurrentTemp->setText(QCoreApplication::translate("MainInterface", "\345\275\223\345\211\215\346\260\224\346\270\251", nullptr));
        HighT->setText(QCoreApplication::translate("MainInterface", "\346\234\200\351\253\230\346\270\251\345\272\246", nullptr));
        TimeLab->setText(QCoreApplication::translate("MainInterface", "\345\275\223\345\211\215\346\227\266\351\227\264", nullptr));
        YearLab->setText(QCoreApplication::translate("MainInterface", "\345\275\223\345\211\215\345\271\264\346\234\210\346\227\245\346\230\237\346\234\237", nullptr));
        CalculatorBtn->setText(QCoreApplication::translate("MainInterface", "\350\256\241\347\256\227\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainInterface: public Ui_MainInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAININTERFACE_H
