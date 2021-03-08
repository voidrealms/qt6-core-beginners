/*
    What
    QList

    Why
    Templated container class

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = "Hello world how are you";
    QList<QString> list = data.split(" ");

    foreach(QString word, list)
    {
        qInfo() << word;
    }

    QList<int> age({44,56,21,13});
    age.append(99);
    age.remove(1);
    qInfo() << age;

    foreach(int word, age)
    {
        qInfo() << word;
    }

    return a.exec();
}
