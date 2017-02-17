#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QMediaPlayer>

QMediaPlayer *player = new QMediaPlayer();
QString sndFile = "mariosleepc.mp3";


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player->setMedia(QUrl("qrc:/audio/"+sndFile));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    QMessageBox::information(this, "Create file", "Permission denied");
}

void MainWindow::on_actionOpen_triggered()
{
    QMessageBox::information(this, "Open file", "You have no files!");
}

void MainWindow::on_actionSave_triggered()
{
    QMessageBox::information(this, "Save file", "Nothing to save!");
}

void MainWindow::on_actionPlay_triggered()
{
    player->play();
}
