/*
    What
    Arrays

    Why
    Multiple values inside one variable

    How
    Array example below
    Pros - easy
    Cons - No range checking
*/

#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Zero based index array
    int ages[4] = {23,7,34,1000};
    ages[2] = 99;
    qInfo() << ages[0];
    qInfo() << ages[1];
    qInfo() << ages[2];
    qInfo() << ages[3];
    qInfo() << ages;

    array<int,5> cars;
    cars[0] = 5;
    cars[1] = 67;
    cars[2] = 99;
    cars[3] = 238;
    cars[4] = 56;
    qInfo() << cars[0];
    qInfo() << cars[1];
    qInfo() << cars[2];
    qInfo() << cars[3];
    qInfo() << cars[4];
    //qInfo() << cars;

    qInfo() << "Size:" << cars.size();
    qInfo() << "SizeOf:" << sizeof (cars);
    qInfo() << "Last:" << cars[cars.size() -1];

    return a.exec();
}
