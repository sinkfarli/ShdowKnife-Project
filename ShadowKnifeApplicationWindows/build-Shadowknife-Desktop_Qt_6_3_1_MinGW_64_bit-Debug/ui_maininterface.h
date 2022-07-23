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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainInterface
{
public:
    QWidget *widget;

    void setupUi(QWidget *MainInterface)
    {
        if (MainInterface->objectName().isEmpty())
            MainInterface->setObjectName(QString::fromUtf8("MainInterface"));
        MainInterface->resize(1500, 1000);
        MainInterface->setMinimumSize(QSize(1500, 1000));
        MainInterface->setMaximumSize(QSize(1500, 1000));
        widget = new QWidget(MainInterface);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(59, 59, 291, 231));

        retranslateUi(MainInterface);

        QMetaObject::connectSlotsByName(MainInterface);
    } // setupUi

    void retranslateUi(QWidget *MainInterface)
    {
        MainInterface->setWindowTitle(QCoreApplication::translate("MainInterface", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainInterface: public Ui_MainInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAININTERFACE_H
