#include "destination.h"

Destination::Destination(QObject *parent) : QObject(parent)
{

}

void Destination::mySlot(QString message)
{
    qInfo() << message;
}
