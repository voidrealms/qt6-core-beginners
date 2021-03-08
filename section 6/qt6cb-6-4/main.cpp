/*
    What
    Ternary

    Why
    Combine IF and else into one line

    How
    Use the Ternary syntax
*/


#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Please enter your age:";
    cin >> age;

    age > 0 && age <= 100 ? qInfo("You entered a valid age") : qFatal("You did not enter a valid age");

    return a.exec();
}
