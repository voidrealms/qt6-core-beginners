#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{
    qInfo() << this << "Test constructed";
}

Test::~Test()
{
    qInfo() << this << "Test deconstructed";
}
