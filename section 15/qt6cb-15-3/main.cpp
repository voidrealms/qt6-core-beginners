/*
    What
    Qt date time classes

    Why
    Makes dates and times easy

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QTime>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDate today = QDate::currentDate();
    qInfo() << today;
    qInfo() << today.addDays(1);
    qInfo() << today.addYears(20);

    //Different than Qt 5
    //qInfo() << today.toString(Qt::DateFormat::SystemLocaleDate);

    qInfo() << "ISODate" << today.toString(Qt::DateFormat::ISODate);
    qInfo() << "RFC2822Date" << today.toString(Qt::DateFormat::RFC2822Date);
    qInfo() << "TextDate" << today.toString(Qt::DateFormat::TextDate);

    QTime now = QTime::currentTime();
    qInfo() << "ISODate" << now.toString(Qt::DateFormat::ISODate);
    qInfo() << "RFC2822Date" << now.toString(Qt::DateFormat::RFC2822Date);
    qInfo() << "TextDate" << now.toString(Qt::DateFormat::TextDate);

    QDateTime current = QDateTime::currentDateTime();

    qInfo() << current;
    QDateTime expire = current.addDays(45);
    qInfo() << "Expire on" << expire;


    if(current > expire)
    {
        qInfo() << "Expired!";
    }
    else
    {
        qInfo() << "Not Expired!";
    }





    return a.exec();
}
