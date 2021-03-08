#include "animal.h"

Animal::Animal(QObject *parent) : QObject(parent)
{
    qInfo() << this << "Animal constructed";
}

Animal::~Animal()
{
    qInfo() << this << "Animal deconstructed";
}
