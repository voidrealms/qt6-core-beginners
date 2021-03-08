#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include <QDebug>

class Feline : public QObject
{
    Q_OBJECT
public:
    explicit Feline(QObject *parent = nullptr);

    void speak();

signals:

};

#endif // FELINE_H
