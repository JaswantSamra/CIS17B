#include "contactlist.h"
#include <QList>
ContactList::ContactList(QObject *parent) : QObject(parent)
{

}
void ContactList::add(Contact * contact)
{
    contact->setParent(this);
}
void ContactList::remove(Contact * contact)
{

}

QStringList * ContactList::getMailingList()
{
    QList<QObject *> list = this->children();
    QStringList * contactList = new QStringList();
    for(int i = 0; i<list.length(); i++)
    {
        QString listItem;
        Contact *c = (Contact*)list[i];
        if(c != NULL)
        {
            QString listItem = c->getMailingAddress();
            contactList->append(listItem);
        }
    }
    return contactList;
}
QStringList * ContactList::getPhoneList()
{
    QList<QObject *> list = this->children();
    QStringList * phoneList = new QStringList();
    for(int i = 0; i<list.length(); i++)
    {
        QString listItem;
        Contact *c = (Contact*)list[i];
        if(c != NULL)
        {
            QString listItem = c->getPhonenumberList();
            phoneList->append(listItem);
        }
    }
    return phoneList;
}
