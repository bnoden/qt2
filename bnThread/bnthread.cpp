#include "bnthread.h"
#include <QtCore>
#include <QDebug>

BnThread::BnThread()
{

}

void BnThread::run() {
    for (int i = 0x001; i < 0x3E8; i++) {
        qDebug() << this->name << i;
    }
}

void BnThread::quit() {
    qDebug() << this->name << 0x000;
}
