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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QPushButton *PersonageLogBtn;
    QPushButton *PersonageCenterBtn;
    QPushButton *SetBtn;
    QSpacerItem *verticalSpacer;
    QWidget *RightWidget;

    void setupUi(QMainWindow *MainInterface)
    {
        if (MainInterface->objectName().isEmpty())
            MainInterface->setObjectName(QString::fromUtf8("MainInterface"));
        MainInterface->resize(1010, 680);
        MainInterface->setMinimumSize(QSize(1010, 680));
        MainInterface->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	background-color: rgb(30, 30, 30);\n"
"}"));
        centralwidget = new QWidget(MainInterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(1010, 680));
        centralwidget->setStyleSheet(QString::fromUtf8("#LeftWidget{\n"
"	background-color: rgb(38, 38, 38);\n"
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
"	color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(LeftWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Logo = new QLabel(LeftWidget);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setMinimumSize(QSize(45, 45));

        horizontalLayout_2->addWidget(Logo);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Text = new QLabel(LeftWidget);
        Text->setObjectName(QString::fromUtf8("Text"));
        Text->setMinimumSize(QSize(100, 40));
        QFont font;
        font.setPointSize(15);
        Text->setFont(font);
        Text->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(Text);


        verticalLayout->addLayout(horizontalLayout_2);

        HomeBtn = new QPushButton(LeftWidget);
        HomeBtn->setObjectName(QString::fromUtf8("HomeBtn"));
        HomeBtn->setMinimumSize(QSize(25, 50));
        HomeBtn->setIconSize(QSize(24, 24));

        verticalLayout->addWidget(HomeBtn);

        ToolBtn = new QPushButton(LeftWidget);
        ToolBtn->setObjectName(QString::fromUtf8("ToolBtn"));
        ToolBtn->setMinimumSize(QSize(25, 50));

        verticalLayout->addWidget(ToolBtn);

        PersonageLogBtn = new QPushButton(LeftWidget);
        PersonageLogBtn->setObjectName(QString::fromUtf8("PersonageLogBtn"));
        PersonageLogBtn->setMinimumSize(QSize(25, 50));

        verticalLayout->addWidget(PersonageLogBtn);

        PersonageCenterBtn = new QPushButton(LeftWidget);
        PersonageCenterBtn->setObjectName(QString::fromUtf8("PersonageCenterBtn"));
        PersonageCenterBtn->setMinimumSize(QSize(25, 50));

        verticalLayout->addWidget(PersonageCenterBtn);

        SetBtn = new QPushButton(LeftWidget);
        SetBtn->setObjectName(QString::fromUtf8("SetBtn"));
        SetBtn->setMinimumSize(QSize(25, 50));

        verticalLayout->addWidget(SetBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(LeftWidget, 0, Qt::AlignLeft);

        RightWidget = new QWidget(centralwidget);
        RightWidget->setObjectName(QString::fromUtf8("RightWidget"));

        horizontalLayout->addWidget(RightWidget);

        MainInterface->setCentralWidget(centralwidget);

        retranslateUi(MainInterface);

        QMetaObject::connectSlotsByName(MainInterface);
    } // setupUi

    void retranslateUi(QMainWindow *MainInterface)
    {
        MainInterface->setWindowTitle(QCoreApplication::translate("MainInterface", "MainWindow", nullptr));
        Logo->setText(QString());
        Text->setText(QCoreApplication::translate("MainInterface", "Shadowknife", nullptr));
        HomeBtn->setText(QCoreApplication::translate("MainInterface", "\344\270\273\351\241\265", nullptr));
        ToolBtn->setText(QCoreApplication::translate("MainInterface", "\345\267\245\345\205\267\347\256\261", nullptr));
        PersonageLogBtn->setText(QCoreApplication::translate("MainInterface", "\346\227\245\345\277\227", nullptr));
        PersonageCenterBtn->setText(QCoreApplication::translate("MainInterface", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        SetBtn->setText(QCoreApplication::translate("MainInterface", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainInterface: public Ui_MainInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAININTERFACE_H
