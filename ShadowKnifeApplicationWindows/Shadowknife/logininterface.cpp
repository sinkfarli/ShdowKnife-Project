#include "logininterface.h"
#include "ui_logininterface.h"
#include "maininterface.h"
#include "calculator.h"
#include <QMessageBox>

#include <QKeyEvent>
#include <QMouseEvent>
#include <QRect>
#include <QPoint>
#include <QGridLayout>

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

void LoginInterface::on_CloseBtn_clicked()
{
    close();
}


void LoginInterface::on_LoginBtn_clicked()
{
    QString UsreName = ui->UserEdit->text();
    QString Pressword = ui->PresswordEdit->text();

    this->close();

   MainInterface *MI = new MainInterface;
    MI->setGeometry(this->geometry());
    MI->show();

     /*Calculator *Cal = new Calculator;
    Cal->setGeometry(this->geometry());
    Cal->show();*/
    if(UsreName == "root" && Pressword == "1234")
    {

    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("账号或密码错误，请重新输入！");
        msgBox.exec();

    }
}



