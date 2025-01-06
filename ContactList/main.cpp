#include <QCoreApplication>
#include <QDebug>
#include "contact.h"
#include "contactlist.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ContactList contactList;
    contactList.setObjectName("Contact List");
    Contact * c1 = new Contact();
    Contact * c2 = new Contact();
    c1->setContactInformation("Jessiah", "Ruiz", "951-999-9999", "123 columbia");
    c2->setContactInformation("Tigermonster", "The Cat", "951-999-9991", "123 columbia");

    contactList.add(c1);
    contactList.add(c2);

    contactList.dumpObjectTree();

    QStringList * mailList = contactList.getMailingList();

    for(int i=0; i<mailList->length(); i++)
    {
        qDebug().noquote() << mailList[i];
    }
    return a.exec();
}
