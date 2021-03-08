#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QDebug>

class Laptop : public QObject
{
    Q_OBJECT
public:
    //Constructor
    explicit Laptop(QObject *parent = nullptr,QString name = "");

    //Decontructor
    ~Laptop();

    //Vars
    int weight;
    QString name;

    //Functions
    double asKilo();
    void test();

signals:

};

#endif // LAPTOP_H
