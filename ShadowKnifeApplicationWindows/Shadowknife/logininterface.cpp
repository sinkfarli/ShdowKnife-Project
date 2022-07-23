#include "logininterface.h"
#include "ui_logininterface.h"
#include "maininterface.h"
#include <QDebug>

LoginInterface::LoginInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginInterface)
{
    ui->setupUi(this);


    this->setWindowFlag(Qt::FramelessWindowHint);/* 去除系统自带的Dialog边框 */
    this->setAttribute(Qt::WA_TranslucentBackground,true);/* 让系统默认背景透明 */



}

LoginInterface::~LoginInterface()
{
    delete ui;
}


void LoginInterface::on_CloseButton_released()
{
    close();
}


void LoginInterface::on_LoginButton_clicked()
{
    QString UsreName = ui->UserEdit->text();
    QString Pressword = ui->PresswordEdit->text();

    this->close();

    MainInterface *MI = new MainInterface;
    MI->setGeometry(this->geometry());
    MI->show();
    if(UsreName == "root" && Pressword == "1234")
    {

    }
    else
    {
        qDebug() << "账号或密码错误";
    }
}

