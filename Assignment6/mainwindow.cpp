#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

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


void MainWindow::on_actionNew_Window_triggered()
{
    /*
    MyDialog mDialog;
    mDialog.setModal(true);
    mDialog.exec();
    */

    // Modaless, this gives control to the main app, stack variable goes away when this function is called
    mDialog = new MyDialog(this);
    mDialog->show();
}
