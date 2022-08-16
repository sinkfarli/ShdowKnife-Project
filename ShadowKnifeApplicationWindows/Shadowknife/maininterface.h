#ifndef MAININTERFACE_H
#define MAININTERFACE_H

#include <QMainWindow>

#include <QString>
#include <QUrl>
#include <QTime>
#include <QTimer>
#include <QDebug>

//网络相关头文件
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>

//JSON解析相关的头文件
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include "calculator.h"



namespace Ui {
class MainInterface;
}

class MainInterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainInterface(QWidget *parent = nullptr);
    ~MainInterface();

    QNetworkAccessManager *manager;//请求句柄
    QNetworkRequest request;

    //void SetWeatherPicture(QString weather);

private slots:
    void on_HomeBtn_clicked();

    void on_ToolBtn_clicked();

    void ReplyFinished(QNetworkReply *reply);

    void on_RefreshWBtn_clicked();

    void on_CalculatorBtn_clicked();

private:
    Ui::MainInterface *ui;
};

#endif // MAININTERFACE_H
