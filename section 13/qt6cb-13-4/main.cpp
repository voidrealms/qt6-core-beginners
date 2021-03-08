/*
    What
    How Qt normaly deals with issues

    Why
    Exception safety
    https://en.wikipedia.org/wiki/Exception_safety

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDivision(int max) {

    int value;
    qInfo() << "Enter a number";
    cin >> value;

    if(value == 0)
    {
        qWarning() << "Can not be zero";
        return false;
    }

    if(value > 5)
    {
        qWarning() << "Should be less than 5";
        return false;
    }

    if(value == 1)
    {
        qWarning() << "Should be greater than 1";
        return false;
    }


    int result = max / value;
    qInfo() << "Result = " << result;

    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 44;
    do {
        // Do something here
    } while(doDivision(max));

    return a.exec();
}
