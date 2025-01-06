#include "eventregistration.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    eventRegistration w;
//    w.setEventRegistration(&eReg);
    w.show();
    return a.exec();
}
