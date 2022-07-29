#ifndef MAININTERFACE_H
#define MAININTERFACE_H

#include <QMainWindow>

namespace Ui {
class MainInterface;
}

class MainInterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainInterface(QWidget *parent = nullptr);
    ~MainInterface();

private:
    Ui::MainInterface *ui;
};

#endif // MAININTERFACE_H
