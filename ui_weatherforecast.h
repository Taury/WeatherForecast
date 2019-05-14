/********************************************************************************
** Form generated from reading UI file 'weatherforecast.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHERFORECAST_H
#define UI_WEATHERFORECAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeatherForecast
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *city_label;
    QLabel *wendu_label;
    QLabel *date_label;
    QLabel *ganmaotips_label;
    QLabel *fengxiang_label;
    QLabel *fengxiangtips_label;
    QLabel *fengli_label;
    QLabel *fenglitips_label;
    QFrame *frame_0;
    QLabel *date0_label;
    QLabel *low0_label;
    QLabel *label_3;
    QLabel *high0_label;
    QLabel *type0_label;
    QFrame *frame_1;
    QLabel *date1_label;
    QLabel *type1_label;
    QLabel *low1_label;
    QLabel *label_7;
    QLabel *high1_label;
    QFrame *frame_2;
    QLabel *date2_label;
    QLabel *type2_label;
    QLabel *low2_label;
    QLabel *label_11;
    QLabel *high2_label;
    QFrame *frame_3;
    QLabel *date3_label;
    QLabel *type3_label;
    QLabel *low3_label;
    QLabel *label_15;
    QLabel *high3_label;
    QFrame *frame_4;
    QLabel *date4_label;
    QLabel *type4_label;
    QLabel *low4_label;
    QLabel *label_19;
    QLabel *high4_label;
    QLabel *time_label;
    QTextBrowser *ganmao_textBrowser;
    QLineEdit *city_lineEdit;
    QLabel *city_label_2;

    void setupUi(QMainWindow *WeatherForecast)
    {
        if (WeatherForecast->objectName().isEmpty())
            WeatherForecast->setObjectName(QStringLiteral("WeatherForecast"));
        WeatherForecast->setWindowModality(Qt::WindowModal);
        WeatherForecast->resize(800, 480);
        WeatherForecast->setMinimumSize(QSize(800, 480));
        WeatherForecast->setMaximumSize(QSize(800, 480));
        WeatherForecast->setContextMenuPolicy(Qt::CustomContextMenu);
        WeatherForecast->setAcceptDrops(true);
        WeatherForecast->setAnimated(false);
        WeatherForecast->setDocumentMode(false);
        WeatherForecast->setTabShape(QTabWidget::Rounded);
        WeatherForecast->setDockNestingEnabled(true);
        WeatherForecast->setDockOptions(QMainWindow::AllowNestedDocks);
        centralWidget = new QWidget(WeatherForecast);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 10, 32, 32));
        pushButton->setStyleSheet(QString::fromUtf8("border-top:0px solid #e8f3f9;\n"
"background:  transparent;\n"
"border-image: url(:/UI/\346\237\245\346\211\276.png);"));
        city_label = new QLabel(centralWidget);
        city_label->setObjectName(QStringLiteral("city_label"));
        city_label->setGeometry(QRect(100, 40, 111, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        city_label->setFont(font);
        city_label->setTextFormat(Qt::AutoText);
        city_label->setAlignment(Qt::AlignCenter);
        wendu_label = new QLabel(centralWidget);
        wendu_label->setObjectName(QStringLiteral("wendu_label"));
        wendu_label->setGeometry(QRect(80, 90, 171, 131));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        wendu_label->setFont(font1);
        wendu_label->setAlignment(Qt::AlignCenter);
        date_label = new QLabel(centralWidget);
        date_label->setObjectName(QStringLiteral("date_label"));
        date_label->setGeometry(QRect(250, 30, 181, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        date_label->setFont(font2);
        date_label->setAlignment(Qt::AlignCenter);
        ganmaotips_label = new QLabel(centralWidget);
        ganmaotips_label->setObjectName(QStringLiteral("ganmaotips_label"));
        ganmaotips_label->setGeometry(QRect(460, 80, 72, 161));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        ganmaotips_label->setFont(font3);
        ganmaotips_label->setLayoutDirection(Qt::LeftToRight);
        ganmaotips_label->setAlignment(Qt::AlignCenter);
        fengxiang_label = new QLabel(centralWidget);
        fengxiang_label->setObjectName(QStringLiteral("fengxiang_label"));
        fengxiang_label->setGeometry(QRect(180, 230, 111, 20));
        fengxiangtips_label = new QLabel(centralWidget);
        fengxiangtips_label->setObjectName(QStringLiteral("fengxiangtips_label"));
        fengxiangtips_label->setGeometry(QRect(130, 230, 51, 20));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        fengxiangtips_label->setFont(font4);
        fengli_label = new QLabel(centralWidget);
        fengli_label->setObjectName(QStringLiteral("fengli_label"));
        fengli_label->setGeometry(QRect(360, 230, 72, 20));
        fenglitips_label = new QLabel(centralWidget);
        fenglitips_label->setObjectName(QStringLiteral("fenglitips_label"));
        fenglitips_label->setGeometry(QRect(310, 230, 51, 20));
        fenglitips_label->setFont(font4);
        frame_0 = new QFrame(centralWidget);
        frame_0->setObjectName(QStringLiteral("frame_0"));
        frame_0->setGeometry(QRect(90, 280, 121, 171));
        frame_0->setStyleSheet(QStringLiteral(""));
        frame_0->setFrameShape(QFrame::StyledPanel);
        frame_0->setFrameShadow(QFrame::Raised);
        date0_label = new QLabel(frame_0);
        date0_label->setObjectName(QStringLiteral("date0_label"));
        date0_label->setGeometry(QRect(20, 10, 72, 50));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font5.setPointSize(12);
        date0_label->setFont(font5);
        date0_label->setAlignment(Qt::AlignCenter);
        low0_label = new QLabel(frame_0);
        low0_label->setObjectName(QStringLiteral("low0_label"));
        low0_label->setGeometry(QRect(0, 110, 51, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        low0_label->setFont(font6);
        low0_label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame_0);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 120, 16, 16));
        label_3->setFont(font6);
        label_3->setAlignment(Qt::AlignCenter);
        high0_label = new QLabel(frame_0);
        high0_label->setObjectName(QStringLiteral("high0_label"));
        high0_label->setGeometry(QRect(60, 110, 51, 31));
        high0_label->setFont(font6);
        high0_label->setAlignment(Qt::AlignCenter);
        type0_label = new QLabel(frame_0);
        type0_label->setObjectName(QStringLiteral("type0_label"));
        type0_label->setGeometry(QRect(20, 50, 78, 78));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font7.setPointSize(16);
        font7.setBold(true);
        font7.setWeight(75);
        type0_label->setFont(font7);
        type0_label->setMouseTracking(false);
        type0_label->setStyleSheet(QStringLiteral(""));
        type0_label->setAlignment(Qt::AlignCenter);
        frame_1 = new QFrame(centralWidget);
        frame_1->setObjectName(QStringLiteral("frame_1"));
        frame_1->setGeometry(QRect(230, 280, 121, 171));
        frame_1->setFrameShape(QFrame::StyledPanel);
        frame_1->setFrameShadow(QFrame::Raised);
        date1_label = new QLabel(frame_1);
        date1_label->setObjectName(QStringLiteral("date1_label"));
        date1_label->setGeometry(QRect(20, 10, 72, 50));
        date1_label->setFont(font5);
        date1_label->setAlignment(Qt::AlignCenter);
        type1_label = new QLabel(frame_1);
        type1_label->setObjectName(QStringLiteral("type1_label"));
        type1_label->setGeometry(QRect(20, 50, 78, 78));
        type1_label->setFont(font7);
        type1_label->setAlignment(Qt::AlignCenter);
        low1_label = new QLabel(frame_1);
        low1_label->setObjectName(QStringLiteral("low1_label"));
        low1_label->setGeometry(QRect(0, 110, 51, 31));
        low1_label->setFont(font6);
        low1_label->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(frame_1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 120, 16, 16));
        label_7->setFont(font6);
        label_7->setAlignment(Qt::AlignCenter);
        high1_label = new QLabel(frame_1);
        high1_label->setObjectName(QStringLiteral("high1_label"));
        high1_label->setGeometry(QRect(60, 110, 51, 31));
        high1_label->setFont(font6);
        high1_label->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(370, 280, 121, 171));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        date2_label = new QLabel(frame_2);
        date2_label->setObjectName(QStringLiteral("date2_label"));
        date2_label->setGeometry(QRect(20, 10, 72, 50));
        date2_label->setFont(font5);
        date2_label->setAlignment(Qt::AlignCenter);
        type2_label = new QLabel(frame_2);
        type2_label->setObjectName(QStringLiteral("type2_label"));
        type2_label->setGeometry(QRect(20, 50, 78, 78));
        type2_label->setFont(font7);
        type2_label->setAlignment(Qt::AlignCenter);
        low2_label = new QLabel(frame_2);
        low2_label->setObjectName(QStringLiteral("low2_label"));
        low2_label->setGeometry(QRect(0, 110, 51, 31));
        low2_label->setFont(font6);
        low2_label->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 120, 16, 16));
        label_11->setFont(font6);
        label_11->setAlignment(Qt::AlignCenter);
        high2_label = new QLabel(frame_2);
        high2_label->setObjectName(QStringLiteral("high2_label"));
        high2_label->setGeometry(QRect(60, 110, 51, 31));
        high2_label->setFont(font6);
        high2_label->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(510, 280, 121, 171));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        date3_label = new QLabel(frame_3);
        date3_label->setObjectName(QStringLiteral("date3_label"));
        date3_label->setGeometry(QRect(20, 10, 72, 50));
        date3_label->setFont(font5);
        date3_label->setAlignment(Qt::AlignCenter);
        type3_label = new QLabel(frame_3);
        type3_label->setObjectName(QStringLiteral("type3_label"));
        type3_label->setGeometry(QRect(20, 50, 78, 78));
        type3_label->setFont(font7);
        type3_label->setAlignment(Qt::AlignCenter);
        low3_label = new QLabel(frame_3);
        low3_label->setObjectName(QStringLiteral("low3_label"));
        low3_label->setGeometry(QRect(0, 110, 51, 31));
        low3_label->setFont(font6);
        low3_label->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(50, 120, 16, 16));
        label_15->setFont(font6);
        label_15->setAlignment(Qt::AlignCenter);
        high3_label = new QLabel(frame_3);
        high3_label->setObjectName(QStringLiteral("high3_label"));
        high3_label->setGeometry(QRect(60, 110, 51, 31));
        high3_label->setFont(font6);
        high3_label->setAlignment(Qt::AlignCenter);
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(650, 280, 121, 171));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        date4_label = new QLabel(frame_4);
        date4_label->setObjectName(QStringLiteral("date4_label"));
        date4_label->setGeometry(QRect(20, 10, 72, 50));
        date4_label->setFont(font5);
        date4_label->setAlignment(Qt::AlignCenter);
        type4_label = new QLabel(frame_4);
        type4_label->setObjectName(QStringLiteral("type4_label"));
        type4_label->setGeometry(QRect(20, 50, 78, 78));
        type4_label->setFont(font7);
        type4_label->setAlignment(Qt::AlignCenter);
        low4_label = new QLabel(frame_4);
        low4_label->setObjectName(QStringLiteral("low4_label"));
        low4_label->setGeometry(QRect(0, 110, 51, 31));
        low4_label->setFont(font6);
        low4_label->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(frame_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(50, 120, 16, 16));
        label_19->setFont(font6);
        label_19->setAlignment(Qt::AlignCenter);
        high4_label = new QLabel(frame_4);
        high4_label->setObjectName(QStringLiteral("high4_label"));
        high4_label->setGeometry(QRect(60, 110, 51, 31));
        high4_label->setFont(font6);
        high4_label->setAlignment(Qt::AlignCenter);
        time_label = new QLabel(centralWidget);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setGeometry(QRect(260, 80, 171, 131));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font8.setPointSize(28);
        font8.setBold(true);
        font8.setWeight(75);
        time_label->setFont(font8);
        time_label->setAlignment(Qt::AlignCenter);
        ganmao_textBrowser = new QTextBrowser(centralWidget);
        ganmao_textBrowser->setObjectName(QStringLiteral("ganmao_textBrowser"));
        ganmao_textBrowser->setGeometry(QRect(520, 90, 256, 191));
        QFont font9;
        font9.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font9.setPointSize(14);
        ganmao_textBrowser->setFont(font9);
        ganmao_textBrowser->setStyleSheet(QLatin1String("border-top:0px solid #e8f3f9;\n"
"background:  transparent;"));
        city_lineEdit = new QLineEdit(centralWidget);
        city_lineEdit->setObjectName(QStringLiteral("city_lineEdit"));
        city_lineEdit->setGeometry(QRect(20, 10, 141, 31));
        city_lineEdit->setFont(font5);
        city_lineEdit->setStyleSheet(QLatin1String("border-top:0px solid #e8f3f9;\n"
"color: rgb(255, 255, 255);\n"
"background:  transparent;"));
        city_label_2 = new QLabel(centralWidget);
        city_label_2->setObjectName(QStringLiteral("city_label_2"));
        city_label_2->setGeometry(QRect(20, 10, 101, 30));
        WeatherForecast->setCentralWidget(centralWidget);
        city_lineEdit->raise();
        pushButton->raise();
        city_label->raise();
        wendu_label->raise();
        date_label->raise();
        ganmaotips_label->raise();
        fengxiang_label->raise();
        fengxiangtips_label->raise();
        fengli_label->raise();
        fenglitips_label->raise();
        frame_0->raise();
        frame_1->raise();
        frame_2->raise();
        frame_3->raise();
        frame_4->raise();
        time_label->raise();
        ganmao_textBrowser->raise();
        city_label_2->raise();

        retranslateUi(WeatherForecast);

        QMetaObject::connectSlotsByName(WeatherForecast);
    } // setupUi

    void retranslateUi(QMainWindow *WeatherForecast)
    {
        WeatherForecast->setWindowTitle(QApplication::translate("WeatherForecast", "\345\244\251\346\260\224\351\242\204\346\212\245", 0));
        pushButton->setText(QString());
        city_label->setText(QApplication::translate("WeatherForecast", "\345\237\216\345\270\202", 0));
        wendu_label->setText(QApplication::translate("WeatherForecast", "\346\270\251\345\272\246", 0));
        date_label->setText(QApplication::translate("WeatherForecast", "\346\227\245\346\234\237", 0));
        ganmaotips_label->setText(QApplication::translate("WeatherForecast", "\346\204\237\n"
"\345\206\222\n"
"\346\214\207\n"
"\346\225\260", 0));
        fengxiang_label->setText(QApplication::translate("WeatherForecast", "TextLabel", 0));
        fengxiangtips_label->setText(QApplication::translate("WeatherForecast", "\351\243\216\345\220\221", 0));
        fengli_label->setText(QApplication::translate("WeatherForecast", "TextLabel", 0));
        fenglitips_label->setText(QApplication::translate("WeatherForecast", "\351\243\216\345\212\233", 0));
        date0_label->setText(QApplication::translate("WeatherForecast", "\346\227\245\346\234\237", 0));
        low0_label->setText(QApplication::translate("WeatherForecast", "\344\275\216\346\270\251", 0));
        label_3->setText(QApplication::translate("WeatherForecast", "~", 0));
        high0_label->setText(QApplication::translate("WeatherForecast", "\351\253\230\346\270\251", 0));
        type0_label->setText(QApplication::translate("WeatherForecast", "\345\244\251\346\260\224", 0));
        date1_label->setText(QApplication::translate("WeatherForecast", "\346\227\245\346\234\237", 0));
        type1_label->setText(QApplication::translate("WeatherForecast", "\345\244\251\346\260\224", 0));
        low1_label->setText(QApplication::translate("WeatherForecast", "\344\275\216\346\270\251", 0));
        label_7->setText(QApplication::translate("WeatherForecast", "~", 0));
        high1_label->setText(QApplication::translate("WeatherForecast", "\351\253\230\346\270\251", 0));
        date2_label->setText(QApplication::translate("WeatherForecast", "\346\227\245\346\234\237", 0));
        type2_label->setText(QApplication::translate("WeatherForecast", "\345\244\251\346\260\224", 0));
        low2_label->setText(QApplication::translate("WeatherForecast", "\344\275\216\346\270\251", 0));
        label_11->setText(QApplication::translate("WeatherForecast", "~", 0));
        high2_label->setText(QApplication::translate("WeatherForecast", "\351\253\230\346\270\251", 0));
        date3_label->setText(QApplication::translate("WeatherForecast", "\346\227\245\346\234\237", 0));
        type3_label->setText(QApplication::translate("WeatherForecast", "\345\244\251\346\260\224", 0));
        low3_label->setText(QApplication::translate("WeatherForecast", "\344\275\216\346\270\251", 0));
        label_15->setText(QApplication::translate("WeatherForecast", "~", 0));
        high3_label->setText(QApplication::translate("WeatherForecast", "\351\253\230\346\270\251", 0));
        date4_label->setText(QApplication::translate("WeatherForecast", "\346\227\245\346\234\237", 0));
        type4_label->setText(QApplication::translate("WeatherForecast", "\345\244\251\346\260\224", 0));
        low4_label->setText(QApplication::translate("WeatherForecast", "\344\275\216\346\270\251", 0));
        label_19->setText(QApplication::translate("WeatherForecast", "~", 0));
        high4_label->setText(QApplication::translate("WeatherForecast", "\351\253\230\346\270\251", 0));
        time_label->setText(QApplication::translate("WeatherForecast", "\346\227\266\351\227\264", 0));
        ganmao_textBrowser->setHtml(QApplication::translate("WeatherForecast", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\346\226\260\345\256\213\344\275\223'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                                                 TextLabel</p></body></html>", 0));
        city_lineEdit->setPlaceholderText(QApplication::translate("WeatherForecast", "\345\237\216\345\270\202", 0));
        city_label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WeatherForecast: public Ui_WeatherForecast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHERFORECAST_H
