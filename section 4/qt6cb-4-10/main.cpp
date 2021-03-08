/*
  What
  Logical Operators

  Why
  We want to make logical comparisons

  How
  See below

  https://www.w3schools.com/cpp/cpp_operators_logical.asp
 */


#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x = 10;

    qInfo() << "x between 5 and 20" << (x > 5 && x < 20);
    qInfo() << "x greater than 20, greater than 8" << (x > 20 || x > 8);
    qInfo() << "x not equal 10" << !(x != 10);
    qInfo() << "Complex" << ((x > 11 && x < 20) || x == 10);

    return a.exec();
}
