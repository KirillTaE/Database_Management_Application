#pragma once
#include "vector.hpp"
#include <qstring.h>

class pASSport
{
public:
    QString name;       // имя и фамилия
    QString sex;       // пол
    QString type;        // тип
    QString codeofstate;        // код страны
    QString nomer;        // номер
    QString country;       // страна
    QString dateofbirth;          // дата рождения
    QString dateofissue;     // дата выдачи
    QString dateofexpiry;     // дата окончания

};

class DataBase: public container::Vector<pASSport>
{
public:

    void loadFromFile(const QString& path);
    void saveToFile(const QString& path);
    void mergeFromFile(const QString& path);

private:
};
