#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_TranslucentBackground,true);/* 让系统默认背景透明 */


}

Calculator::~Calculator()
{
    delete ui;
}
