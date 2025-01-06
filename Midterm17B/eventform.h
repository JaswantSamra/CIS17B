#ifndef EVENTFORM_H
#define EVENTFORM_H

#include <QString>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QFileDialog>

class eventForm
{
public:
    eventForm();
    void saveData(QList<QString>);
    bool writeDataToFile();
    void toString();
private:
    QList<QList<QString>> contactList;
    int i;
};

#endif // EVENTFORM_H
