/*
    What
    Templates QObject

    Why
    QObjects can NOT be copied
    Use pointers instead
    Note Qt template classes are not QObjects (QList for example)
    We cover those in detail in intermedate and advanced

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>

template<class T>
void display(T value) {
    qInfo() << value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    display<int>(4);
    display<double>(3.14);
    display<QString>(QString("Hello"));

    QObject obj;
    display<QObject*>(&obj);

    return a.exec();
}
