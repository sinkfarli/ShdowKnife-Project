/********************************************************************************
** Form generated from reading UI file 'logininterface.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGININTERFACE_H
#define UI_LOGININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginInterface
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_6;

    void setupUi(QWidget *LoginInterface)
    {
        if (LoginInterface->objectName().isEmpty())
            LoginInterface->setObjectName(QString::fromUtf8("LoginInterface"));
        LoginInterface->resize(370, 480);
        LoginInterface->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(LoginInterface);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 370, 480));
        widget->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgba(0,0,0,0);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 300, 420));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/LoginInterfare/Image/LoginInterfare/1.jpg);\n"
"border-radius:20px;\n"
""));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 60, 280, 390));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,100);\n"
"border-radius:15px;"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-350, -90, 230, 40));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:rgba(255,255,255,210);"));
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 165, 201, 40));
        QFont font2;
        font2.setPointSize(10);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(255,255,255,255);\n"
"color:rgba(255,255,255,230);\n"
"padding- bottom:7px;"));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 230, 200, 40));
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(255,255,255,255);\n"
"color:rgba(255,255,255,230);\n"
"padding- bottom:7px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 305, 200, 40));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(20, 47, 78, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255,255,255,210);\n"
"	border-radius:5px;\n"
"}\n"
"QPushButto#pushButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
"}\n"
"QPushButton#pushButton:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(105,118,132,200);\n"
"}"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 360, 240, 20));
        label_4->setStyleSheet(QString::fromUtf8("color:rgba(255,255,255,140);\n"
""));
        label_4->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 400, 160, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(30, 30));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Social Media Circled")});
        font4.setPointSize(15);
        pushButton_4->setFont(font4);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_4{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85,98,112,255);\n"
"	border:none;\n"
"}\n"
"QPushButto#pushButton_4:hover{\n"
"	color:rgba(0, 0, 0, 0);\n"
"}\n"
"QPushButton#pushButton_4:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"}"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(horizontalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(30, 30));
        pushButton_5->setFont(font4);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_5{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85,98,112,255);\n"
"	border:none;\n"
"}\n"
"QPushButto#pushButton_5:hover{\n"
"	color:rgba(0, 0, 0, 0);\n"
"}\n"
"QPushButton#pushButton_5:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"}"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(30, 30));
        pushButton_3->setFont(font4);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_3{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85,98,112,255);\n"
"	border:none;\n"
"}\n"
"QPushButto#pushButton_3:hover{\n"
"	color:rgba(0, 0, 0, 0);\n"
"}\n"
"QPushButton#pushButton_3:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"}"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(30, 30));
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85,98,112,255);\n"
"	border:none;\n"
"}\n"
"QPushButto#pushButton_2:hover{\n"
"	color:rgba(0, 0, 0, 0);\n"
"}\n"
"QPushButton#pushButton_2:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 40, 50, 50));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/LoginInterfare/Image/LoginInterfare/logo.png);\n"
"border-radius:20px;"));
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(280, 30, 30, 29));
        pushButton_6->setMaximumSize(QSize(30, 30));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        pushButton_6->setFont(font5);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_6{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85,98,112,255);\n"
"	border:none;\n"
"}\n"
"QPushButto#pushButton_6:hover{\n"
"	color:rgba(0, 0, 0, 0);\n"
"}\n"
"QPushButton#pushButton_6:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"}"));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(250, 30, 30, 29));
        pushButton_7->setMaximumSize(QSize(30, 30));
        pushButton_7->setFont(font5);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_7{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85,98,112,255);\n"
"	border:none;\n"
"}\n"
"QPushButto#pushButton_7:hover{\n"
"	color:rgba(0, 0, 0, 0);\n"
"}\n"
"QPushButton#pushButton_7:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"}"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 125, 280, 30));
        QFont font6;
        font6.setPointSize(19);
        font6.setBold(true);
        label_6->setFont(font6);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignCenter);

        retranslateUi(LoginInterface);

        QMetaObject::connectSlotsByName(LoginInterface);
    } // setupUi

    void retranslateUi(QWidget *LoginInterface)
    {
        LoginInterface->setWindowTitle(QCoreApplication::translate("LoginInterface", "LoginInterface", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("LoginInterface", "ShadowKnife System", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("LoginInterface", "User Name", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("LoginInterface", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginInterface", "L o g   I n", nullptr));
        label_4->setText(QCoreApplication::translate("LoginInterface", "Forget your User Name or Passwword? ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("LoginInterface", "q", nullptr));
        pushButton_5->setText(QCoreApplication::translate("LoginInterface", ")", nullptr));
        pushButton_3->setText(QCoreApplication::translate("LoginInterface", "C", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginInterface", "E", nullptr));
        label_5->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("LoginInterface", "\342\225\263", nullptr));
        pushButton_7->setText(QCoreApplication::translate("LoginInterface", "-", nullptr));
        label_6->setText(QCoreApplication::translate("LoginInterface", "ShadowKnife System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginInterface: public Ui_LoginInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININTERFACE_H
