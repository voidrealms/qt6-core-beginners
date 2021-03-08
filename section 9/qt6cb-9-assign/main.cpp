/*
  What
  Practice using scope

  Why
  Programs are full of scope

  How
  See below
 */


#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int addTen(int age)
{
    return age + 10;
}

void dogyears(int value)
{
    int age = value * 7;
    qInfo() << "Age in dog years: " << age;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Enter your age in years:";
    std::cin >> age;

    age = addTen(age);

    qInfo() << "Ten: " << age;
    dogyears(age);


    return a.exec();
}
