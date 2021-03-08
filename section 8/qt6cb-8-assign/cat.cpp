#include "cat.h"

Cat::Cat(QObject *parent) : QObject(parent)
{

}

void Cat::meow()
{
    for(int i = 0; i < 3; i++)
    {
        qInfo() << "meow";
    }
}
