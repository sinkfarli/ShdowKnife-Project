#ifndef LOGININERTACE_H
#define LOGININERTACE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginInertace; }
QT_END_NAMESPACE

class LoginInertace : public QWidget
{
    Q_OBJECT

public:
    LoginInertace(QWidget *parent = nullptr);
    ~LoginInertace();

private:
    Ui::LoginInertace *ui;
};
#endif // LOGININERTACE_H
