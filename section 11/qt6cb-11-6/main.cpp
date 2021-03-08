/*
    What
    Qt Propery System

    Why
    Used in more advanced applications with QML

    How
    See below
*/

#include <QCoreApplication>
#include "test.h"
#include "watcher.h"

#include <QVariant>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test tester;
    Watcher destination;

    QObject::connect(&tester,&Test::messageChanged,&destination,&Watcher::messageChanged);

    tester.setProperty("message",QVariant("Hello World"));
    tester.setMessage("testing");


    return a.exec();
}
