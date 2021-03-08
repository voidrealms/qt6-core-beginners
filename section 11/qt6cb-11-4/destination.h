#ifndef DESTINATION_H
#define DESTINATION_H

#include <QObject>
#include <QDebug>

class Destination : public QObject
{
    Q_OBJECT
public:
    explicit Destination(QObject *parent = nullptr);

signals:
    void arrived();

public slots:
    void mySlot(QString message);

};

#endif // DESTINATION_H
