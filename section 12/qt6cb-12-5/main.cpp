/*
    What
    Dynamic cast

    Why
    Casting is complex, we want to make it easier

    The dynamic_cast operator ensures that if you convert a pointer
    to class A to a pointer to class B,
    the object of type A pointed to by the former belongs to an object
    of type B or a class derived from B as a base class subobject.

    How
    https://en.cppreference.com/w/cpp/language/dynamic_cast
*/

#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

//Dynamic cast

//dynamic_cast can be used only with pointers and references to objects.
//Its purpose is to ensure that the result of the type conversion is a valid complete object of the requested class.

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

    RaceCar* player1 = new RaceCar(&a);
    testDrive(player1); //Implicit conversion


    //Correct way
    Car* obj = dynamic_cast<Car*>(player1); //Explicitly convert
    if(obj) testDrive(obj);

    Feline* cat = new Feline(&a);
    Car* catcar = dynamic_cast<Car*>(cat);
    qInfo() << "CatCar" << catcar;
    if(catcar) testDrive(catcar);


    return a.exec();
}
