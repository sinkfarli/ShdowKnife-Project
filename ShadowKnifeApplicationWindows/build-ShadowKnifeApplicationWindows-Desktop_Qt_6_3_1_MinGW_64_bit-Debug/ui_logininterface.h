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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginInterface
{
public:
    QFrame *frame;
    QLabel *PasswordImage;
    QLabel *UserImage;
    QLineEdit *UserNameEdit;
    QPushButton *SigninButton;
    QLabel *logo;
    QPushButton *LoginButton;
    QLabel *ShadowKnife;
    QLineEdit *PasswordEdit;
    QLabel *Forget;
    QCheckBox *Autologin;

    void setupUi(QWidget *LoginInterface)
    {
        if (LoginInterface->objectName().isEmpty())
            LoginInterface->setObjectName(QString::fromUtf8("LoginInterface"));
        LoginInterface->resize(474, 429);
        LoginInterface->setBaseSize(QSize(495, 705));
        frame = new QFrame(LoginInterface);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(90, 30, 251, 321));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        PasswordImage = new QLabel(frame);
        PasswordImage->setObjectName(QString::fromUtf8("PasswordImage"));
        PasswordImage->setGeometry(QRect(70, 170, 16, 16));
        PasswordImage->setStyleSheet(QString::fromUtf8("border-image: url(:/Image/Image/password.png);"));
        PasswordImage->setAlignment(Qt::AlignCenter);
        UserImage = new QLabel(frame);
        UserImage->setObjectName(QString::fromUtf8("UserImage"));
        UserImage->setGeometry(QRect(70, 130, 16, 16));
        UserImage->setBaseSize(QSize(50, 50));
        UserImage->setStyleSheet(QString::fromUtf8("border-image: url(:/Image/Image/userlogin.png);"));
        UserImage->setAlignment(Qt::AlignCenter);
        UserNameEdit = new QLineEdit(frame);
        UserNameEdit->setObjectName(QString::fromUtf8("UserNameEdit"));
        UserNameEdit->setGeometry(QRect(100, 130, 91, 22));
        SigninButton = new QPushButton(frame);
        SigninButton->setObjectName(QString::fromUtf8("SigninButton"));
        SigninButton->setGeometry(QRect(90, 260, 80, 18));
        logo = new QLabel(frame);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(100, 30, 41, 41));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/Image/Image/logo.png);"));
        LoginButton = new QPushButton(frame);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(90, 230, 80, 18));
        ShadowKnife = new QLabel(frame);
        ShadowKnife->setObjectName(QString::fromUtf8("ShadowKnife"));
        ShadowKnife->setGeometry(QRect(10, 90, 221, 21));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setStrikeOut(false);
        ShadowKnife->setFont(font);
        ShadowKnife->setAlignment(Qt::AlignCenter);
        PasswordEdit = new QLineEdit(frame);
        PasswordEdit->setObjectName(QString::fromUtf8("PasswordEdit"));
        PasswordEdit->setGeometry(QRect(100, 170, 91, 22));
        PasswordEdit->setEchoMode(QLineEdit::Password);
        Forget = new QLabel(frame);
        Forget->setObjectName(QString::fromUtf8("Forget"));
        Forget->setGeometry(QRect(160, 200, 45, 20));
        Autologin = new QCheckBox(frame);
        Autologin->setObjectName(QString::fromUtf8("Autologin"));
        Autologin->setGeometry(QRect(60, 200, 55, 18));
        QWidget::setTabOrder(UserNameEdit, LoginButton);
        QWidget::setTabOrder(LoginButton, SigninButton);

        retranslateUi(LoginInterface);

        QMetaObject::connectSlotsByName(LoginInterface);
    } // setupUi

    void retranslateUi(QWidget *LoginInterface)
    {
        LoginInterface->setWindowTitle(QCoreApplication::translate("LoginInterface", "LoginInterface", nullptr));
        PasswordImage->setText(QString());
        UserImage->setText(QString());
        UserNameEdit->setPlaceholderText(QCoreApplication::translate("LoginInterface", "user", nullptr));
        SigninButton->setText(QCoreApplication::translate("LoginInterface", "\346\263\250\345\206\214", nullptr));
        logo->setText(QString());
        LoginButton->setText(QCoreApplication::translate("LoginInterface", "\347\231\273\345\205\245", nullptr));
        ShadowKnife->setText(QCoreApplication::translate("LoginInterface", "ShadowKnife System", nullptr));
        PasswordEdit->setPlaceholderText(QCoreApplication::translate("LoginInterface", "password", nullptr));
        Forget->setText(QCoreApplication::translate("LoginInterface", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", nullptr));
        Autologin->setText(QCoreApplication::translate("LoginInterface", "\350\207\252\345\212\250\347\231\273\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginInterface: public Ui_LoginInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININTERFACE_H
