/*
    What
    Function Flow control

    Why
    We want functions to perform tasks

    How
    Put flow control into a function
*/

#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int calc(int offset,int age)
{
    if(offset == 0) qFatal("Offset can not be zero!");

    if(age <= 0 || age > 120)
    {
        qFatal("Invalid Age");
    }

    return offset * age;
}

int catYears(int age)
{
    return calc(9,age);
}

int dogYears(int age)
{
    return calc(7,age);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Enter your age:";
    cin >> age;

    int cat = catYears(age);
    int dog = dogYears(age);

    qInfo() << "Dog:" << dog;
    qInfo() << "Cat:" << cat;

    return a.exec();
}
