#include <QCoreApplication>
#include "thetimer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TheTimer tTimer;

    return a.exec();
}
