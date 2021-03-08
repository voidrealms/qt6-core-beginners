#include "dog.h"

Dog::Dog(QObject *parent) : QObject(parent)
{

}

void Dog::treats()
{
    qInfo() << "BARK!";
}
