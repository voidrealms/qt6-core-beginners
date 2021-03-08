/*
    What
    QList!

    Why
    Arrays suck

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> ages;

    do
    {
        int age;
        qInfo() << "Enter an age";
        std::cin >> age;
        if(!age) break;
        ages.append(age);
    }while(true);

    qInfo() << "You entered...";
    foreach(int age, ages)
    {
        qInfo() << age;
    }
    qInfo() << "Finished";


    return a.exec();
}
