/*
    What
    Pointer memory management

    Why
    Pointers are fast but we have to manage them

    How
    See below
*/


#include <QCoreApplication>
#include <QDebug>


void display(QString *value)
{
    qInfo() << "The pointer" << value;
    qInfo() << "The address" << &value;
    qInfo() << "The data" << *value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan"; //Stack - C++ manages this
    QString *description = new QString("Hello pointer"); //Heap - We manages this

    //qInfo() << description;

    display(description);

    delete description; //No longer exists
    display(description);

    return a.exec();
}
