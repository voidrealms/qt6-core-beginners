/*
    What
    If else / else if

    Why
    Basic flow contol, basically saying do this else to that

    How
    IF ELSE keywords
*/

#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Please enter your age:";
    cin >> age;

    if(age > 17) {
        //True
        qInfo() << "You are over 17 years old";
    } else if(age < 12) {
        //False True
        qInfo() << "You are not even a teen yet!";
    } else {
        //False
        qInfo() << "You are not over 17 years old";
    }

    return a.exec();
}
