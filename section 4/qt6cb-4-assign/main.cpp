/*
    What
    Playing with data types

    Why
    Getting used to data types

    How
    Dog years
    Cat years
    Fish years
*/


#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const int dog_years = 7;
    const int cat_years = 5;
    const int fish_years = 18;

    int my_age = 46;

    int dog_age = dog_years * my_age;
    int cat_age = cat_years * my_age;
    int fish_age = fish_years * my_age;

    qInfo() << "Human age:" << my_age;
    qInfo() << "Dog age:" << dog_age;
    qInfo() << "Cat age:" << cat_age;
    qInfo() << "Fish age:" << fish_age;

    return a.exec();
}
