#ifndef DOG_H
#define DOG_H

#include <QObject>
#include <QDebug>

class Dog : public QObject
{
    Q_OBJECT
public:
    explicit Dog(QObject *parent = nullptr);


signals:
    void bark();

public slots:
    void chase();

private:

};

#endif // DOG_H
