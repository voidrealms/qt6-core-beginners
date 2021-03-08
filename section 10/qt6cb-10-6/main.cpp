/*
    What
    QObject parent child relationships

    Why
    We want Qt to manage it for us

    How
    See below
*/


#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test *parent = new Test(&a); //Creating
    parent->dog = new Animal(parent);
    delete parent; //Deleting

    return a.exec();
    //a decontructed!
}
