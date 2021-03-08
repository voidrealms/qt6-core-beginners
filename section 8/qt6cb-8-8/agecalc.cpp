#include "agecalc.h"

AgeCalc::AgeCalc(QObject *parent) : QObject(parent)
{

}

int AgeCalc::age() const
{
    return m_age;
}

void AgeCalc::setAge(int age)
{
    //Logic here age > 0
    m_age = age;
}

QString AgeCalc::name() const
{
    return m_name;
}

void AgeCalc::setName(const QString &name)
{
    m_name = name;
}

int AgeCalc::dogYears() const
{
    return m_age * 7;
}

int AgeCalc::catYears() const
{
    return m_age * 9;
}

int AgeCalc::humanYears() const
{
    return m_age;
}
