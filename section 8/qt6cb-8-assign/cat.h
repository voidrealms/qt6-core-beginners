#ifndef CAT_H
#define CAT_H

#include <QObject>
#include <QDebug>

class Cat : public QObject
{
    Q_OBJECT
public:
    explicit Cat(QObject *parent = nullptr);

    void meow();

signals:

};

#endif // CAT_H
