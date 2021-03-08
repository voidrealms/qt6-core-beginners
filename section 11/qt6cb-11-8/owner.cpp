#include "owner.h"

Owner::Owner(QObject *parent) : QObject(parent)
{

}

void Owner::giveSnacks()
{
    qInfo() << "Snacks are ready!";
    emit treats();
}
