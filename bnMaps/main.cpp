#include <QCoreApplication>
#include <QMap>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<int, QString> Employees;

    Employees.insert(1, "Bort");
    Employees.insert(2, "Chaz");
    Employees.insert(3, "Bobo");

    foreach(int e, Employees.keys()) {
        qDebug() << Employees[e];
    }

    QMapIterator<int, QString> Iter(Employees);
    while (Iter.hasNext()) {
        Iter.next();
        qDebug() << Iter.key() << ' ' << Iter.value();
    }


    _exit(0);
    return a.exec();
}
