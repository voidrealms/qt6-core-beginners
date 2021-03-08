/*
    What
    Explicit conversion

    Why
    We tell C++ what to do

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double value = 5.75;
    qInfo() << "Double: " << value;

    int age = value;
    qInfo() << "Age: " << age; //Implicit conversion should not be trusted

    age = (int)value; //We control this conversion
    qInfo() << "Age: " << age; //Explicit conversion should be trusted

    return a.exec();
}
