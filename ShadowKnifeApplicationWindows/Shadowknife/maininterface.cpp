#include "maininterface.h"
#include "ui_maininterface.h"


MainInterface::MainInterface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainInterface)
{
    ui->setupUi(this);


    /*获取天气API*/
    QString str = "http://wthrcdn.etouch.cn/weather_mini?city=深圳";//天气url
    QUrl url(str);
    manager = new QNetworkAccessManager(this);//新建QNetworkAccessManager对象
    request.setUrl(url);
    manager->get(request);
    connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(ReplyFinished(QNetworkReply*)));


    /*获取当前日期和时间*/
    QDateTime dt;
    QDate date;
    dt.setDate(date.currentDate());
    QString currentDate = dt.toString("yyyy-MM-dd ddd");
    ui->YearLab->setText(currentDate);

    //时间定时器
    QTimer *CurrentTime = new QTimer(this);
    CurrentTime->start(0);

    //使用定时器信号槽，尽快更新时间的显示
    connect(CurrentTime,&QTimer::timeout,[=](){
    QDateTime current_time = QDateTime::currentDateTime();
    QString StrCurrentTime = current_time.toString("hh:mm:ss");
    ui->TimeLab->setText(StrCurrentTime);
    });

}



void MainInterface::on_HomeBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainInterface::on_ToolBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

/**
 * @brief 天气数据处理槽函数
 * @param reply
 */
void MainInterface::ReplyFinished(QNetworkReply *reply)
{
    QByteArray arry =  reply->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(arry);
    if(doc.isNull())//为空，直接返回
        return;

    QJsonObject obj =  doc.object();//将获取的数据转换为Json格式
    if(false == obj.contains("data"))//判断是否有包含“data”的对象，为空，直接返回
        return;

    QJsonValue val = obj.value("data");//获取“data”对象的
    if(!val.isObject())//为空，直接返回
        return;

    QJsonObject jsonDate = val.toObject();
    QString curr_temp = jsonDate.value("wendu").toString();//获取当前温度
    QString city = jsonDate.value("city").toString();//获取当前城市
    ui->CurrentTemp->setText("当前温度"+curr_temp+"℃");
    ui->City->setText("当前定位："+city);

    QJsonValue fore = jsonDate.value("forecast");
    if(fore.isArray())
    {
        QJsonArray Jsonarry = fore.toArray();
        QJsonObject today_weather = Jsonarry.at(0).toObject();//遍历获取0次
        QString high = today_weather.value("high").toString();//最高温度
        QString low = today_weather.value("low").toString();//最低温度
        QString weather = today_weather.value("type").toString();//天气
        ui->HighT->setText("最"+high);
        ui->LowT->setText("最"+low);
        ui->PictureW->setText(weather);
    }
}


MainInterface::~MainInterface()
{
    delete ui;
}


void MainInterface::on_RefreshWBtn_clicked()
{
    QString str = "http://wthrcdn.etouch.cn/weather_mini?city=深圳";//天气url
    QUrl url(str);
    manager = new QNetworkAccessManager(this);//新建QNetworkAccessManager对象
    request.setUrl(url);
    manager->get(request);
    connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(ReplyFinished(QNetworkReply*)));
}


void MainInterface::on_CalculatorBtn_clicked()
{
    Calculator *TC = new Calculator;
    TC->setGeometry(this->geometry());
    TC->show();
}

