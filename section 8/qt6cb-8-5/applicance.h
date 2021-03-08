#ifndef APPLICANCE_H
#define APPLICANCE_H

#include <QObject>
#include <QDebug>
#include "Freezer.h"
#include "Microwave.h"
#include "Toaster.h"

class Applicance : public QObject, public Freezer, public Toaster, public Microwave
{
    Q_OBJECT
public:
    explicit Applicance(QObject *parent = nullptr);

    // Microwave interface
    bool cook();

    // Toaster interface
    bool grill();

    // Freezer interface
    bool freeze();

signals:


};

#endif // APPLICANCE_H
