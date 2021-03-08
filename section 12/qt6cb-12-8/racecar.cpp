#include "racecar.h"

RaceCar::RaceCar(QObject *parent) : Car(parent)
{

}

void RaceCar::gofast()
{
    qInfo() << "zooooooom";
}
