#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{
    qInfo() << this << "Constructed";
}

void Test::doStuff()
{
    qInfo() << this << "doStuff";
    Test::doOtherStuff();
}

void Test::doOtherStuff()
{
    //"this" does not exists
    //qInfo() << this << "doOtherStuff";
    //doStuff(); //No instance can not call the other function

    //We can still run code without an instance!
    qInfo() << "doOtherStuff";


}
