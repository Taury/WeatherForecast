#ifndef WEATHERFORECAST_H
#define WEATHERFORECAST_H

#include <QMainWindow>
#include <QString>
#include <QDebug>

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonParseError>

#include <QTime>
#include <QTimer>
#include <QDateTime>

#include <QWidget>
#include <QMouseEvent>
#include <QKeyEvent>

namespace Ui {
class WeatherForecast;
}

class WeatherForecast : public QMainWindow
{
    Q_OBJECT

public:
    explicit WeatherForecast(QWidget *parent = 0);

    ~WeatherForecast();

private slots:
    void getWeather(QNetworkReply *reply);

    void on_pushButton_clicked();

    void showTime();

private:
    Ui::WeatherForecast *ui;

    QNetworkAccessManager manager;
    QTimer    timer;
    QString   cityId;

    QString   city;
    QString   wendu;
    QString   ganmao;

    QStringList   date;
    QStringList   low;
    QStringList   high;
    QStringList   fengxiang;
    QStringList   fengli;
    QStringList   type;
};

#endif // WEATHERFORECAST_H
