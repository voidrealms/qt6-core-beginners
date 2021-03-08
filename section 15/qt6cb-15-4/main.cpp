/*
    What
    QString

    Why
    Qts universal string class

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>

void test(QString name) //COPY
{
    qInfo() << name;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan Cairns";
    qInfo() << name;
    qInfo() << name.mid(1,3);
    qInfo() << name.insert(0,"Mr. ");
    qInfo() << name.split(" ");

    int index = name.indexOf(" ");
    if(index > -1)
    {
        qInfo() << name.remove(0, index).trimmed();
    }

    QString title = "Teacher";
    QString full = name.trimmed() + " " + title;
    qInfo() << full;

    qInfo() << full.toUtf8();

    test(full);

    return a.exec();
}
