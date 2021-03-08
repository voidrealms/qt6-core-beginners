/*
    What
    interfaces

    Why
    We want to define a contract between objects

    How
    See below
*/


#include <QCoreApplication>
#include <QDebug>
#include "applicance.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Applicance machine3000;

    qInfo() << "Cook:" << machine3000.cook();
    qInfo() << "Freeze:" << machine3000.freeze();
    qInfo() << "Grill:" << machine3000.grill();

    return a.exec();
}
