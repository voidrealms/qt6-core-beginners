#include "consumer.h"

Consumer::Consumer(QObject *parent) : QObject(parent)
{

}

void Consumer::testing()
{
    Producer* p = qobject_cast<Producer*>(sender());
    if(!p) return;

    qInfo() << "Sender:" << p << p->objectName();
}

