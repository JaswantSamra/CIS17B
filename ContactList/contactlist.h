#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include <QObject>
#include <QStringList>
#include "contact.h"

class ContactList : public QObject
{
    Q_OBJECT
public:
    explicit ContactList(QObject *parent = nullptr);

    void add(Contact * contact);
    void remove(Contact * contact);
    QStringList * getMailingList();

signals:

};

#endif // CONTACTLIST_H
