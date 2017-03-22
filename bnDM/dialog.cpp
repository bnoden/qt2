#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    model = new QDirModel(this);
    model->setReadOnly(false);

    ui->treeView->setModel(model);

    model->sort(0);
}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_btnMkdir_clicked()
{

}

void Dialog::on_btnRmdir_clicked()
{

}
