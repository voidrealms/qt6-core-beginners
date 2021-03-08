/*
    What
    Use a QObject without copying it

    Why
    QObjects can not be copied!

    How
    See below
*/

#include <QCoreApplication>
#include "cat.h"

void do_fail(Cat cat)
{
    cat.meow();
}

void do_ptr(Cat *cat)
{
    cat->meow();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat kitty;
    //do_fail(kitty);

    do_ptr(&kitty);

    return a.exec();
}
