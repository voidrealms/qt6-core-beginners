/*
    What
    Pointers vs copies

    Why
    Pointers are fast, and we get the actual object

    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>

void test(QString value) //Stack - COPY
{
    qInfo() << &value << "Size:" << value.length();
} //Destrory

void testPtr(QString *value) //Stack - Pointing
{
    qInfo() << "P" << value << "Size:" << value->length();
    qInfo() << "A" << &value << "Size:" << value->length();
} //Destrory

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan"; //Stack
    qInfo() << &name << "Size:" << name.length();

    test(name);
    testPtr(&name);

    return a.exec();
}
