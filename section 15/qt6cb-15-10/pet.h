#ifndef PET_H
#define PET_H

#include <QObject>

class Pet : public QObject
{
    Q_OBJECT

    int m_age;
    QString m_name;

public:
    explicit Pet(QObject *parent = nullptr);


    int age() const;
    void setAge(int age);

    QString name() const;
    void setName(const QString &name);

signals:

};

#endif // PET_H
