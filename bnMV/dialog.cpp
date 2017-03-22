#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    model = new QStringListModel(this);

    QStringList bnList;
    bnList << "STM" << "AVR" << "TMC4123" << "PIC";
    std::sort(bnList.begin(), bnList.end());

    model->setStringList(bnList);
    ui->listView->setModel(model);
    ui->comboBox->setModel(model);

    ui->listView->setEditTriggers(
        QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked
                );

}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::on_btnAdd_clicked()
{
    quint8 row = model->rowCount();
    model->insertRows(row, 1);
    QModelIndex index = model->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);

}

void Dialog::on_btnInsert_clicked()
{
    quint8 row = ui->listView->currentIndex().row();
    model->insertRows(row, 1);
    QModelIndex index = model->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}

void Dialog::on_btnDelete_clicked()
{
    model->removeRows(ui->listView->currentIndex().row(),1);
}

void Dialog::on_btnSort_clicked()
{
    quint8 row = model->rowCount();
    model->sort(row);
}
