/*
    What
    Dog owner

    Why
    Show that we can easily goof up

    How
    See below
*/

#include <QCoreApplication>
#include "owner.h"
#include "dog.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Owner owner;
    Dog dog;

    QObject::connect(&owner,&Owner::treats,&dog,&Dog::treats); //Auto

    //Somewhere else
    for(int i = 0; i < 10; i++)
    {
        QObject::connect(&owner,&Owner::treats,&dog,&Dog::treats,Qt::UniqueConnection); //Auto
    }

    owner.giveSnacks();

    return a.exec();
}
