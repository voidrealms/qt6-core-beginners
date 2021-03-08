/*
    What
    Scope in classes

    Why
    Classes have their own scope
    Classes do not share scope (unless its a static variable)

    How
    See below
*/


#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan"; //QString is NOT a QObject
    qInfo() << "My name is at: " << &name << " = " << name;

//    Animal cat(&a,"Fluffly");
//    Animal dog(&a,"Fido");
    Animal person(&a,name);

    person.sayHello("Hola");

//    cat.name = "My Cat";
//    dog.name = "My Dog";

//    qInfo() << cat.name;
//    qInfo() << dog.name;




    return a.exec();
}
