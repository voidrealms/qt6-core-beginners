/*
    What
    cin

    Why
    C++ normal means of inputting to the console

    How
    Use the STD namespace and cin
    Main point is you can mix Qt and C++ STD
*/

#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Please enter an age:";
    cin >> age;
    qInfo() << "You entered:" << age;

    return a.exec();
}
