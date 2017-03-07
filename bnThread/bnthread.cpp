#include "bnthread.h"
#include <QtCore>
#include <QDebug>

BnThread::BnThread()
{

}

void BnThread::run() {
    qDebug() << this->name << 0b01;
}

void BnThread::quit() {
    qDebug() << this->name << 0b00;
}
