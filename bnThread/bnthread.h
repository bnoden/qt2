#ifndef BNTHREAD_H
#define BNTHREAD_H
#include <QtCore>
#include <QTextStream>

class BnThread : public QThread
{
public:
    BnThread();
    void run();
    void quit();
    QString name;

};

#endif // BNTHREAD_H
