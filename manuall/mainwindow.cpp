#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    order = new Order(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{
    QString name = ui->lineEdit_Name->text();
    order->setObjectName(name);
    ui->lineEdit_Name->setText("Order Complete");
    qDebug() << name << "\n";
    this->dumpObjectTree();
}
