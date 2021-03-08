/*
  What
  Assignment operators

  Why
  We want to assign values

  How
  See below
  https://www.w3schools.com/cpp/cpp_operators_assignment.asp

 */

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int value = 15; //assign
    qInfo() << value;

    value += 10; //add 10
    qInfo() << value;

    value -= 30; //subtract 30
    qInfo() << value;

    value *= 20; //multiply 10
    qInfo() << value;

    value /= 25; //divide 25
    qInfo() << value;


    return a.exec();
}
