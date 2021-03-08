/*
    What
    QVector

    Why
    QVector is an alias for QList.
    In Qt 5 this used to be a different class
    Now QVector and QList are the same class

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = "Hello world how are you";
    QVector<QString> list = data.split(" ");

    foreach(QString word, list) {
        qInfo() << word;
    }

    QVector<int> ages({44,56,21,13});
    foreach(int age, ages) {
        qInfo() << age;
    }

    return a.exec();
}
