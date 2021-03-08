/*
    What
    Working with pointers

    Why
    Qt / C++ uses a LOT of pointers

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "calc.h"

Calc* getCalc()
{
    Calc *c = new Calc(); //Creating this on the heap
    return c;
}

int dogYears(int age, Calc *calc)
{
    return calc->dogYears(age);
}

int catYears(int age, Calc *calc)
{
    return calc->catYears(age);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Calc *c = getCalc();
    qInfo() << "Enter your age:";
    int age = 0;
    std::cin >> age;

    qInfo() << "Dog years:" << dogYears(age,c);
    qInfo() << "Cat years:" << catYears(age,c);


    delete c;

    return a.exec();
}
