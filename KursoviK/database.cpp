#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include <QFile>

#include "DataBase.h"


void DataBase::loadFromFile(const QString& path)
{
    clear();

    QString val;
    QFile file;
    file.setFileName(path);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    val = file.readAll();
    file.close();

    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject sett2 = d.object();
    QJsonArray arr = sett2.value(QString("pASSport")).toArray();

    for (size_t i = 0; i < arr.size(); i++)
    {
        auto obj = arr[i].toObject();
        pASSport passport;

        passport.name =		 obj.value(u8"name").toString();
        passport.sex =	     obj.value(u8"sex").toString();
        passport.type =       obj.value(u8"type").toString();
        passport.codeofstate =  obj.value(u8"codeofstate").toString();
        passport.nomer =	 obj.value(u8"nomer").toString();
        passport.country =       obj.value(u8"country").toString();
        passport.dateofbirth = obj.value(u8"dateofbirth").toString();
        passport.dateofissue = obj.value(u8"dateofissue").toString();
        passport.dateofexpiry = obj.value(u8"dateofexpiry").toString();

        pushBack(passport);
    }
}

void DataBase::saveToFile(const QString& path)
{
    QJsonDocument json;
    QJsonArray arr;

    for (size_t i = 0; i < getSize(); i++)
    {
        QJsonObject obj;

        obj.insert("name", operator[](i).name);
        obj.insert("sex", operator[](i).sex);
        obj.insert("type", operator[](i).type);
        obj.insert("codeofstate", operator[](i).codeofstate);
        obj.insert("nomer", operator[](i).nomer);
        obj.insert("country", operator[](i).country);
        obj.insert("dateofbirth", operator[](i).dateofbirth);
        obj.insert("dateofissue", operator[](i).dateofissue);
        obj.insert("dateofexpiry", operator[](i).dateofexpiry);

        arr.push_back(obj);
    }
    QJsonObject obj;
    obj.insert("pASSport", arr);
    json.setObject(obj);


    QFile file;
    file.setFileName(path);
    file.open(QIODevice::WriteOnly | QIODevice::Text);


    file.write(json.toJson(QJsonDocument::Compact));


    file.close();
}


void DataBase::mergeFromFile(const QString& path)
{
    QString val;
    QFile file;
    file.setFileName(path);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    val = file.readAll();
    file.close();

    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject sett2 = d.object();
    QJsonArray arr = sett2.value(QString("pASSport")).toArray();

    for (size_t i = 0; i < arr.size(); i++)
    {
        auto obj = arr[i].toObject();
        pASSport passport;

        passport.name =		 obj.value(u8"name").toString();
        passport.sex =	     obj.value(u8"sex").toString();
        passport.type =       obj.value(u8"type").toString();
        passport.codeofstate =  obj.value(u8"codeofstate").toString();
        passport.nomer =	 obj.value(u8"nomer").toString();
        passport.country =       obj.value(u8"country").toString();
        passport.dateofbirth = obj.value(u8"dateofbirth").toString();
        passport.dateofissue = obj.value(u8"dateofissue").toString();
        passport.dateofexpiry = obj.value(u8"dateofexpiry").toString();

        pushBack(passport);
    }
}
