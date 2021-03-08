#include "feline.h"

Feline::Feline(QObject *parent) : QObject(parent)
{

}

void Feline::meow()
{
    qInfo() << "meow";
}

void Feline::hiss()
{
    qInfo() << "hiss";
}
