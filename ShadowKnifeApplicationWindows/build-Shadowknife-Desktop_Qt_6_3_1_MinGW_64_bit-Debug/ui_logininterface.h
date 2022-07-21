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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginInterface
{
public:
    QWidget *widget;
    QLabel *logo;
    QLabel *ShadowknifeSystem;
    QLineEdit *UserEdit;
    QPushButton *Close;
    QPushButton *Reduce;
    QLineEdit *PresswordEdit;
    QLabel *Userlabel;
    QLabel *Presswordlabel;
    QCheckBox *IntoLoginBox;
    QLabel *Forgetlabel;
    QPushButton *LoginButton;

    void setupUi(QWidget *LoginInterface)
    {
        if (LoginInterface->objectName().isEmpty())
            LoginInterface->setObjectName(QString::fromUtf8("LoginInterface"));
        LoginInterface->resize(350, 400);
        widget = new QWidget(LoginInterface);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 20, 250, 350));
        widget->setStyleSheet(QString::fromUtf8(""));
        logo = new QLabel(widget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(100, 30, 50, 50));
        logo->setStyleSheet(QString::fromUtf8("image: url(:/LoginInterfare/Image/LoginInterfare/logo.png);"));
        ShadowknifeSystem = new QLabel(widget);
        ShadowknifeSystem->setObjectName(QString::fromUtf8("ShadowknifeSystem"));
        ShadowknifeSystem->setGeometry(QRect(0, 100, 250, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Nirmala UI")});
        font.setPointSize(15);
        font.setBold(false);
        ShadowknifeSystem->setFont(font);
        ShadowknifeSystem->setAlignment(Qt::AlignCenter);
        UserEdit = new QLineEdit(widget);
        UserEdit->setObjectName(QString::fromUtf8("UserEdit"));
        UserEdit->setGeometry(QRect(50, 170, 150, 20));
        Close = new QPushButton(widget);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setGeometry(QRect(230, 0, 20, 20));
        Close->setStyleSheet(QString::fromUtf8(""));
        Close->setFlat(false);
        Reduce = new QPushButton(widget);
        Reduce->setObjectName(QString::fromUtf8("Reduce"));
        Reduce->setGeometry(QRect(210, 0, 20, 20));
        Reduce->setStyleSheet(QString::fromUtf8(""));
        Reduce->setFlat(false);
        PresswordEdit = new QLineEdit(widget);
        PresswordEdit->setObjectName(QString::fromUtf8("PresswordEdit"));
        PresswordEdit->setGeometry(QRect(50, 200, 150, 20));
        Userlabel = new QLabel(widget);
        Userlabel->setObjectName(QString::fromUtf8("Userlabel"));
        Userlabel->setGeometry(QRect(30, 170, 20, 20));
        Presswordlabel = new QLabel(widget);
        Presswordlabel->setObjectName(QString::fromUtf8("Presswordlabel"));
        Presswordlabel->setGeometry(QRect(30, 200, 20, 20));
        IntoLoginBox = new QCheckBox(widget);
        IntoLoginBox->setObjectName(QString::fromUtf8("IntoLoginBox"));
        IntoLoginBox->setGeometry(QRect(25, 230, 70, 18));
        Forgetlabel = new QLabel(widget);
        Forgetlabel->setObjectName(QString::fromUtf8("Forgetlabel"));
        Forgetlabel->setGeometry(QRect(175, 230, 55, 16));
        LoginButton = new QPushButton(widget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(60, 260, 130, 20));

        retranslateUi(LoginInterface);

        QMetaObject::connectSlotsByName(LoginInterface);
    } // setupUi

    void retranslateUi(QWidget *LoginInterface)
    {
        LoginInterface->setWindowTitle(QCoreApplication::translate("LoginInterface", "LoginInterface", nullptr));
        logo->setText(QString());
        ShadowknifeSystem->setText(QCoreApplication::translate("LoginInterface", "Shadowknife System", nullptr));
        Close->setText(QString());
        Reduce->setText(QString());
        Userlabel->setText(QString());
        Presswordlabel->setText(QString());
        IntoLoginBox->setText(QString());
        Forgetlabel->setText(QString());
        LoginButton->setText(QCoreApplication::translate("LoginInterface", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginInterface: public Ui_LoginInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININTERFACE_H
