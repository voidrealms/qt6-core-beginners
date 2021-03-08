/*
    What
    Make a simple program using functions
    Paint calculator

    Why
    Make complex applications easier

    How
    Simple example
*/


#include <QCoreApplication>
#include <iostream>
#include <QDebug>

int get_size()
{
    qInfo() << "Enter in feet:";
    int value;
    std::cin >> value;
    return value;
}

double calc_paint(int w, int h)
{
    double sqft = w * h;
    double paint = sqft / 325; //Google says 325 feet per gallon
    return paint;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Enter the ceiling height in feet:";
    int height = get_size();
    if(height <= 0) qFatal("Please read the manual");

    double paint = 0;

    do
    {
        qInfo() << "Add a wall by entering a number or 0 to stop:";
        int value = get_size();
        if(value <= 0) break;
        double g = calc_paint(value,height);
        paint += g;
    } while(true);

    qInfo() << "Total gallons needed:" << paint;

    return a.exec();
}
