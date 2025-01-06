#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->p_eventForm = new eventForm;
    setWindowTitle("Event Form Submittion");
    move(300,300);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_submit_clicked()
{
    QString fName = ui->lineEdit_fName->text();
    QString lName = ui->lineEdit_lName->text();
    QString email = ui->lineEdit_email->text();
    QString pNumber = ui->lineEdit_pNumber->text();
    QString age = ui->lineEdit_age->text();

    if(fName.isEmpty() || lName.isEmpty() || email.isEmpty() || pNumber.isEmpty() || age.isEmpty()){
        QMessageBox::warning(this, "Error 29", "Fill in all of the fields!");
        return;
    } else{
        QRegExp emailAddressRegex("[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+.[A-Za-z]{2,}");
        if(!emailAddressRegex.exactMatch(email)){
            QMessageBox::warning(this, "Error 29", "Enter a valid email address!");
            return;
        }

        QRegularExpression phoneRegex("^[0-9]{10}$");
        QRegularExpressionMatch match = phoneRegex.match(pNumber);
        if (!match.hasMatch()) {
            QMessageBox::warning(this, "Invalid Phone Number", "Please enter a 10-digit phone number with only digits.");
            return;
        }
        QRegularExpression nameRegex("^[a-zA-Z]+$");
        QRegularExpressionMatch nameMatch = nameRegex.match(fName);
        if (!nameMatch.hasMatch()) {
            QMessageBox::warning(this, "Invalid First Name", "Please enter a first name with only alphabetic characters.");
            return;
        }
        nameMatch = nameRegex.match(lName);
        if (!nameMatch.hasMatch()) {
            QMessageBox::warning(this, "Invalid Last Name", "Please enter a last name with only alphabetic characters.");
            return;
        }
        if(age.toInt() < 1 || age.toInt() > 120){
            QMessageBox::warning(this, "Invalid Age", "Please enter an age between 1 and 120.");
            return;
        }

    QList<QString> contactSaveData;
    contactSaveData << fName << lName << email << pNumber << age;
    p_eventForm->saveData(contactSaveData);

    ui->lineEdit_fName->clear();
    ui->lineEdit_lName->clear();
    ui->lineEdit_email->clear();
    ui->lineEdit_pNumber->clear();
    ui->lineEdit_age->clear();

    QMessageBox::information(this, "Success", "Contact Data Saved!");
    }
}

void MainWindow::on_saveData_clicked(){
     //on_submit_clicked();
     QString fName = ui->lineEdit_fName->text();
     if(fName.isEmpty()){
         if(p_eventForm->writeDataToFile()){
             QMessageBox::information(this, "Success", "Contact data saved and written to file!");
         } else{
             QMessageBox::warning(this, "Error 142", "Could not save the data!");
         }
     } else{
         QMessageBox::warning(this, "Error 145", "Could not save the data! Remember, first save the data by clicking submit!");
     }
}

