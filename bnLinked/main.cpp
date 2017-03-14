#include <QCoreApplication>
#include <QDebug>
#include <QLinkedList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QLinkedList<int> bnList;

    for (int i = 0; i < 0xff; i++) {
        if (i%0x0d == 0) { bnList << (i/0x0d)*0x03; }
    }

    foreach (int bn, bnList) { qDebug() << bn; }


    _exit(0);
    return a.exec();
}
