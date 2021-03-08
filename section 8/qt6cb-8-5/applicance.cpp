#include "applicance.h"

Applicance::Applicance(QObject *parent) : QObject(parent)
{
    qInfo() << this << "Constructed";
}


bool Applicance::cook()
{
    return true;
}

bool Applicance::grill()
{
    return true;
}

bool Applicance::freeze()
{
    return true;
}
