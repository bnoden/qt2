#include "dialog.h"
#include "ui_dialog.h"
#include <QtGui>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnInfo_clicked()
{
    QMessageBox::information(this, "Info",
                             "Here is the information");
}

void Dialog::on_btnQuestion_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Question",
                             "Do you understand?");

    if (reply == QMessageBox::Yes) {
        QMessageBox::information(this, "Info",
                                 "You DO understand!");
    } else if (reply == QMessageBox::No) {
        QMessageBox::information(this, "Info",
                                 "You do NOT understand!");
    }
}

void Dialog::on_btnWarning_clicked()
{
    QMessageBox::warning(this, "Warning",
                         "You must not touch");
}

void Dialog::on_btnCustom_clicked()
{
    QMessageBox::question(this, "Custom",
                          "Are you proud of yourself?",
                          QMessageBox::YesToAll | QMessageBox::Yes | QMessageBox::No |
                          QMessageBox::NoToAll);
}
