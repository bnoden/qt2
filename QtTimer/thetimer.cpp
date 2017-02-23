#include "thetimer.h"
#include <QDebug>

TheTimer::TheTimer()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timeSlot()));

    timer->start(1000);
}

void TheTimer::timeSlot() {
    QTime ct = QTime::currentTime();

    qDebug() << ct.toString();
}
