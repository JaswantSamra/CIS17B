#include <QCoreApplication>
//#include "person.h"
//#include "position.h"
//#include "employer.h"
#include "contactlist.h"
#include "contact.h"
#include <QDebug>
#include <iostream>

using namespace std;

class Person;
class Position;
class Employer;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ContactList contactlist;
    Contact * c1 = new Contact();
    Contact * c2 = new Contact();

    c1->setContact(2, "Manjot", "Singh", "951-123-1234","123 wee woo ave", "32134", "Corona");
    c2->setContact(1, "Parrot", "The man", "951-123-1234","123 wee woo ave", "32134", "Corona");

    contactlist.add(c1);
    contactlist.add(c2);

    contactlist.dumpObjectTree();

    QStringList * mailList = contactlist.getMailingList();

    for(int i = 0; i<mailList->length(); i++)
    {

        qDebug().noquote() << mailList[i];
        cout << "\n";
    }

    QStringList * phoneList = contactlist.getPhoneList();

    for(int i = 0; i<phoneList->length(); i++)
    {

        qDebug().noquote() << phoneList[i];
    }
    return a.exec();
}
