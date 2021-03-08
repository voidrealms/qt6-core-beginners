/*
    What
    QDebug vs cout

    Why
    Qt provides a more organized way to output messages

    How
    May want to organize the messages
    Can capture the messages (covered in the advanced course)
    https://doc.qt.io/qt-5/qtglobal.html#qInstallMessageHandler
*/

#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Enter your age:";
    cin >> age;

    qInfo() << "You are" << age << "years old";

    qInfo() << "Information";
    qDebug() << "Debug";
    qWarning() << "Warning";
    qCritical() << "Critical";
    qFatal("Test Crash !!!!");

    return a.exec();
}
