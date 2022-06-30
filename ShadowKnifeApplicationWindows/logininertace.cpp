#include "logininertace.h"
#include "./ui_logininertace.h"

LoginInertace::LoginInertace(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginInertace)
{
    ui->setupUi(this);
}

LoginInertace::~LoginInertace()
{
    delete ui;
}

