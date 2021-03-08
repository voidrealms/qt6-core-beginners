#include "pet.h"

int Pet::age() const
{
    return m_age;
}

void Pet::setAge(int age)
{
    m_age = age;
}

QString Pet::name() const
{
    return m_name;
}

void Pet::setName(const QString &name)
{
    m_name = name;
}

Pet::Pet(QObject *parent) : QObject(parent)
{

}
