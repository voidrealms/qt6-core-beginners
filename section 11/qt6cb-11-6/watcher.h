#ifndef WATCHER_H
#define WATCHER_H

#include <QObject>
#include <QDebug>

class Watcher : public QObject
{
    Q_OBJECT
public:
    explicit Watcher(QObject *parent = nullptr);

signals:

public slots:
    void messageChanged(QString message);
};

#endif // WATCHER_H
