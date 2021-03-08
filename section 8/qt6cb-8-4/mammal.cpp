#include "mammal.h"

Mammal::Mammal(QObject *parent) : Animal(parent)
{
    qInfo() << this << " constructed";
}
