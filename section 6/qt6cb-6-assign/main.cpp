/*
    What
    Lazy husband simulator

    Why
    Show how flow control statments work

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 5;
    QString task = "Please take out the trash";

    for(int i = 1; i < 50; i++)
    {
        qInfo() << "Wife:" << task;
        qWarning() << "Wife: I have asked" << i << "times!";

        if(i >= max)
        {
            qInfo() << "Husband: Ok ok ok, im going...";
            break;
        }

        qInfo() << "Husband: I will after this show...";
    }

    qInfo() << "Done.";

    return a.exec();
}
