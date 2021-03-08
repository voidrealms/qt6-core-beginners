/*
    What
    Static functions in classes

    Why
    We want to put a function in a class, but dont want to create a class
    WHAT MADDNESS IS THIS?!?!??!?

    How
    See below
*/


#include <QCoreApplication>
#include <QDebug>
#include "test.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    Test t;
//    t.doStuff();
//    t.doOtherStuff();

    Test::doOtherStuff();

    return a.exec();
}
