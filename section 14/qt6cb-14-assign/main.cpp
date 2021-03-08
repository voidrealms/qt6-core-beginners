/*
    What
    Templates

    Why
    See how to work
    See how they fail

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>

template<class T>
T add(T a, T b)
{
    return  a + b;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << add<int>(1,2);
    qInfo() << add<QString>(QString("Hello"),"World");
    QObject obj;

    //qInfo() << add<QObject*>(&obj,&obj);
    return a.exec();
}
