/*
    What
    Implicit conversion

    Why
    C++ will try to guess what we are doing
    Usually it does this poorly

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double value = 5.75;
    qInfo() << "Double:" << value;

    int age = value;
    qInfo() << "Int:" << age; //implicit conversion should not be trusted


    return a.exec();
}
