#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QDirModel>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:


    void on_btnMkdir_clicked();

    void on_btnRmdir_clicked();

    void on_btnCancel_clicked();

private:
    Ui::Dialog *ui;
    QDirModel *model;
};

#endif // DIALOG_H
