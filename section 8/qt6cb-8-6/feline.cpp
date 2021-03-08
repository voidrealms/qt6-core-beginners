#include "feline.h"

Feline::Feline(QObject *parent) : QObject(parent)
{
    qInfo() << this << "Constructed";
}

void Feline::speak()
{
    qInfo() << this << "meow";
}
