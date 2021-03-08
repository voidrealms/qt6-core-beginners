/*

    What
    QObject Class

    Why
    We want to take a deep look at Qt's base class

    How
    Documentation!
    https://doc.qt.io/qt-6/qobject.html
    https://doc.qt.io/qt-6/metaobjects.html

 */


#include <QCoreApplication>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test t;


    return a.exec();
}
