#include "monitor.h"

Monitor::Monitor(QObject *parent) : QObject(parent)
{

}

void Monitor::closing()
{
    qInfo() << "Application is closing!";
}
