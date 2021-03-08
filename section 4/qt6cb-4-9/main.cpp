/*
  What
  Comparison operators

  Why
  We want to compair things

  How
  See below
  Compairson operators
  https://www.w3schools.com/cpp/cpp_operators_comparison.asp

 */

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x = 10;
    int y = 15;

    qInfo() << "x == y" << (x == y);
    qInfo() << "x != y" << (x != y);
    qInfo() << "x <= y" << (x <= y);
    qInfo() << "x >= y" << (x >= y);
    qInfo() << "x < y" << (x < y);
    qInfo() << "x > y" << (x > y);

    return a.exec();
}
