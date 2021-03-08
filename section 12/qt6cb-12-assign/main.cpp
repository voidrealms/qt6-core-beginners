/*
    What
    QObject cast

    Why
    Learn how to get the sender of a signal

    How
    See below
    https://doc.qt.io/qt-6/qobject.html#sender
*/

#include <QCoreApplication>
#include <QDebug>
#include "producer.h"
#include "consumer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Producer producer;
    Consumer consumer;

    QObject::connect(&producer,&Producer::test,&consumer,&Consumer::testing);

    producer.setObjectName("BabyShark");

    producer.do_test();


    return a.exec();
}
