/********************************************************************************
** Form generated from reading UI file 'logininertace.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGININERTACE_H
#define UI_LOGININERTACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginInertace
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *logo;
    QSpacerItem *verticalSpacer_2;
    QLabel *name;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *intologin;
    QSpacerItem *horizontalSpacer;
    QLabel *forgetpassword;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *login;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *signin;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *LoginInertace)
    {
        if (LoginInertace->objectName().isEmpty())
            LoginInertace->setObjectName(QString::fromUtf8("LoginInertace"));
        LoginInertace->resize(304, 323);
        LoginInertace->setBaseSize(QSize(495, 705));
        gridLayout = new QGridLayout(LoginInertace);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        logo = new QLabel(LoginInertace);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(logo);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        name = new QLabel(LoginInertace);
        name->setObjectName(QString::fromUtf8("name"));
        name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(name);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(LoginInertace);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(LoginInertace);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(LoginInertace);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(LoginInertace);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        intologin = new QCheckBox(LoginInertace);
        intologin->setObjectName(QString::fromUtf8("intologin"));

        horizontalLayout->addWidget(intologin);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        forgetpassword = new QLabel(LoginInertace);
        forgetpassword->setObjectName(QString::fromUtf8("forgetpassword"));

        horizontalLayout->addWidget(forgetpassword);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        login = new QPushButton(LoginInertace);
        login->setObjectName(QString::fromUtf8("login"));

        horizontalLayout_5->addWidget(login);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        signin = new QPushButton(LoginInertace);
        signin->setObjectName(QString::fromUtf8("signin"));

        horizontalLayout_4->addWidget(signin);

        horizontalSpacer_5 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(LoginInertace);

        QMetaObject::connectSlotsByName(LoginInertace);
    } // setupUi

    void retranslateUi(QWidget *LoginInertace)
    {
        LoginInertace->setWindowTitle(QCoreApplication::translate("LoginInertace", "LoginInertace", nullptr));
        logo->setText(QCoreApplication::translate("LoginInertace", "TextLabel", nullptr));
        name->setText(QCoreApplication::translate("LoginInertace", "ShadowKnife System", nullptr));
        label->setText(QCoreApplication::translate("LoginInertace", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("LoginInertace", "TextLabel", nullptr));
        intologin->setText(QCoreApplication::translate("LoginInertace", "\350\207\252\345\212\250\347\231\273\345\205\245", nullptr));
        forgetpassword->setText(QCoreApplication::translate("LoginInertace", "\345\277\230\350\256\260\345\257\206\347\240\201?", nullptr));
        login->setText(QCoreApplication::translate("LoginInertace", "\347\231\273\345\205\245", nullptr));
        signin->setText(QCoreApplication::translate("LoginInertace", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginInertace: public Ui_LoginInertace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININERTACE_H
