#include "contact.h"

Contact::Contact(QObject *parent) : QObject(parent)
{

}

void Contact::setContact(int c, QString first, QString last, QString number,QString street, QString newZip, QString newCity)
{
    category = c;
    firstName = first;
    lastName = last;
    streetAddress = street;
    phoneNumber = number;
    zip = newZip;
    city = newCity;
    setObjectName(firstName + " " + lastName);

}
QString Contact::getMailingAddress()
{
    return firstName + " " + lastName + "\n" + streetAddress + ", " + city + ", " + zip;
}
QString Contact::getPhonenumberList()
{
    return firstName + " " + lastName + ": " + phoneNumber;
}

