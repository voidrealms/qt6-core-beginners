#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include <QDebug>

class Feline : public QObject
{
    Q_OBJECT
public:
    explicit Feline(QObject *parent = nullptr);

    void meow();
    void hiss();

signals:

};

#endif // FELINE_H
