#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    for (int i = 0x00; i < 0x0A; i++) {
        List.append(i);
    }

    QMutableListIterator<int> Iter(List);
    while(Iter.hasNext()) {
        int i = Iter.next();
        if (!(i%0x02)) {
            Iter.remove();
            Iter.insert(0x00);
        } else if (i%0x02) {
            Iter.remove();
            Iter.insert(0xFF);
        }
    }

    Iter.toFront();

    while (Iter.hasNext()) {
        qDebug() << Iter.next();
    }


    _exit(0);
    return a.exec();
}
