#include "weatherforecast.h"
#include "ui_weatherforecast.h"
#include "database.h"

WeatherForecast::WeatherForecast(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WeatherForecast)
{
    ui->setupUi(this);

    this->cityId = "101282005";
    QString urlstr = QString("http://wthrcdn.etouch.cn/weather_mini?citykey=%1").arg(this->cityId);
    QUrl url(urlstr);
    QNetworkRequest request(url);
    this->manager.get(request);

    timer.start(1000);

    connect(&manager,SIGNAL(finished(QNetworkReply*)),SLOT(getWeather(QNetworkReply*)));
    connect(&timer, SIGNAL(timeout()), this, SLOT(showTime()));
}


WeatherForecast::~WeatherForecast()
{
    delete ui;
}

void WeatherForecast::on_pushButton_clicked()
{
    QString cmd = QString("select id from cityid where city = '%1';").arg(ui->city_lineEdit->text());
    QSqlQuery query;
    query.exec(cmd);
    while(query.next())
        this->cityId = query.value(0).toString();
    qDebug()<<this->cityId;

    QString urlstr = QString("http://wthrcdn.etouch.cn/weather_mini?citykey=%1").arg(this->cityId);
    QUrl url(urlstr);
    QNetworkRequest request(url);
    this->manager.get(request);
}

void WeatherForecast::showTime()
{
    ui->time_label->setText(QTime::currentTime().toString ("hh:mm"));
}

void WeatherForecast::getWeather(QNetworkReply *reply)
{
    this->date.clear();
    this->low.clear();
    this->high.clear();
    this->fengxiang.clear();
    this->fengli.clear();
    this->type.clear();

    QByteArray arr = reply->readAll();

    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(arr, &err);

    if(err.error != QJsonParseError::NoError)
    {
        qDebug()<<"It's not Json format!";
        return;
    }

    QJsonObject jsObj = doc.object();
    QJsonObject dataObj = jsObj.value("data").toObject();

    this->city = dataObj.value("city").toString();
    this->wendu = dataObj.value("wendu").toString();
    this->ganmao = dataObj.value("ganmao").toString();

    QJsonArray forecast = dataObj.value("forecast").toArray();

    QStringList datestr;
    for(int i=0; i<forecast.count(); i++)
    {
        QJsonObject obj = forecast.at(i).toObject();

        QString str = obj.value("date").toString();
        int n = str.indexOf("日");
        datestr << str.insert(n+1, "\n");

        this->high << obj.value("high").toString().remove("高温");
        this->low << obj.value("low").toString().remove("低温");
        this->fengxiang << obj.value("fengxiang").toString();
        this->fengli << obj.value("fengli").toString().remove("<![CDATA[<").remove("]]>");
        this->type << obj.value("type").toString();
    }
    this->date = datestr;

    ui->city_label->setText(this->city);
    ui->ganmao_textBrowser->setText("    "+this->ganmao);
    ui->wendu_label->setText(this->wendu+"℃");

    ui->date0_label->setText(this->date.at(0));
    ui->date1_label->setText(this->date.at(1));
    ui->date2_label->setText(this->date.at(2));
    ui->date3_label->setText(this->date.at(3));
    ui->date4_label->setText(this->date.at(4));

    ui->low0_label->setText(this->low.at(0));
    ui->low1_label->setText(this->low.at(1));
    ui->low2_label->setText(this->low.at(2));
    ui->low3_label->setText(this->low.at(3));
    ui->low4_label->setText(this->low.at(4));

    ui->high0_label->setText(this->high.at(0));
    ui->high1_label->setText(this->high.at(1));
    ui->high2_label->setText(this->high.at(2));
    ui->high3_label->setText(this->high.at(3));
    ui->high4_label->setText(this->high.at(4));

    ui->fengxiang_label->setText(this->fengxiang.at(0));
    ui->fengli_label->setText(this->fengli.at(0));

    ui->type0_label->setText(this->type.at(0));
    ui->type1_label->setText(this->type.at(1));
    ui->type2_label->setText(this->type.at(2));
    ui->type3_label->setText(this->type.at(3));
    ui->type4_label->setText(this->type.at(4));

    ui->date_label->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd"));

    if(QString(ui->type0_label->text()).indexOf("雨")>=0)
        ui->centralWidget->setStyleSheet("QWidget#centralWidget{border-image: url(:/UI/Rainy.png)};");
    else if((QString(ui->type0_label->text()).indexOf("阴") || QString(ui->type0_label->text()).indexOf("云")))
        ui->centralWidget->setStyleSheet("QWidget#centralWidget{border-image: url(:/UI/Cloudy.png)};");
    else if(QString(ui->type0_label->text()).indexOf("雪")>=0)
        ui->centralWidget->setStyleSheet("QWidget#centralWidget{border-image: url(:/UI/Snowy.png)};");
    else
        ui->centralWidget->setStyleSheet("QWidget#centralWidget{border-image: url(:/UI/Sunny.png)};");

    ui->type0_label->setStyleSheet(QString("border-image: url(:/UI/%1.png);").arg(this->type.at(0)));
    ui->type1_label->setStyleSheet(QString("border-image: url(:/UI/%1.png);").arg(this->type.at(1)));
    ui->type2_label->setStyleSheet(QString("border-image: url(:/UI/%1.png);").arg(this->type.at(2)));
    ui->type3_label->setStyleSheet(QString("border-image: url(:/UI/%1.png);").arg(this->type.at(3)));
    ui->type4_label->setStyleSheet(QString("border-image: url(:/UI/%1.png);").arg(this->type.at(4)));

}
