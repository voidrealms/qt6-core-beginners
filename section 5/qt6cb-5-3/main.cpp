/*
    What
    Standard error

    Why
    C++ standard way of outputting an error

    How
    Use cerr
*/


#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //C++ standard out
    cout << "Standard out" << endl;

    //C++ standard err
    cerr << "Standard error" <<  endl;


    return a.exec();
}
