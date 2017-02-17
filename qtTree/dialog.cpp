#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);
    //ui->treeWidget->setHeaderLabels(QStringList() << "bin" << "hex");
    ui->treeWidget->header()->close();
    AddRoot("hex", "bin");
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::AddRoot(QString hex, QString bin) {
    QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget);
    item->setText(0, hex);
    item->setText(1, bin);
    //ui->treeWidget->addTopLevelItem(item);


    for (int i = 0; i < 256; i++) {
        AddChild(item, QString("0x%1").arg(i, 0, 16), QString("0b%1").arg(i, 0, 2));
    }


}

void Dialog::AddChild(QTreeWidgetItem *parent, QString hex, QString bin) {
    QTreeWidgetItem *item = new QTreeWidgetItem();
    item->setText(0, hex);
    item->setText(1, bin);
    parent->addChild(item);
}

void Dialog::hlitG() {
    ui->treeWidget->currentItem()->setBackgroundColor(0, QString::fromLatin1("#A2F2C8"));
    ui->treeWidget->currentItem()->setBackgroundColor(1, QString::fromLatin1("#7AD6A5"));
}
void Dialog::hlitR() {
    ui->treeWidget->currentItem()->setBackgroundColor(0, QString::fromLatin1("#F2A2AD"));
    ui->treeWidget->currentItem()->setBackgroundColor(1, QString::fromLatin1("#D67A8B"));
}

void Dialog::on_pushButton_clicked()
{
    hlitR();
}

void Dialog::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    hlitG();
}

void Dialog::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{

}
