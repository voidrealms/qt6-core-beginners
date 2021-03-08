/*
    What
    If

    Why
    Basic flow contol

    How
    IF keyword
*/

#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Enter your age";
    cin >> age;

    if(age == 0) qFatal("Not a valid age!"); // TRUE or FALSE

    qInfo() << "You entered:" << age;

    if(age < 18) // TRUE runs the code!
    {
        qInfo() << "You are NOT an adult!";
        qInfo() << "Come back when you are older!!!";
    }
    //Here regardless!

    if(age < 21 && age >= 18) qInfo() << "You are not REALLY an adult yet!";

    if(age >= 21) qInfo() <<  "You are an adult";

    if(age > 120) qCritical() <<  "HOW can you be that old!!!";

    qInfo() << "Done";

    return a.exec();
}
