/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_fName;
    QLabel *label_3;
    QLineEdit *lineEdit_lName;
    QLabel *label_4;
    QLineEdit *lineEdit_email;
    QLabel *label_5;
    QLineEdit *lineEdit_pNumber;
    QLabel *label_6;
    QLineEdit *lineEdit_age;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QPushButton *submit;
    QPushButton *saveData;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 271, 197));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_fName = new QLineEdit(verticalLayoutWidget);
        lineEdit_fName->setObjectName(QString::fromUtf8("lineEdit_fName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_fName);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_lName = new QLineEdit(verticalLayoutWidget);
        lineEdit_lName->setObjectName(QString::fromUtf8("lineEdit_lName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_lName);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_email = new QLineEdit(verticalLayoutWidget);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_email);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit_pNumber = new QLineEdit(verticalLayoutWidget);
        lineEdit_pNumber->setObjectName(QString::fromUtf8("lineEdit_pNumber"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_pNumber);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineEdit_age = new QLineEdit(verticalLayoutWidget);
        lineEdit_age->setObjectName(QString::fromUtf8("lineEdit_age"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_age);


        verticalLayout->addLayout(formLayout);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        submit = new QPushButton(verticalLayoutWidget);
        submit->setObjectName(QString::fromUtf8("submit"));

        horizontalLayout->addWidget(submit);

        saveData = new QPushButton(verticalLayoutWidget);
        saveData->setObjectName(QString::fromUtf8("saveData"));

        horizontalLayout->addWidget(saveData);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Enter Contact Information for the Event", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "First Name:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Last Name:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Email Address:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Phone Number:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Age:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "To Save Data, first click Submit!", nullptr));
        submit->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        saveData->setText(QApplication::translate("MainWindow", "Save Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
