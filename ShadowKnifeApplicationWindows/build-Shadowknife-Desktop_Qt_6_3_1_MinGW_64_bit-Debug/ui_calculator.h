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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *CenterMenu;
    QVBoxLayout *verticalLayout_2;
    QWidget *TopMenu;
    QHBoxLayout *horizontalLayout;
    QLabel *Logo;
    QLabel *CalculatorText;
    QSpacerItem *horizontalSpacer;
    QPushButton *MinimizeBut;
    QPushButton *MaxmizeBut;
    QPushButton *CloseBut;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *menu;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *CalculatorText_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *Stantard;
    QPushButton *Scientific;
    QPushButton *Programmer;
    QFrame *line;
    QPushButton *Setting;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Text;

    void setupUi(QWidget *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(360, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Calculate/Image/Calculate/calculate.png"), QSize(), QIcon::Normal, QIcon::Off);
        Calculator->setWindowIcon(icon);
        Calculator->setStyleSheet(QString::fromUtf8("#CenterMenu{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(Calculator);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        CenterMenu = new QWidget(Calculator);
        CenterMenu->setObjectName(QString::fromUtf8("CenterMenu"));
        CenterMenu->setStyleSheet(QString::fromUtf8("#CenterMenu{\n"
"	background-color: rgb(32, 32, 31);\n"
"	border-radius:5px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(CenterMenu);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TopMenu = new QWidget(CenterMenu);
        TopMenu->setObjectName(QString::fromUtf8("TopMenu"));
        TopMenu->setStyleSheet(QString::fromUtf8("#CalculatorText{\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"#CloseBut,#MinimizeBut,#MaxmizeBut{\n"
"	border:none;\n"
"}"));
        horizontalLayout = new QHBoxLayout(TopMenu);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Logo = new QLabel(TopMenu);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setMinimumSize(QSize(15, 15));
        Logo->setStyleSheet(QString::fromUtf8("image: url(:/Calculate/Image/Calculate/calculate.png);"));

        horizontalLayout->addWidget(Logo);

        CalculatorText = new QLabel(TopMenu);
        CalculatorText->setObjectName(QString::fromUtf8("CalculatorText"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculatorText->sizePolicy().hasHeightForWidth());
        CalculatorText->setSizePolicy(sizePolicy);
        CalculatorText->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(9);
        CalculatorText->setFont(font);
        CalculatorText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(CalculatorText);

        horizontalSpacer = new QSpacerItem(187, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        MinimizeBut = new QPushButton(TopMenu);
        MinimizeBut->setObjectName(QString::fromUtf8("MinimizeBut"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MainInterface/Image/MainInterface/minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MinimizeBut->setIcon(icon1);
        MinimizeBut->setIconSize(QSize(15, 15));

        horizontalLayout->addWidget(MinimizeBut);

        MaxmizeBut = new QPushButton(TopMenu);
        MaxmizeBut->setObjectName(QString::fromUtf8("MaxmizeBut"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MainInterface/Image/MainInterface/square.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MaxmizeBut->setIcon(icon2);
        MaxmizeBut->setIconSize(QSize(12, 15));

        horizontalLayout->addWidget(MaxmizeBut);

        CloseBut = new QPushButton(TopMenu);
        CloseBut->setObjectName(QString::fromUtf8("CloseBut"));
        CloseBut->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/MainInterface/Image/MainInterface/x.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CloseBut->setIcon(icon3);
        CloseBut->setIconSize(QSize(15, 15));

        horizontalLayout->addWidget(CloseBut);


        verticalLayout_2->addWidget(TopMenu, 0, Qt::AlignTop);

        widget = new QWidget(CenterMenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("#frame_2,#frame_3{\n"
"	border:none;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, -1, 0);
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"	background-color: rgb(46, 46, 46);\n"
"	border-top-right-radius:10px;\n"
"	border-bottom-right-radius:10px;\n"
"}\n"
"#menu,#Programmer,#Setting,#Scientific,#Stantard{\n"
"	border:none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        menu = new QPushButton(frame);
        menu->setObjectName(QString::fromUtf8("menu"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/MainInterface/Image/MainInterface/menu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menu->setIcon(icon4);
        menu->setIconSize(QSize(15, 25));

        verticalLayout_3->addWidget(menu, 0, Qt::AlignLeft);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        CalculatorText_2 = new QLabel(frame_2);
        CalculatorText_2->setObjectName(QString::fromUtf8("CalculatorText_2"));
        CalculatorText_2->setMaximumSize(QSize(16777215, 20));
        CalculatorText_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(CalculatorText_2);

        widget_2 = new QWidget(frame_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_5 = new QVBoxLayout(widget_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        Stantard = new QPushButton(widget_2);
        Stantard->setObjectName(QString::fromUtf8("Stantard"));
        Stantard->setIconSize(QSize(15, 20));

        verticalLayout_5->addWidget(Stantard);

        Scientific = new QPushButton(widget_2);
        Scientific->setObjectName(QString::fromUtf8("Scientific"));
        Scientific->setIconSize(QSize(15, 20));

        verticalLayout_5->addWidget(Scientific);

        Programmer = new QPushButton(widget_2);
        Programmer->setObjectName(QString::fromUtf8("Programmer"));
        Programmer->setIconSize(QSize(15, 20));

        verticalLayout_5->addWidget(Programmer);


        verticalLayout_4->addWidget(widget_2, 0, Qt::AlignTop);

        line = new QFrame(frame_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setAutoFillBackground(false);
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        Setting = new QPushButton(frame_2);
        Setting->setObjectName(QString::fromUtf8("Setting"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/MainInterface/Image/MainInterface/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Setting->setIcon(icon5);
        Setting->setIconSize(QSize(15, 25));

        verticalLayout_4->addWidget(Setting);


        verticalLayout_3->addWidget(frame_2, 0, Qt::AlignLeft);


        horizontalLayout_2->addWidget(frame, 0, Qt::AlignLeft);

        frame_3 = new QFrame(widget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, -1, 0);
        Text = new QLabel(frame_3);
        Text->setObjectName(QString::fromUtf8("Text"));

        horizontalLayout_3->addWidget(Text);


        horizontalLayout_2->addWidget(frame_3, 0, Qt::AlignTop);


        verticalLayout_2->addWidget(widget);


        verticalLayout->addWidget(CenterMenu);


        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QWidget *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Logo->setText(QString());
        CalculatorText->setText(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        MinimizeBut->setText(QString());
        MaxmizeBut->setText(QString());
#if QT_CONFIG(tooltip)
        CloseBut->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        CloseBut->setText(QString());
        menu->setText(QString());
        CalculatorText_2->setText(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Stantard->setText(QCoreApplication::translate("Calculator", "Stantard", nullptr));
        Scientific->setText(QCoreApplication::translate("Calculator", "Scientific", nullptr));
        Programmer->setText(QCoreApplication::translate("Calculator", "Programmer", nullptr));
        Setting->setText(QCoreApplication::translate("Calculator", "Setting", nullptr));
        Text->setText(QCoreApplication::translate("Calculator", "Standard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
