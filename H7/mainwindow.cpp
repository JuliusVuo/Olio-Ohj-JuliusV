#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter = counter + 1;
    QString s = QString::number(counter);
    QString label = "Painiketta painettu " +QString::number(counter) +" kertaa";
    ui->txtResult->setText(s);
    ui->labelInfo->setText(label);
}




void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    ui->txtResult->setText("0");
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
}

