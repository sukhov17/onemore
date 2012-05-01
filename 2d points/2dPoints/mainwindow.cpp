#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setBaseParameters();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setBaseParameters()
{
    paintWindow = new PaintWindow (this);
    paintWindow->move(20,20);
    ui->radiusEdit->setText(QString::number(30));
}

void MainWindow::on_startStopButton_clicked()
{
    if(paintWindow->turn) ui->startStopButton->setText("Start");
    else ui->startStopButton->setText("Stop");
    paintWindow->setTurn();
}

void MainWindow::on_selectButton_clicked()
{
    paintWindow->setRadius(ui->radiusEdit->text().toInt());
}



void MainWindow::on_up_clicked()
{
    paintWindow->setloc();

}
