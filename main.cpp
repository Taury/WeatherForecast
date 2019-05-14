#include <QApplication>
#include "weatherforecast.h"
#include "database.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    WeatherForecast weather;
    weather.show();
    Database citydb;

    return app.exec();
}
