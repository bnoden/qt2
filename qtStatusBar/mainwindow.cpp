#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    StatLabel = new QLabel(this);
    StatProgress = new QProgressBar(this);

    ui->statusBar->addPermanentWidget(StatLabel);
    ui->statusBar->addPermanentWidget(StatProgress);
    StatProgress->setTextVisible(false);
    StatLabel->setText("Loading");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionDo_things_triggered()
{
    ui->statusBar->showMessage("Do things", 3000);
    StatProgress->setValue(50);
}
