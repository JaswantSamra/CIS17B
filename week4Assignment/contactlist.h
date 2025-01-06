#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include <QObject>
#include <QString>
#include <QStringList>
#include "contact.h"

class ContactList : public QObject
{
    Q_OBJECT
private:

public:
    explicit ContactList(QObject *parent = nullptr);
    void add(Contact * contact);
    void remove(Contact * contact);

    QStringList * getMailingList();
    QStringList * getPhoneList();

signals:

};

#endif // CONTACTLIST_H
