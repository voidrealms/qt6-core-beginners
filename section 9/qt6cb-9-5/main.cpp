/*
    What
    Function scope

    Why
    Functions have their own scope, but share with their parent scope
    Understanding Lexical scope

    How
    See below
*/


#include <QCoreApplication>
#include <QDebug>

void test(int number)
{
    //Scope
    number = 50;
    qInfo() << "2 - Number: " << &number << " = " << number;
}

int main(int argc, char *argv[])
{
    //Scope
    QCoreApplication a(argc, argv);

    int number = 75;
    qInfo() << "1 - Number: " << &number << " = " << number;
    test(number);

    bool ok = true;
    if(ok)
    {
        //Scope
        int number = 1000; //This will haunt you!!!
        qInfo() << "3 - Number: " << &number << " = " << number;
    }

    qInfo() << "4 - Number: " << &number << " = " << number;

    return a.exec();
}
