#include <QCoreApplication>
#include <QDebug>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList sList;

    QString bnStr1 = "bnoden";

    sList = bnStr1.split("");
    sList.replaceInStrings("n", "m");
    sList.replaceInStrings("o", "0");
    sList.replaceInStrings("b", "6");

    QString bnStr2 = sList.join("");

    qDebug() << bnStr1 << " is now " << bnStr2;

    //foreach (QString s, sList) {
      //  qDebug() << s;
    //}


    _exit(0);
    return a.exec();
}
