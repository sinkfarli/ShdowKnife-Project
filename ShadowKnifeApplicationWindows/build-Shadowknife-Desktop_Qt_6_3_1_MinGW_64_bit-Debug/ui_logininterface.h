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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginInterface
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Background;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_2;
    QLineEdit *PresswordEdit;
    QLabel *Text;
    QLineEdit *UserEdit;
    QPushButton *LoginBtn;
    QLabel *Logo;
    QLabel *label;
    QPushButton *CloseBtn;

    void setupUi(QWidget *LoginInterface)
    {
        if (LoginInterface->objectName().isEmpty())
            LoginInterface->setObjectName(QString::fromUtf8("LoginInterface"));
        LoginInterface->resize(300, 420);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/LoginInterfare/Image/LoginInterfare/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginInterface->setWindowIcon(icon);
        LoginInterface->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(LoginInterface);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Background = new QWidget(LoginInterface);
        Background->setObjectName(QString::fromUtf8("Background"));
        QFont font;
        font.setBold(true);
        Background->setFont(font);
        Background->setStyleSheet(QString::fromUtf8("#Background{\n"
"	border-image: url(:/LoginInterfare/Image/LoginInterfare/1.jpg);\n"
"	border-radius:10px;\n"
"}\n"
"#widget{\n"
"	border-radius:10px;\n"
"	background-color: rgba(0, 0, 0, 100);\n"
"}\n"
"#CloseBtn{\n"
"	border:none;\n"
"}\n"
"#Logo{\n"
"	border-image: url(:/LoginInterfare/Image/LoginInterfare/logo.png);\n"
"	border-radius:10px;\n"
"}\n"
"#label,#Text{\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"#UserEdit,#PresswordEdit{\n"
"	background-color:rgba(0,0,0,0);\n"
"	border:none;\n"
"	border-bottom:2px solid rgba(255,255,255,255);\n"
"	color:rgba(255,255,255,230);\n"
"	padding- bottom:7px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Background);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Background);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        PresswordEdit = new QLineEdit(widget_2);
        PresswordEdit->setObjectName(QString::fromUtf8("PresswordEdit"));
        PresswordEdit->setGeometry(QRect(30, 200, 240, 50));
        PresswordEdit->setMinimumSize(QSize(240, 50));
        PresswordEdit->setEchoMode(QLineEdit::Password);
        Text = new QLabel(widget_2);
        Text->setObjectName(QString::fromUtf8("Text"));
        Text->setGeometry(QRect(60, 340, 170, 16));
        Text->setMinimumSize(QSize(170, 0));
        Text->setMaximumSize(QSize(16777215, 22));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        Text->setFont(font1);
        Text->setAlignment(Qt::AlignCenter);
        UserEdit = new QLineEdit(widget_2);
        UserEdit->setObjectName(QString::fromUtf8("UserEdit"));
        UserEdit->setGeometry(QRect(30, 140, 240, 50));
        UserEdit->setMinimumSize(QSize(240, 50));
        LoginBtn = new QPushButton(widget_2);
        LoginBtn->setObjectName(QString::fromUtf8("LoginBtn"));
        LoginBtn->setGeometry(QRect(35, 270, 230, 50));
        LoginBtn->setMinimumSize(QSize(225, 50));
        LoginBtn->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(17);
        LoginBtn->setFont(font2);
        LoginBtn->setStyleSheet(QString::fromUtf8("#LoginBtn{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(20, 47, 78, 219), stop:1 rgba(85, 98, 112, 226));\n"
" color:rgba(255,255,255,210);\n"
" border-radius:5px;\n"
"}#LoginBtn:hover{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
"}\n"
"#LoginBtn:pressed{\n"
" padding-left:5px;\n"
" padding-top:5px;\n"
" background-color:rgba(105,118,132,200);\n"
"}"));
        Logo = new QLabel(widget_2);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(130, 25, 40, 40));
        Logo->setMinimumSize(QSize(40, 40));
        Logo->setMaximumSize(QSize(16777215, 0));
        Logo->setStyleSheet(QString::fromUtf8(""));
        Logo->setAlignment(Qt::AlignCenter);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 90, 300, 50));
        label->setMinimumSize(QSize(0, 50));
        label->setMaximumSize(QSize(16777215, 24));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        label->setFont(font3);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        CloseBtn = new QPushButton(widget_2);
        CloseBtn->setObjectName(QString::fromUtf8("CloseBtn"));
        CloseBtn->setGeometry(QRect(265, 5, 30, 25));
        CloseBtn->setMaximumSize(QSize(30, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MainInterface/Image/MainInterface/x.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CloseBtn->setIcon(icon1);
        CloseBtn->setIconSize(QSize(30, 30));

        verticalLayout_4->addWidget(widget_2);


        verticalLayout_2->addWidget(widget);


        verticalLayout->addWidget(Background);


        retranslateUi(LoginInterface);

        QMetaObject::connectSlotsByName(LoginInterface);
    } // setupUi

    void retranslateUi(QWidget *LoginInterface)
    {
        LoginInterface->setWindowTitle(QCoreApplication::translate("LoginInterface", "Login", nullptr));
        PresswordEdit->setPlaceholderText(QCoreApplication::translate("LoginInterface", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        Text->setText(QCoreApplication::translate("LoginInterface", "\345\277\230\350\256\260\345\257\206\347\240\201\346\210\226\346\263\250\345\206\214\350\264\246\346\210\267\357\274\201", nullptr));
        UserEdit->setPlaceholderText(QCoreApplication::translate("LoginInterface", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        LoginBtn->setText(QCoreApplication::translate("LoginInterface", "\347\231\273  \345\205\245", nullptr));
        Logo->setText(QString());
        label->setText(QCoreApplication::translate("LoginInterface", "ShadowKnife System", nullptr));
        CloseBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginInterface: public Ui_LoginInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININTERFACE_H
