/*
    What
    Throwing

    Why
    We want to tell the code a Exception occured

    How
    Use the throw keyword
*/

#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDiv(int max)
{
    int value;
    qInfo() << "Enter a number";
    cin >> value;

    if(value == 1) return false;

    //Taking control
    if(value == 0)
    {
        qInfo() << "ZERO - goodbye world";
        //throw "Can not divide by zero";
        throw QString("NOPE");
    }

    int result = max / value;
    qInfo() << "Result = " << result;

    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 44;
    do
    {
        //Loop
    }while (doDiv(max));

    qInfo() << "Finished";

    return a.exec();
}
