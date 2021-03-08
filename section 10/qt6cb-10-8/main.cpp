/*
    What
    Exploring Q_DISABLE_COPY

    Why
    We can and should look at Qts source

How

https://code.qt.io/cgit/qt/qtbase.git/tree/src/corelib/kernel/qobject.h
line 92
Q_DISABLE_COPY(QObjectData)

https://code.qt.io/cgit/qt/qtbase.git/tree/src/corelib/global/qglobal.h

LINE 425
   Some classes do not permit copies to be made of an object. These
   classes contains a private copy constructor and assignment
   operator to disable copying (the compiler gives an error message).

#define Q_DISABLE_COPY(Class) \
    Class(const Class &) = delete;\
    Class &operator=(const Class &) = delete;

#define Q_DISABLE_MOVE(Class) \
    Class(Class &&) = delete; \
    Class &operator=(Class &&) = delete;

#define Q_DISABLE_COPY_MOVE(Class) \
    Q_DISABLE_COPY(Class) \
    Q_DISABLE_MOVE(Class)

*/
#include <QCoreApplication>

QObject getObject()
{
    QObject o;
    return o;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
