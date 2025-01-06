#include "eventregistration.h"
#include "ui_eventregistration.h"
#include <QtDebug>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>

//QTextStream cout(stdout);
eventRegistration::eventRegistration(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::eventRegistration)
{
    ui->setupUi(this);



//    registrationList = new QStringList();

    //connecting all the buttons to their respective signals and slots
    connect(ui->submitButton, SIGNAL(clicked()), this, SLOT(submit()));
    connect(ui->cancelButton, SIGNAL(clicked()), this , SLOT(cancel()));
    connect(ui->saveAllButton, SIGNAL(clicked()), this, SLOT(saveAll()));

    //validation attempt
//    ui->firstNameLineEdit->setValidator(new QIntValidator(0,100,ui->firstNameLineEdit));
    //I just realized there was a QT UI input mask validation xD

}

eventRegistration::~eventRegistration()
{
    delete ui;
}

//void setEventRegistration(eventRegistration* eReg){
//    e = eReg;
//}

void eventRegistration::submit()
{    
    ui->successLabel->setText("Success!");
    saveAll();

}
void eventRegistration::cancel()
{
    ui->emailAddressLineEdit->clear();
    ui->firstNameLineEdit->clear();
    ui->phoneNumberLineEdit->clear();
    ui->lastNameLineEdit->clear();
    this->dumpObjectTree();
    this->close();
}
void eventRegistration::saveAll()
{
    QString path = QFileDialog::getSaveFileName(this, "save", "../", "TXT(*.txt");
    if(path.isEmpty() == false)
    {
        QFile file;
        file.setFileName(path);
        bool isOK = file.open(QIODevice::WriteOnly);
        if(isOK == true)
        {
            QDataStream out(&file);
            QString firstName = ui->firstNameLineEdit->text();
            QString lastName = ui->lastNameLineEdit->text();
            QString emailAddress = ui->emailAddressLineEdit->text();
            QString phoneNumber = ui->phoneNumberLineEdit->text();
            QString age = ui->ageLineEdit->text();



            out << "First Name: ";
            out <<firstName;
            out << "\n";
            out <<"Last Name: ";
            out <<lastName;
            out << "\n";
            out << "Email Address: ";
            out << emailAddress;
            out << "\n";
            out << "Phone Number: ";
            out << phoneNumber;
            out << "\n";
            out << "Age: ";
            out << age;
            out << "\n";
        }
        file.flush();
        file.close();
    }

}
//initial validation attempt

//            char nums[] = {'0','1','2','3','4','5','6','7','8','9'};
//            if (firstName.contains(nums)){
//                this->close();
//                QMessageBox::warning(this, "Invalid first name input", "Invalid Entry");

//            }

//initial QFile attempt at printing a QList
//    QFile mFile("Registration Confirmation");
//    if(!mFile.open(QFile::WriteOnly | QFile::Text))
//    {
//        qDebug() << "Could not open file";
//        return;
//    }
//    QTextStream out(&mFile);

//    out << registrationList;

//    mFile.flush();
//    mFile.close();

//initial file write attempt
//            QDataStream in(&file);
//            for(int i = 0; i < registrationList->length(); i ++){
//            this->dumpObjectTree();
//            in >> *registrationList;
//            }
//            file.write(registrationList->toStdList().data());

//putting everything under submit as a last effort

//QString pointers were not working therefore, as a temporary measure I have simply allowed it to remain as a QString
//Setting each QString equal to the LineEdit text

//    QString firstName = ui->firstNameLineEdit->text();
//    QString lastName = ui->lastNameLineEdit->text();
//    QString emailAddress = ui->emailAddressLineEdit->text();
//    QString phoneNumber = ui->phoneNumberLineEdit->text();
//    QString age = ui->ageLineEdit->text();

//    e->setFirstName(ui->firstNameLineEdit->text());
//    e->setLastName(ui->lastNameLineEdit->text());
//    e->setEmailAddress(ui->emailAddressLineEdit->text());
//    e->setPhoneNumber(ui->phoneNumberLineEdit->text());
//    e->setAge(ui->ageLineEdit->text());


//original location of appending ... realized that it might be better suited in the submit function.
//Appending each QString to the QList<QString>

//    registrationList->append(firstName);
//    registrationList->append(lastName);
//    registrationList->append(emailAddress);
//    registrationList->append(phoneNumber);
//    registrationList->append(age);

//failed attempts at trying to print the list so that I could see if the input was actually going through

//    for(int i = 0; i < registrationList->length(); i++ )
//    {
//    cout << registrationList;
//    }
//    foreach(QString x, registrationList)
//    {
//        qDebug() << x;
//    }    //putting everything under submit as a last effort

//QString pointers were not working therefore, as a temporary measure I have simply allowed it to remain as a QString
//Setting each QString equal to the LineEdit text

//    QString firstName = ui->firstNameLineEdit->text();
//    QString lastName = ui->lastNameLineEdit->text();
//    QString emailAddress = ui->emailAddressLineEdit->text();
//    QString phoneNumber = ui->phoneNumberLineEdit->text();
//    QString age = ui->ageLineEdit->text();

//    e->setFirstName(ui->firstNameLineEdit->text());
//    e->setLastName(ui->lastNameLineEdit->text());
//    e->setEmailAddress(ui->emailAddressLineEdit->text());
//    e->setPhoneNumber(ui->phoneNumberLineEdit->text());
//    e->setAge(ui->ageLineEdit->text());


//original location of appending ... realized that it might be better suited in the submit function.
//Appending each QString to the QList<QString>

//    registrationList->append(firstName);
//    registrationList->append(lastName);
//    registrationList->append(emailAddress);
//    registrationList->append(phoneNumber);
//    registrationList->append(age);

//failed attempts at trying to print the list so that I could see if the input was actually going through

//    for(int i = 0; i < registrationList->length(); i++ )
//    {
//    cout << registrationList;
//    }
//    foreach(QString x, registrationList)
//    {
//        qDebug() << x;
//    }
