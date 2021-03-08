/*
    What
    Timer example

    Why
    Qt is filled with signals and slots

    How
    See below
*/

#include <QCoreApplication>
#include "test.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test test;

    return a.exec();
}
