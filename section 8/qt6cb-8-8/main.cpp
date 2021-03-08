/*
    What
    Age calulator

    Why
    Simple example practicing what we have learned

    How
    See class
*/

#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"

void print(AgeCalc &calc)
{
    qInfo() << calc.name() << "Human Years:" << calc.humanYears();
    qInfo() << calc.name() << "Dog Years:" << calc.dogYears();
    qInfo() << calc.name() << "Cat Years:" << calc.catYears();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCalc bryan;
    AgeCalc tammy;

    bryan.setName("Bryan");
    bryan.setAge(46);
    tammy.setName("Tammy");
    tammy.setAge(27);

    print(bryan);
    print(tammy);

    return a.exec();
}
