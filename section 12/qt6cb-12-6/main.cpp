/*
    What
    Static cast

    Why
    The static_cast operator performs a nonpolymorphic cast.
    For example, it can be used to cast a base class pointer into a derived class pointer.

    How
    use the connect function
*/


#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

void testDrive(Car* obj)
{
    obj->drive();
    obj->stop();
}

void race(RaceCar* obj)
{
    obj->drive();
    obj->stop();
    obj->gofast();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car* car = new Car(&a);
    qInfo() << car;
    race((RaceCar*)car);

    RaceCar* racer = static_cast<RaceCar*>(car);
    qInfo() << racer;
    if(racer) race(racer);

//    Feline* catcar = static_cast<Feline*>(racer);
//    qInfo() << racer;
//    if(racer) race(racer);


    return a.exec();
}
