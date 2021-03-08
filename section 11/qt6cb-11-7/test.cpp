#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{
    count = 0;

    connect(&m_timer,&QTimer::timeout,this,&Test::timeout);
    m_timer.setInterval(1000);

    m_timer.start();


}

void Test::timeout()
{
    qInfo() << "Test!";
    count++;
    if(count >= 3)
    {
        m_timer.stop();
        qInfo() << "Done!";
    }
}
