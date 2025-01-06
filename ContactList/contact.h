#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>
#include <QString>

class Contact : public QObject
{
    Q_OBJECT

private:
    QString firstName;
    QString lastName;
    QString phoneNumber;
    QString address;

public:
    explicit Contact(QObject *parent = nullptr);
    void setContactInformation(QString, QString, QString, QString);
    QString getMailingAddress();

signals:

};

#endif // CONTACT_H
