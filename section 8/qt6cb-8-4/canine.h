#ifndef CANINE_H
#define CANINE_H

#include <QObject>
#include <QDebug>
#include "mammal.h"

class Canine : public Mammal
{
    Q_OBJECT
public:
    explicit Canine(QObject *parent = nullptr);
    void bark() {qInfo() << "bark!"; }

signals:

};

#endif // CANINE_H
