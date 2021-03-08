/*
    What
    Constants

    Why
    Sometimes we want to work with a value, but never change it

    How
    Use the const keyword, define the type, set a value

*/

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 44; //can change
    const int id = 215; //can not change

    //id = 12;
    qInfo() << "Id:" << id;

    return a.exec();
}
