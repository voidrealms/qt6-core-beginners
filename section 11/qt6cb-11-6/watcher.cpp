#include "watcher.h"

Watcher::Watcher(QObject *parent) : QObject(parent)
{

}

void Watcher::messageChanged(QString message)
{
    qInfo() << message;
}
