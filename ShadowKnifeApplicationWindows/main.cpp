#include "logininertace.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginInertace w;
    w.show();
    return a.exec();
}
