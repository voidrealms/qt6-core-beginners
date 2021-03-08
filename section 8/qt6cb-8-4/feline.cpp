#include "feline.h"

Feline::Feline(QObject *parent) : Mammal(parent)
{
    qInfo() << this << " constructed";
}
