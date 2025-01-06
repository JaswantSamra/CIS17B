#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->addToCart,SIGNAL(clicked()), this, SLOT(addToCart()));
    connect(ui->clearButton, SIGNAL(clicked()), this, SLOT(clear()));
    connect(ui->clearButton2, SIGNAL(clicked()), this, SLOT(clear()));
    connect(ui->cancelButton, SIGNAL(clicked()), this, SLOT(cancel()));
    connect(ui->cancelButton2, SIGNAL(clicked()), this, SLOT(cancel()));
    connect(ui->cancelButton3, SIGNAL(clicked()), this, SLOT(cancel()));
    connect(ui->submitButton, SIGNAL(clicked()), this, SLOT(submit()));
    connect(ui->checkoutButton, SIGNAL(clicked()), this, SLOT(checkout()));

    ui->cart->setCurrentWidget(ui->tab_4);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::submit(){
    static int transID = 0;
    ++transID;
    QTime t = QTime::currentTime();
    QDate d = QDate::currentDate();


    QMessageBox qbox;
    qbox.setText("Are you sure?");
    qbox.setInformativeText("To continue, please choose an option below.");
    qbox.setStandardButtons(QMessageBox::Cancel | QMessageBox::Yes);
    qbox.setDefaultButton(QMessageBox::Yes);
    int ret = qbox.exec();
    switch(ret){
    case QMessageBox::Cancel:
        break;
    case QMessageBox::Yes:
    {
        QString path = QFileDialog::getSaveFileName(this, "save", "../", "TXT(*.txt");
        if(path.isEmpty() == false)
        {
            QFile file;
            file.setFileName(path);
            bool isOK = file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);
            if(isOK == true)
            {
                QTextStream out(&file);
                QString name = ui->nameLineEdit->text();
                QString emailAddress = ui->emailLineEdit->text();
                QString phoneNumber = ui->phoneNumberLineEdit->text();
                QString order = ui->itemListLabel->text();
                order.QString::replace("\t","\n");
                QString transactionID = QString::number(transID);
                QString date = d.toString();
                QString time = t.toString();
                QString operatorID = ui->operatorIDLineEdit->text();


                out << "Operator ID: " << operatorID << "\n";
                out << "Transaction ID: " << transactionID << "\n";
                out << "Name: " << name << "\n";
                out << "Email Address: " << emailAddress << "\n";
                out << "Phone Number: " << phoneNumber << "\n";
                out << "Date: " << date << "\n";
                out << "Time: " << time << "\n";
                out << "Order: \n" << order << "\n";
                out << ui->totalPrice->text() << "\n";
                out << "Thank you for doing business with us.\n";
                out << "---------------------------------------\n";
            }
            file.flush();
            file.close();
        }
    }
    default:
        break;
    }

}

void MainWindow::clear(){
    ui->itemListLabel->clear();
    ui->totalPrice->clear();
    ui->totalPrice->setText("Total Price: ");
    ui->nameLineEdit->clear();
    ui->addressLineEdit->clear();
    ui->phoneNumberLineEdit->clear();
    ui->emailLineEdit->clear();
}

void MainWindow::cancel(){
    this->clear();
    this->dumpObjectTree();
    this->close();
}

void MainWindow::addToCart(){
    int s = ui->blueShirtSpinBox->value();
    int a = ui->pShoesSpinBox->value();
    int b = ui->pJSpinBox->value();
    int c = ui->yJSpinBox->value();
    int d = ui->bJSpinBox->value();
    int e = ui->pShirtSpinBox->value();
    int f = ui->yShirtSpinBox->value();
    int g = ui->yShoesSpinBox->value();
    int h = ui->blueShoesSpinBox->value();
    ui->itemListLabel->setText(QString::number(b) + "x #1 Pink Jacket(s) @ $30\t" + QString::number(c) + "x #2 Yellow Jackets(s) @ $25\t" +
                               QString::number(d) + "x #3 Blue Jackets @ $20\t" + QString::number(e) + "x #4 Pink Shirts @ $15\t" + QString::number(f)
                               + "x #5 Yellow Shirts @ $12\t" + QString::number(s) + "x #6 Blue Shirt(s) @ $11\t" + QString::number(a) + "x #7 Pink Shoes @ $30\n"
                               + QString::number(g) + "x #8 Yellow Shoes @ $22\t" + QString::number(h) + "x #9 Blue shoes @ $40");
    s *= 11;
    a *= 30;
    b *= 30;
    c *= 25;
    d *= 20;
    e *= 15;
    f *= 12;
    g *= 22;
    h *= 40;
    int tp = s + a + b + c + d + e + f + g + h;
    ui->totalPrice->setText("Total Price: " + QString::number(tp));
    ui->cart->setCurrentWidget(ui->tab_2);
}

void MainWindow::checkout(){
    ui->cart->setCurrentWidget(ui->tab_3);
}

