#include "database.h"
#include <QDebug>

Database::Database(QWidget *parent) : QWidget(parent)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("citykey.db");
    if(!db.open())
    {
        qDebug()<<"Open database failed!";
    }
    QString cmd = "select count(*) from sqlite_master where type='table' and name='cityid';";
    QSqlQuery query;
    query.exec(cmd);

    if(query.next())
    {
        int n = query.value(0).toInt();
        qDebug()<< "n = " << n << endl;
        if(n == 0)
        {
            cmd = "create table cityid(city text, id text,primary key(id))";
            query.exec(cmd);

            QFile file("citykeys.txt");
            if(!file.open(QIODevice::ReadOnly))
            {
                qDebug()<<"Open citykeys.txt failed!";
            }
    #if 0
        QTextStream out(&file);
        QString str;
        while(!out.atEnd())
        {
            QString text = out.read(1024);
            str.append(&text);
            while(1)
            {
                int m = str.indexOf(",");
                if(m < 0)
                {
                    break;
                }

                int n = str.indexOf(":");
                QString id = str.mid(1,n-2);
                qDebug()<<"id: "<<id;
                str.remove("\""+id+"\":");

                m = str.indexOf(",");
                QString city = str.mid(1, m-2);
                qDebug()<<"city: "<<city;
                str.remove("\""+city+"\",");

                cmd = QString("insert into cityid values('%1', '%2');").arg(city).arg(id);
                query.exec(cmd);
            }
        }


        int n = str.indexOf(":");
        QString id = str.mid(1,n-2);
        qDebug()<<"id: "<<id;
        str.remove("\""+id+"\":");
        str.remove("\"");

        QString city = str;
        qDebug()<<"city: "<<city;
        cmd = QString("insert into cityid values('%1', '%2');").arg(city).arg(id);
        query.exec(cmd);
    #endif

            QString msg = file.readAll();
            file.close();

            QStringList list = msg.split(",");

            for(int i=0; i<list.count(); i++)
            {
                QString tmpstr = list.at(i);
                tmpstr.remove("\"");

                QStringList tmplist = tmpstr.split(":");
                citykey[tmplist.at(1)] = tmplist.at(0);

                cmd = QString("insert into cityid values('%1', '%2');").arg(tmplist.at(1)).arg(tmplist.at(0));
                query.exec(cmd);
            }
        }
    }
}
