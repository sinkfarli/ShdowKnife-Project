#include "logininterface.h"
#include "ui_logininterface.h"

LoginInterface::LoginInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginInterface)
{
    ui->setupUi(this);

    ui->widget->setStyleSheet("QWidget{"
                              "background-color: #ffffff;"
                              "}");


    ui->Close->setStyleSheet("QPushButton{"
                             "border-image: url(:/LoginInterfare/Image/LoginInterfare/close.png)"
                             "}");


    ui->Reduce->setStyleSheet("QPushButton{"
                              "border-image: url(:/LoginInterfare/Image/LoginInterfare/reduce.png)"
                              "}");


    ui->Userlabel->setStyleSheet("Qlabel{"
                                 "border-image: url(:/LoginInterfare/Image/LoginInterfare/UserEdit.png)"
                                 "}");


    ui->UserEdit->setPlaceholderText("请输入用户名");
    ui->UserEdit->setStyleSheet("QLineEdit{"
                                "background: transparent;"
                                "border-width: 0;"
                                "border-style: outset;"
                                "}"); /* 无边框且透明 */


    ui->Presswordlabel->setStyleSheet("QLineEdit{"
                                      "border-image: url(:/LoginInterfare/Image/LoginInterfare/PresswordEdit.png)"
                                      "}");


    ui->PresswordEdit->setPlaceholderText("请输入密码");
    ui->PresswordEdit->setEchoMode(QLineEdit::Password);
    ui->PresswordEdit->setMaxLength(15);
    ui->PresswordEdit->setStyleSheet("QLineEdit{"
                                     "background: transparent;"
                                     "border-width: 0;"
                                     "border-style: outset;"
                                     "}"); /* 无边框且透明 */

    ui->IntoLoginBox->setText("自动登入");


    ui->Forgetlabel->setText("忘记密码？");


    ui->LoginButton->setText("登入");
     ui->LoginButton->setStyleSheet("QPushButton{"
                                    "border-radius: 50px;"
                                    "background-color: #F23A3A;"
                                    "}");/* */
}

LoginInterface::~LoginInterface()
{
    delete ui;
}

