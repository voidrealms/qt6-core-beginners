#ifndef LION_H
#define LION_H

#include <QObject>
#include <QDebug>
#include "feline.h"

class Lion : public Feline
{
    Q_OBJECT
public:
    explicit Lion(QObject *parent = nullptr);

    void speak();

signals:

};

#endif // LION_H
