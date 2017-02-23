#ifndef THETIMER_H
#define THETIMER_H

#include <QtCore>

class TheTimer : public QObject
{
    Q_OBJECT

public:
    TheTimer();
    QTimer *timer;

public slots:
    void timeSlot();
};

#endif // THETIMER_H
