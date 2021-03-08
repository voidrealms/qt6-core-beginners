/*
    What
    By ref and by value

    Why
    C++ allows us to have total control
    Value is a copy, we recreate the entire object
    Reference is the actual object

    How
    See below
    Note this talks a bit about scope as well
*/

#include <QCoreApplication>
#include <QDebug>

//Passing by value - Copy - QObject do not like being copied!
void testVal(int x)
{
    x = x * 10; //Modifying the copy
    qInfo() << "TextVal X:" << x; //50
} //copy is destroyed!


//Pass by Reference
void testRef(int &y)
{
    y = y * 10; //Modifying original
    qInfo() << "TextVal Y:" << y; //50
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x = 5;
    qInfo() << "Main X:" << x; //5
    testVal(x); //COPY - Value
    qInfo() << "Main X:" << x; //5

    int y = 5;
    qInfo() << "Main Y:" << y; //5
    testRef(y); //Ref - Memory
    qInfo() << "Main Y:" << y; //50

    return a.exec();
}
