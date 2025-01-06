#include "contact.h"

Contact::Contact(QObject *parent) : QObject(parent)
{

}

void Contact::setContactInformation(QString fName, QString lName, QString pNumber, QString newAddress)
{
    firstName = fName;
    lastName = lName;
    phoneNumber = pNumber;
    address = newAddress;
    setObjectName(firstName + " " + lastName);
}

QString Contact::getMailingAddress()
{
    return firstName + " " + lastName + "\n" + address;
}
