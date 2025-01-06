#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::setOrder(Order* o)
{
    order = o;
}


void MainWindow::on_pushButton_2_clicked()
{
    order->setName(ui->lineEdit_Name->text());
    order->setDateAdded(ui->dateEdit->date());
    order->setQuantity(ui->spinBox_quantity->value());
    order->setPrice(ui->lineEdit_UnitPrice->text().toDouble());
    ui->lineEdit_TotalPrice->setText(QString::number(order->quantity()*order->price()));
}

void MainWindow::on_pushButton_clicked()
{
    QDate defaultDate = QDate(2000, 1, 1);
    ui->lineEdit_Name->clear();
    ui->dateEdit->setDate(defaultDate);
    ui->spinBox_quantity->clear();
    ui->lineEdit_UnitPrice->clear();
    ui->lineEdit_TotalPrice->clear();
}
