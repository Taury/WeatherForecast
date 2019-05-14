#ifndef DATABASE_H
#define DATABASE_H

#include <QWidget>
#include <QString>
#include <QFile>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

#include <QMap>

class Database : public QWidget
{
    Q_OBJECT
public:
    explicit Database(QWidget *parent = 0);

private:
    QMap<QString, QString> citykey;
    QMap<QString, QString> pycn;
};

#endif // DATABASE_H
