#include "canine.h"

Canine::Canine(QObject *parent) : Mammal(parent)
{
    qInfo() << this << " constructed";
}
