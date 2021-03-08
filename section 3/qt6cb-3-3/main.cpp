/*
    What
    Comments

    Why
    Notes for you and other programmers

    How
    We have been using them :)
*/


#include <QCoreApplication>
#include <QDebug>

/*!
  Documentation for automated systems like Doxygen
  https://www.doxygen.nl/index.html
 * @brief main The starting point
 * @param argc The argument count
 * @param argv The arguuments
 * @return int The exit value of the application
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
     * This is a multi-line
     * comment
     * see isn't this cool!
     */

    //This is how we print hello world
     qInfo() << "Hello World";

    return a.exec();
}
