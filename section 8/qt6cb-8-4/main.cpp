/*
    What
    Class inheritance

    Why
    We want to inherit aspects of a class

    How
    See below
*/


#include <QCoreApplication>
#include "feline.h"
#include "canine.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Canine dog;
    Feline cat;


    return a.exec();
}
