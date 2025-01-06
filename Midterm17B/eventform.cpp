#include "eventform.h"

eventForm::eventForm()
{
    i = 1;
}

void eventForm::saveData(QList<QString> eventContactInfo)
{
    contactList.append(eventContactInfo);
}

bool eventForm::writeDataToFile()
{
    QFile file("eventContactInfo.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        QString contact = "Contact";
        QTextStream out(&file);
        for(const auto &contactInfo:contactList)
        {
            out << contact << ":" << i++ << ":" << endl;
            out << "Full Name: " << contactInfo[0] << " " << contactInfo[1] << endl;
            out << "Email Address: " << contactInfo[2] << endl;
            out << "Phone Number: " << contactInfo[3] << endl;
            out << "Age: " << contactInfo[4] << endl << endl;
        }
        toString();
        contactList.clear();
        file.close();
        qDebug() << "File saved at: " << QDir::currentPath() + "/eventContactInfo.txt";
        return true;
    }
    else{
        return false;
    }
}

void eventForm::toString()
{
    int i = 1;
    QString contact = "Contact";
    qDebug() << "Hello World from toString" << endl;
    for(const auto &contactInfo:contactList)
    {
        qDebug() << contact << " " << i++ << ":" << endl;
        qDebug() << "Full Name: " << contactInfo[0] << " " << contactInfo[1] << endl;
        qDebug() << "Email Address: " << contactInfo[2] << endl;
        qDebug() << "Phone Number: " << contactInfo[3] << endl;
        qDebug() << "Age: " << contactInfo[4] << endl;
    }
}


