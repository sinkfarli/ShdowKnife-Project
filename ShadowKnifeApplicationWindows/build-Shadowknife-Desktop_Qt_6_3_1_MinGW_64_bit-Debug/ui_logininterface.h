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

    void setupUi(QWidget *LoginInterface)
    {
        if (LoginInterface->objectName().isEmpty())
            LoginInterface->setObjectName(QString::fromUtf8("LoginInterface"));
        LoginInterface->resize(350, 400);
        widget = new QWidget(LoginInterface);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 30, 250, 350));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
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
        UserEdit->setGeometry(QRect(70, 170, 113, 20));
        Close = new QPushButton(widget);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setGeometry(QRect(230, 0, 20, 20));
        Close->setStyleSheet(QString::fromUtf8(""));
        Close->setFlat(false);
        Reduce = new QPushButton(widget);
        Reduce->setObjectName(QString::fromUtf8("Reduce"));
        Reduce->setGeometry(QRect(210, 0, 20, 20));
        Reduce->setStyleSheet(QString::fromUtf8("image: url(:/LoginInterfare/Image/LoginInterfare/reduce.png);"));
        Reduce->setFlat(false);

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
    } // retranslateUi

};

namespace Ui {
    class LoginInterface: public Ui_LoginInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININTERFACE_H
