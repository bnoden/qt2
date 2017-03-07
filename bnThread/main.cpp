#include <QCoreApplication>
#include "bnthread.h"

#include <QTextStream>
#include <QString>

void await() {
    QTextStream in(stdin);
    forever {
        QString line = in.readLine();
        if (!line.isNull())
            break;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    BnThread bThread1;
    bThread1.name = "bt1";
    BnThread bThread2;
    bThread2.name = "bt2";
    BnThread bThread3;
    bThread3.name = "bt3";
/*
    await();
    bThread1.start();
    await();
    bThread2.start();
    await();
    bThread3.start();

    await();
    bThread1.quit();
    await();
    bThread2.quit();
    await();
    bThread3.quit();
    await();

    _exit(0);
*/

    bThread1.start();
    bThread2.start();
    bThread3.start();



    return a.exec();
}

