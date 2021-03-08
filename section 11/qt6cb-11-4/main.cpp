/*
    What
    Connecting

    Why
    We want to connect a signal to a slot

    How
    Use the connect function
*/

#include <QCoreApplication>
#include "source.h"
#include "destination.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Source oSource;
    Destination oDestination;

    QObject::connect(&oSource,&Source::mySignal,&oDestination,&Destination::mySlot);

    oSource.test();
    oDestination.mySlot("HI!");

    return a.exec();
}
