#include "lion.h"

Lion::Lion(QObject *parent) : Feline(parent)
{
    qInfo() << this << "Constructed";
}

void Lion::speak()
{
    qInfo() << this << "ROAR!!!";

    //calling the function from a base class
    Feline::speak();
}

