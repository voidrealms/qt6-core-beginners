/*
    What
    Reinterpret cast

    Why
    Unlike static_cast, but like const_cast, the reinterpret_cast expression does not
    compile to any CPU instructions

    (except when converting between integers and pointers or on obscure
    architectures where pointer representation depends on its type).

    It is purely a compile-time directive which instructs the compiler
    to treat the expression as if it had the a new type.

    How
    See below
    Remember:
    The implicit cast is C++ doing it for us
    The explicit cast is us telling C++ what to do
    The static_cast operator performs a nonpolymorphic cast.
    The dynamic_cast operator ensures inheritence is good
    The reinterpret_cast operator types to convert it to a different type
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

    //Create a racecar
    RaceCar* player1 = new RaceCar(&a);

    //Cast the racecar to its base
    Car* obj = dynamic_cast<Car*>(player1);
    if(obj) testDrive(obj);

    //Cast it without changing it
    RaceCar* speedster  = static_cast<RaceCar*>(obj);
    if(speedster) race(speedster);

    //Reinterpret it as a different type
    int* pointer = reinterpret_cast<int*>(speedster);
    qInfo() << "Pointer" << pointer;
    qInfo() << "RaceCar" << speedster;

    RaceCar* mycar = reinterpret_cast<RaceCar*>(pointer);
    qInfo() << "My Cars color is" << mycar->color;
    race(mycar);

    Feline* cat = reinterpret_cast<Feline*>(player1);
    cat->meow();
    cat->hiss();


    return a.exec();
}
