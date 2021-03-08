#include "animal.h"

Animal::Animal(QObject *parent) : QObject(parent)
{
    count++;
}

Animal::~Animal()
{
    count--;
}
