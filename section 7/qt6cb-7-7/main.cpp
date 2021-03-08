/*
    What
    Functions in structs

    Why
    Some people just want to watch the world burn
    C++ can do it all, but some things are best left alone

    How
    See below, but understand that classes are MUCH better to use
*/


#include <QCoreApplication>
#include <QDebug>

struct laptop {
    int weight;

    double asKilograms() {
        return weight * 0.453592;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    laptop notebook;
    notebook.weight = 5;

    qInfo() << "Pounds" << notebook.weight;
    qInfo() << "Kilograms" << notebook.asKilograms();


    return a.exec();
}
