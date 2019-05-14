#-------------------------------------------------
#
# Project created by QtCreator 2019-01-17T09:34:31
#
#-------------------------------------------------

QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WeatherForecast
TEMPLATE = app


SOURCES += main.cpp\
        weatherforecast.cpp \
    database.cpp

HEADERS  += weatherforecast.h \
    database.h

FORMS    += weatherforecast.ui

DISTFILES += \
    UI/¥Û±©”Í .png

RESOURCES += \
    ui.qrc
RC_ICONS = icon.ico
