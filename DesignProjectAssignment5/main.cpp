#include "mainwindow.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();*/

    QApplication app(argc, argv);
    Order order;
    MainWindow pf;
    order.setName("Modern Multithreading");
    order.setDateAdded(QDateTime::currentDateTime().date());
    order.setQuantity(1);
    pf.setOrder(&order);
    pf.show();
    int retval = app.exec();
    //cout << order.toString() << endl;
    return retval;
}
