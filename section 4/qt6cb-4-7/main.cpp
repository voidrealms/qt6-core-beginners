/*
  What
  Arithmetic Operators

  Why
  We perform math

  How
  See below

  https://www.w3schools.com/cpp/cpp_operators.asp#arithmetic
 */


#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age; //no assignment
    qInfo() << age;

    age = 21; //assign
    qInfo() << age;

    age++; //increment
    qInfo() << age;

    age--; //decrement
    qInfo() << age;

    int older = age * 5; //assignment + multiply
    qInfo() << older;

    int younger = older / 3; //assignment + divide
    qInfo() << younger;



    return a.exec();
}
