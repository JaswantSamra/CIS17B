#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>
#include <QString>

class Contact : public QObject
{
    Q_OBJECT
private:
    int category;
    QString firstName;
    QString lastName;
    QString streetAddress;
    QString phoneNumber;
    QString zip;
    QString city;

public:
    explicit Contact(QObject *parent = nullptr);

    QString toString();
    void setContact(int, QString, QString, QString, QString, QString, QString);
    QString getMailingAddress();
    QString getPhonenumberList();

signals:

};

#endif // CONTACT_H
