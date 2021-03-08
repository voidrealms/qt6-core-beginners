#include "producer.h"

Producer::Producer(QObject *parent) : QObject(parent)
{

}

void Producer::do_test()
{
    emit test();
}
