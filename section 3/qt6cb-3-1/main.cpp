/*
    What
    Hello World

    Why
    This is the starting point in just about every language.
    Teaches you what a basic application looks like.

    How
    Main function
    Includes
    QCoreAppliction and exec
    CMake
    CMake Modules
*/

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Hello World";

    return a.exec();
}
