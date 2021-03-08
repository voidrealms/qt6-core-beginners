#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class Animal : public QObject
{
    Q_OBJECT
public:
    explicit Animal(QObject *parent = nullptr);

    bool isAlive() {
        return true;
    }
signals:

};

#endif // ANIMAL_H
