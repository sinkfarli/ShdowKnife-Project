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
    QLineEdit *UserEdit;
    QLineEdit *PresswordEdit;
    QPushButton *LoginButton;
    QLabel *Hintlabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *LoginWayButton1;
    QPushButton *LoginWayButton2;
    QPushButton *LoginWayButton3;
    QPushButton *LoginWayButton4;
    QLabel *Logolabel;
    QPushButton *CloseButton;
    QLabel *Namelabel;

    void setupUi(QWidget *LoginInterface)
    {
        if (LoginInterface->objectName().isEmpty())
            LoginInterface->setObjectName(QString::fromUtf8("LoginInterface"));
        LoginInterface->resize(300, 420);
        LoginInterface->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(LoginInterface);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 300, 420));
        widget->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgba(0,0,0,0);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 300, 420));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/LoginInterfare/Image/LoginInterfare/1.jpg);\n"
"border-radius:20px;\n"
""));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 280, 390));
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
        UserEdit = new QLineEdit(widget);
        UserEdit->setObjectName(QString::fromUtf8("UserEdit"));
        UserEdit->setGeometry(QRect(50, 135, 201, 40));
        QFont font2;
        font2.setPointSize(10);
        UserEdit->setFont(font2);
        UserEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(255,255,255,255);\n"
"color:rgba(255,255,255,230);\n"
"padding- bottom:7px;"));
        PresswordEdit = new QLineEdit(widget);
        PresswordEdit->setObjectName(QString::fromUtf8("PresswordEdit"));
        PresswordEdit->setGeometry(QRect(50, 200, 200, 40));
        PresswordEdit->setFont(font2);
        PresswordEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(255,255,255,255);\n"
"color:rgba(255,255,255,230);\n"
"padding- bottom:7px;"));
        PresswordEdit->setEchoMode(QLineEdit::Password);
        LoginButton = new QPushButton(widget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(50, 275, 200, 40));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        LoginButton->setFont(font3);
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton#LoginButton{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(20, 47, 78, 219), stop:1 rgba(85, 98, 112, 226));\n"
"	color:rgba(255,255,255,210);\n"
"	border-radius:5px;\n"
"}\n"
"QPushButto#LoginButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
"}\n"
"QPushButton#LoginButton:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(105,118,132,200);\n"
"}"));
        Hintlabel = new QLabel(widget);
        Hintlabel->setObjectName(QString::fromUtf8("Hintlabel"));
        Hintlabel->setGeometry(QRect(30, 330, 240, 20));
        Hintlabel->setStyleSheet(QString::fromUtf8("color:rgba(255,255,255,140);\n"
""));
        Hintlabel->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 370, 160, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LoginWayButton1 = new QPushButton(horizontalLayoutWidget);
        LoginWayButton1->setObjectName(QString::fromUtf8("LoginWayButton1"));
        LoginWayButton1->setMaximumSize(QSize(30, 30));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Social Media Circled")});
        font4.setPointSize(15);
        LoginWayButton1->setFont(font4);
        LoginWayButton1->setStyleSheet(QString::fromUtf8("QPushButton#LoginWayButton1{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85,98,112,255);\n"
"	border:none;\n"
"}\n"
"QPushButto#LoginWayButton1:hover{\n"
"	color:rgba(0, 0, 0, 0);\n"
"}\n"
"QPushButton#LoginWayButton1:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"}"));

        horizontalLayout->addWidget(LoginWayButton1);

        LoginWayButton2 = new QPushButton(horizontalLayoutWidget);
        LoginWayButton2->setObjectName(QString::fromUtf8("LoginWayButton2"));
        LoginWayButton2->setMaximumSize(QSize(30, 30));
        LoginWayButton2->setFont(font4);
        LoginWayButton2->setStyleSheet(QString::fromUtf8("QPushButton#LoginWayButton2{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85,98,112,255);\n"
"	border:none;\n"
"}\n"
"QPushButto#LoginWayButto2n:hover{\n"
"	color:rgba(0, 0, 0, 0);\n"
"}\n"
"QPushButton#LoginWayButton2:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"}"));

        horizontalLayout->addWidget(LoginWayButton2);

        LoginWayButton3 = new QPushButton(horizontalLayoutWidget);
        LoginWayButton3->setObjectName(QString::fromUtf8("LoginWayButton3"));
        LoginWayButton3->setMaximumSize(QSize(30, 30));
        LoginWayButton3->setFont(font4);
        LoginWayButton3->setStyleSheet(QString::fromUtf8("QPushButton#LoginWayButton3{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85,98,112,255);\n"
"	border:none;\n"
"}\n"
"QPushButto#LoginWayButton3:hover{\n"
"	color:rgba(0, 0, 0, 0);\n"
"}\n"
"QPushButton#LoginWayButton3:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"}"));

        horizontalLayout->addWidget(LoginWayButton3);

        LoginWayButton4 = new QPushButton(horizontalLayoutWidget);
        LoginWayButton4->setObjectName(QString::fromUtf8("LoginWayButton4"));
        LoginWayButton4->setMaximumSize(QSize(30, 30));
        LoginWayButton4->setFont(font4);
        LoginWayButton4->setStyleSheet(QString::fromUtf8("QPushButton#LoginWayButton4{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85,98,112,255);\n"
"	border:none;\n"
"}\n"
"QPushButto#LoginWayButton4:hover{\n"
"	color:rgba(0, 0, 0, 0);\n"
"}\n"
"QPushButton#LoginWayButton4:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"}"));

        horizontalLayout->addWidget(LoginWayButton4);

        Logolabel = new QLabel(widget);
        Logolabel->setObjectName(QString::fromUtf8("Logolabel"));
        Logolabel->setGeometry(QRect(120, 10, 50, 50));
        Logolabel->setStyleSheet(QString::fromUtf8("border-image: url(:/LoginInterfare/Image/LoginInterfare/logo.png);\n"
"border-radius:20px;"));
        CloseButton = new QPushButton(widget);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setGeometry(QRect(252, 3, 30, 29));
        CloseButton->setMaximumSize(QSize(30, 30));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        CloseButton->setFont(font5);
        CloseButton->setStyleSheet(QString::fromUtf8("QPushButton#CloseButton{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85,98,112,255);\n"
"	border:none;\n"
"}\n"
"QPushButto#CloseButton:hover{\n"
"	color:rgba(0, 0, 0, 0);\n"
"}\n"
"QPushButton#CloseButton:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"}"));
        Namelabel = new QLabel(widget);
        Namelabel->setObjectName(QString::fromUtf8("Namelabel"));
        Namelabel->setGeometry(QRect(10, 95, 280, 30));
        QFont font6;
        font6.setPointSize(19);
        font6.setBold(true);
        Namelabel->setFont(font6);
        Namelabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Namelabel->setAlignment(Qt::AlignCenter);

        retranslateUi(LoginInterface);

        QMetaObject::connectSlotsByName(LoginInterface);
    } // setupUi

    void retranslateUi(QWidget *LoginInterface)
    {
        LoginInterface->setWindowTitle(QCoreApplication::translate("LoginInterface", "LoginInterface", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("LoginInterface", "ShadowKnife System", nullptr));
        UserEdit->setPlaceholderText(QCoreApplication::translate("LoginInterface", "User Name", nullptr));
        PresswordEdit->setPlaceholderText(QCoreApplication::translate("LoginInterface", "Password", nullptr));
        LoginButton->setText(QCoreApplication::translate("LoginInterface", "L o g   I n", nullptr));
        Hintlabel->setText(QCoreApplication::translate("LoginInterface", "Forget your User Name or Passwword? ", nullptr));
        LoginWayButton1->setText(QCoreApplication::translate("LoginInterface", "q", nullptr));
        LoginWayButton2->setText(QCoreApplication::translate("LoginInterface", ")", nullptr));
        LoginWayButton3->setText(QCoreApplication::translate("LoginInterface", "C", nullptr));
        LoginWayButton4->setText(QCoreApplication::translate("LoginInterface", "E", nullptr));
        Logolabel->setText(QString());
        CloseButton->setText(QCoreApplication::translate("LoginInterface", "\342\225\263", nullptr));
        Namelabel->setText(QCoreApplication::translate("LoginInterface", "ShadowKnife System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginInterface: public Ui_LoginInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININTERFACE_H
