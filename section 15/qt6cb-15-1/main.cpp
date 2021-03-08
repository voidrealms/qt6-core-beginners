/*
    What
    QObject

    Why
    Base class for everything Qt (non-template)
    We have talked about this a LOT

    How
    See below
    review Signals, Slots, MOC, macros
*/

#include <QCoreApplication>
#include <QDebug>
#include "dog.h"
#include "cat.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat cat;
    cat.setObjectName("Ghost");

    Dog dog;
    dog.setObjectName("Fido");

    //dog.chase(); //Zero for sender as nothing was emitted

    QObject::connect(&dog,&Dog::bark,&cat,&Cat::scared);
    QObject::connect(&cat,&Cat::run,&dog,&Dog::chase);

    emit dog.bark();

    return a.exec();
}
