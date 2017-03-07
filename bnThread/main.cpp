#include <QCoreApplication>
#include "bnthread.h"

#include <QTextStream>

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
    bThread1.name = "bThread1";

    BnThread bThread2;
    bThread2.name = "bThread2";

    BnThread bThread3;
    bThread3.name = "bThread3";

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

    return a.exec();
}

