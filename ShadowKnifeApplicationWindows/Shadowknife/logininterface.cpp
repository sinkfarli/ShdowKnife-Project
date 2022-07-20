#include "logininterface.h"
#include "ui_logininterface.h"

LoginInterface::LoginInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginInterface)
{
    ui->setupUi(this);


    ui->Close->setStyleSheet("QPushButton{"
                             "border-image: url(:/LoginInterfare/Image/LoginInterfare/close.png);}");


    ui->Reduce->setStyleSheet("QPushButton{"
                              "border-image: url(:/LoginInterfare/Image/LoginInterfare/reduce.png);}");




}

LoginInterface::~LoginInterface()
{
    delete ui;
}

