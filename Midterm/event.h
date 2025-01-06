#ifndef EVENT_H
#define EVENT_H

#include <QString>

class event
{
public:
    event();
    QString firstName() const {return m_firstName;}
    QString lastName() const {return m_lastName;}
    QString emailAddress() const {return m_emailAddress;}
    QString phoneNumber() const {return m_phoneNumber;}
    QString age() const {return m_age;}


    void setFirstName(const QString &firstName){m_firstName = firstName;}
    void setLastName(const QString &lastName){m_lastName = lastName;}
    void setEmailAddress(const QString &emailAddress){m_emailAddress = emailAddress;}
    void setPhoneNumber(const QString &phoneNumber){m_phoneNumber = phoneNumber;}
    void setAge(const QString &age){m_age = age;}
private:
    QString m_firstName;
    QString m_lastName;
    QString m_emailAddress;
    QString m_phoneNumber;
    QString m_age;

};

#endif // EVENT_H
