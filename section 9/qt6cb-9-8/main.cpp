/*
    What
    Static scope in classes

    Why
    We want all classes to use them same variable

    How
    See below
*/


#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int Animal::count = 0;
QString Animal::name = "";

void test()
{
    Animal cat;
    Animal dog;
    Animal fish;
    qInfo() << dog.count;

    cat.name = "Gamer";
    dog.name = "MuddPie";

    qInfo() << "Cat:" << cat.name;

    //Deconstruction here!
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test();
    qInfo() << Animal::count;

    return a.exec();
}
