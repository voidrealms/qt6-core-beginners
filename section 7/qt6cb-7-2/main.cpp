/*
    What
    Intro to functions

    Why
    Give a basic example of functions

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>

void test()
{
    qInfo() << "Hello from test";
}


void test2()
{
    qInfo() << "Hello from test2";
    test();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //test();
    test2();

    return a.exec();
}



