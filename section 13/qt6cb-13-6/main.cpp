/*
    What
    Custom handling

    Why
    Sometimes we want to make our own exception type

    How
    Inherit exception
*/

#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

struct MyIssue : public exception
{
    const char * description;
    const char * what() const throw()
    {
        return "My Issue";
    }
};

bool doDivision(int max)
{

    try
    {
        int value;
        qInfo() << "Enter a number";
        cin >> value;

        if(value == 0) throw std::invalid_argument("Can not divide by zero");
        if(value > 5) throw std::out_of_range("Should be less than 5");

        if(value == 1)
        {
            MyIssue e;
            e.description = "User did not read the manual";
            throw e;
        }

        int result = max / value;
        qInfo() << "Result = " << result;

        return true;
    }
    catch (MyIssue &e)
    {
        qWarning() << e.what() << " " << e.description;
        return false;
    }
    catch (std::exception &e)
    {
        qWarning() << e.what();
        return false;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 44;
    do {
        // Do something here
    } while(doDivision(max));

    return a.exec();
}
