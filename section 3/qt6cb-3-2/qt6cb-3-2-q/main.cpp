/*
    What
    The build process

    Why
    Qt handles the build process a bit differently

    How
    Build the hello world app and look at the build process
    Do this for CMake and QMake
    Talk about the differences between CMake and QMake
*/


#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Hello world";

    return a.exec();
}
