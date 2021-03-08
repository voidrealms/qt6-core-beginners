/*
    What
    Templates and classes

    Why
    We can make classes templated

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test<int> intCalc;
    qInfo() << intCalc.add(1,4);

    Test<double> dCalc;
    qInfo() << dCalc.add(6.09,3.04);

    Test<QString> sCalc;
    qInfo() << sCalc.add(QString("Hello"),QString("World"));


    return a.exec();
}
