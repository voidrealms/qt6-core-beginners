#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{

}

void Test::kill()
{
    emit close();
}
