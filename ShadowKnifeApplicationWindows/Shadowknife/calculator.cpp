#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    this->setWindowFlag(Qt::FramelessWindowHint);/* 去除系统自带的Dialog边框 */
    this->setAttribute(Qt::WA_TranslucentBackground,true);/* 让系统默认背景透明 */


}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_CloseBut_clicked()
{
    close();
}

