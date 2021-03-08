/*
    What
    Data types

    Why
    We need to tell C++ what type of thing we are working with

    How
    define the type

    https://www.w3schools.com/cpp/cpp_data_types.asp
    https://www.geeksforgeeks.org/c-data-types/

*/

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 44;
    double height = 6.02;

    qInfo() << "Age:" << age;
    qInfo() << "Height:" << height;

    age = 44.90;
    qInfo() << "Age:" << age;

    signed int dogs = -1;
    qInfo() << "Dogs:" << dogs;
    dogs = 15;
    qInfo() << "Dogs:" << dogs;

    unsigned int cats = -1;
    qInfo() << "Cats:" << cats;
    cats = 15;
    qInfo() << "Cats:" << cats;

    qInfo() << sizeof(dogs);
    qInfo() << sizeof(cats);
    qInfo() << sizeof(height);







    return a.exec();
}
