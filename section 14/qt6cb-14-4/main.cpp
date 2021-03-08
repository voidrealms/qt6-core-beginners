/*
    What
    Template issues

    Why
    Lets look at how templates can fail

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>

template<class T, class F>
T add(T valueT,F valueF)
{
    return valueT + valueF;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << add<int,double>(1,4.6);
    qInfo() << add(55,true);
    qInfo() << add(true,55);
    qInfo() << add("Bryan",55);

    return a.exec();
}
