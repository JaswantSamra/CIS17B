#ifndef EVENTREGISTRATION_H
#define EVENTREGISTRATION_H

#include <QMainWindow>
#include <QStringList>
#include <QFile>
#include <QSpinBox>
#include "registrationlist.h"
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui { class eventRegistration; }
QT_END_NAMESPACE

class eventRegistration : public QMainWindow
{
    Q_OBJECT

public:
    eventRegistration(QWidget *parent = nullptr);
    ~eventRegistration();
//    void setEventRegistration(eventRegistration* eReg);
//    void setFirstName(const QString &name) {m_firstName = name;}
public slots:
    void submit();
    void saveAll();
    void cancel();

private:
    Ui::eventRegistration *ui;

//    QString* m_firstNamep;
//    QString* m_lastName;
//    QString* m_emailAddress;
//    QString* m_Age;
//    QList <QString>* registrationList;
//    QString m_firstName;
//    class event* e;
};
#endif // EVENTREGISTRATION_H
