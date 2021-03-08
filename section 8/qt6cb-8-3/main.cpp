/*
    What
    Contructors and descontructors

    Why
    Object lifecycles

    How
    See below
*/

#include <QCoreApplication>
#include "laptop.h"

void test(Laptop &machine)
{
    machine.test();
}

void makeLaptops()
{
    //The stack
    Laptop mine(nullptr,"my laptop");
    Laptop yours(nullptr,"your laptop");

    mine.weight = 3;
    yours.weight = 5;

    test(mine);
    test(yours);

    //Will be deleted from the stack automatically
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    makeLaptops();

    return a.exec();
}
