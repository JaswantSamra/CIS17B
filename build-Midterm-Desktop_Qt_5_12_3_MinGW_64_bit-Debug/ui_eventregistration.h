/********************************************************************************
** Form generated from reading UI file 'eventregistration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTREGISTRATION_H
#define UI_EVENTREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eventRegistration
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *firstNameLabel;
    QLabel *lastNameLabel;
    QLabel *emailAddressLabel;
    QLabel *phoneNumberLabel;
    QLabel *ageLabel;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *firstNameLineEdit;
    QLineEdit *lastNameLineEdit;
    QLineEdit *emailAddressLineEdit;
    QLineEdit *phoneNumberLineEdit;
    QLineEdit *ageLineEdit;
    QPushButton *submitButton;
    QPushButton *saveAllButton;
    QPushButton *cancelButton;
    QLabel *successLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *eventRegistration)
    {
        if (eventRegistration->objectName().isEmpty())
            eventRegistration->setObjectName(QString::fromUtf8("eventRegistration"));
        eventRegistration->resize(800, 600);
        centralwidget = new QWidget(eventRegistration);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(240, 110, 171, 191));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        firstNameLabel = new QLabel(formLayoutWidget);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));

        verticalLayout->addWidget(firstNameLabel);

        lastNameLabel = new QLabel(formLayoutWidget);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));

        verticalLayout->addWidget(lastNameLabel);

        emailAddressLabel = new QLabel(formLayoutWidget);
        emailAddressLabel->setObjectName(QString::fromUtf8("emailAddressLabel"));

        verticalLayout->addWidget(emailAddressLabel);

        phoneNumberLabel = new QLabel(formLayoutWidget);
        phoneNumberLabel->setObjectName(QString::fromUtf8("phoneNumberLabel"));

        verticalLayout->addWidget(phoneNumberLabel);

        ageLabel = new QLabel(formLayoutWidget);
        ageLabel->setObjectName(QString::fromUtf8("ageLabel"));

        verticalLayout->addWidget(ageLabel);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        firstNameLineEdit = new QLineEdit(formLayoutWidget);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));

        verticalLayout_2->addWidget(firstNameLineEdit);

        lastNameLineEdit = new QLineEdit(formLayoutWidget);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));

        verticalLayout_2->addWidget(lastNameLineEdit);

        emailAddressLineEdit = new QLineEdit(formLayoutWidget);
        emailAddressLineEdit->setObjectName(QString::fromUtf8("emailAddressLineEdit"));

        verticalLayout_2->addWidget(emailAddressLineEdit);

        phoneNumberLineEdit = new QLineEdit(formLayoutWidget);
        phoneNumberLineEdit->setObjectName(QString::fromUtf8("phoneNumberLineEdit"));

        verticalLayout_2->addWidget(phoneNumberLineEdit);

        ageLineEdit = new QLineEdit(formLayoutWidget);
        ageLineEdit->setObjectName(QString::fromUtf8("ageLineEdit"));

        verticalLayout_2->addWidget(ageLineEdit);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_2);

        submitButton = new QPushButton(formLayoutWidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, submitButton);

        saveAllButton = new QPushButton(formLayoutWidget);
        saveAllButton->setObjectName(QString::fromUtf8("saveAllButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, saveAllButton);

        cancelButton = new QPushButton(formLayoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, cancelButton);

        successLabel = new QLabel(formLayoutWidget);
        successLabel->setObjectName(QString::fromUtf8("successLabel"));

        formLayout->setWidget(2, QFormLayout::FieldRole, successLabel);

        eventRegistration->setCentralWidget(centralwidget);
        menubar = new QMenuBar(eventRegistration);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        eventRegistration->setMenuBar(menubar);
        statusbar = new QStatusBar(eventRegistration);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        eventRegistration->setStatusBar(statusbar);

        retranslateUi(eventRegistration);

        QMetaObject::connectSlotsByName(eventRegistration);
    } // setupUi

    void retranslateUi(QMainWindow *eventRegistration)
    {
        eventRegistration->setWindowTitle(QApplication::translate("eventRegistration", "eventRegistration", nullptr));
        firstNameLabel->setText(QApplication::translate("eventRegistration", "First Name:", nullptr));
        lastNameLabel->setText(QApplication::translate("eventRegistration", "Last Name: ", nullptr));
        emailAddressLabel->setText(QApplication::translate("eventRegistration", "Email Address: ", nullptr));
        phoneNumberLabel->setText(QApplication::translate("eventRegistration", "Phone Number: ", nullptr));
        ageLabel->setText(QApplication::translate("eventRegistration", "Age: ", nullptr));
        firstNameLineEdit->setInputMask(QApplication::translate("eventRegistration", "aaaaaaaaaaaaaa", nullptr));
        firstNameLineEdit->setText(QString());
        lastNameLineEdit->setInputMask(QApplication::translate("eventRegistration", "aaaaaaaaaaaaaa", nullptr));
        emailAddressLineEdit->setInputMask(QApplication::translate("eventRegistration", "nnnnnnnnnnnnnnnnnnnnxnnnnnnnnnnnnnnnnnxnnnn", nullptr));
        phoneNumberLineEdit->setInputMask(QApplication::translate("eventRegistration", "999-999-9999", nullptr));
        ageLineEdit->setInputMask(QApplication::translate("eventRegistration", "000", nullptr));
        submitButton->setText(QApplication::translate("eventRegistration", "Submit", nullptr));
        saveAllButton->setText(QApplication::translate("eventRegistration", "Save All", nullptr));
        cancelButton->setText(QApplication::translate("eventRegistration", "Cancel", nullptr));
        successLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class eventRegistration: public Ui_eventRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTREGISTRATION_H
