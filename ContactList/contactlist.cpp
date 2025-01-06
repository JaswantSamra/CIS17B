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
    contact->objectName().clear();
}


QStringList *  ContactList::getMailingList()
{
     QList<QObject *> list = this->children();
     QStringList * contactList = new QStringList();
     for(int i=0; i<list.length(); i++ )
     {
         Contact *c = (Contact*)list[i];
         if(c != NULL)
         {
             QString listItem = c->getMailingAddress();
             contactList->append(listItem);
         }
     }
     return contactList;
}






