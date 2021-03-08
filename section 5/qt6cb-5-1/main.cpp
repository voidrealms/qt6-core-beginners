/*
    What
    cout

    Why
    C++ normal means of outputting to the console

    How
    Use the STD namespace and cout
    Main point is you can mix Qt and C++ STD
*/


#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //C++ way
    cout << "Hello" << endl;

    //Qt way
    qInfo() << "Hello";

    int age = 44;
    cout << age;
    cout << endl;
    cout << flush;


    return a.exec();
}
