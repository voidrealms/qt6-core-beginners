/*
    What
    Global scope

    Why
    Some people just want to watch the world burn

    How
    See below
*/


#include <QCoreApplication>
#include <QDebug>

QString name = "Bryan";

void testing()
{
     qInfo() << name;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    name = "Bob";
    qInfo() << name;

    bool test = true;
    if(test)
    {
        QString name = "Tammy";
        qInfo() << name;
        qInfo() << ::name;
    }

     qInfo() << name;
     testing();

    return a.exec();
}
