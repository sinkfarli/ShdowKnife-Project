#include "logininterface.h"
#include "ui_logininterface.h"

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

