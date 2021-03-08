/*
    What
    Errors vs exception

    Why
    Bad things happen, we need to know how to handle them

    How
    An Error
    "indicates serious problems that a reasonable
    application should not try to catch."  - bad things

    An Exception
    "indicates conditions that a reasonable
    application might want to catch." - most things

    Warning people use these interchangeably

*/

#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    do {

        int max = 44;
        int div = 0;

        qInfo() << "Enter a number to divide by (Or Zero for an issue!)";
        cin >> div;

        int answer = max / div; //Possible Exception
        qInfo() << answer;

    } while (true);




    return a.exec();
}
