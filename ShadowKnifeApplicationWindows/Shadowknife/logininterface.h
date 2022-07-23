#ifndef LOGININTERFACE_H
#define LOGININTERFACE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginInterface; }
QT_END_NAMESPACE

class LoginInterface : public QWidget
{
    Q_OBJECT

public:
    LoginInterface(QWidget *parent = nullptr);
    ~LoginInterface();

private slots:
    void on_CloseButton_released();

    void on_LoginButton_clicked();

private:
    Ui::LoginInterface *ui;
};
#endif // LOGININTERFACE_H
