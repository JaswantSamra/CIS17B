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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *cart;
    QWidget *tab_4;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *operatorIDLineEdit;
    QGridLayout *gridLayout_5;
    QLabel *professorMessageLabel;
    QPushButton *cancelButton3;
    QWidget *tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *pinkJackLabel;
    QSpinBox *yJSpinBox;
    QLabel *pShoesLabel;
    QLabel *yShoesLabel;
    QLabel *blueShirtLabel;
    QSpinBox *blueShoesSpinBox;
    QSpinBox *blueShirtSpinBox;
    QPushButton *addToCart;
    QLabel *bueJacketLabel;
    QSpinBox *pShirtSpinBox;
    QSpinBox *bJSpinBox;
    QSpinBox *pJSpinBox;
    QSpinBox *yShoesSpinBox;
    QSpinBox *yShirtSpinBox;
    QSpinBox *pShoesSpinBox;
    QLabel *yellowJacketLabel;
    QLabel *bShoesLabel;
    QLabel *yellowShirtLabel;
    QLabel *pinkShirtLabel;
    QWidget *tab_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *itemLabel;
    QVBoxLayout *verticalLayout_2;
    QLabel *itemListLabel;
    QGridLayout *gridLayout_2;
    QLabel *totalPrice;
    QPushButton *clearButton;
    QPushButton *checkoutButton;
    QPushButton *cancelButton;
    QWidget *tab_3;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *nameLabel;
    QLabel *AddressLabel;
    QLabel *phoneNumberLabel;
    QLabel *emailLabel;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *nameLineEdit;
    QLineEdit *addressLineEdit;
    QLineEdit *phoneNumberLineEdit;
    QLineEdit *emailLineEdit;
    QGridLayout *gridLayout_3;
    QPushButton *clearButton2;
    QPushButton *cancelButton2;
    QPushButton *submitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1123, 744);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        cart = new QTabWidget(centralwidget);
        cart->setObjectName(QString::fromUtf8("cart"));
        cart->setGeometry(QRect(10, 20, 981, 631));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayoutWidget_3 = new QWidget(tab_4);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(190, 90, 776, 451));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label = new QLabel(verticalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_8->addWidget(label);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        operatorIDLineEdit = new QLineEdit(verticalLayoutWidget_3);
        operatorIDLineEdit->setObjectName(QString::fromUtf8("operatorIDLineEdit"));

        verticalLayout_9->addWidget(operatorIDLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        professorMessageLabel = new QLabel(verticalLayoutWidget_3);
        professorMessageLabel->setObjectName(QString::fromUtf8("professorMessageLabel"));

        gridLayout_5->addWidget(professorMessageLabel, 0, 1, 1, 1);

        cancelButton3 = new QPushButton(verticalLayoutWidget_3);
        cancelButton3->setObjectName(QString::fromUtf8("cancelButton3"));

        gridLayout_5->addWidget(cancelButton3, 0, 0, 1, 1);


        verticalLayout_10->addLayout(gridLayout_5);

        cart->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 951, 581));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pinkJackLabel = new QLabel(gridLayoutWidget);
        pinkJackLabel->setObjectName(QString::fromUtf8("pinkJackLabel"));

        gridLayout->addWidget(pinkJackLabel, 0, 0, 1, 1);

        yJSpinBox = new QSpinBox(gridLayoutWidget);
        yJSpinBox->setObjectName(QString::fromUtf8("yJSpinBox"));

        gridLayout->addWidget(yJSpinBox, 1, 1, 1, 1);

        pShoesLabel = new QLabel(gridLayoutWidget);
        pShoesLabel->setObjectName(QString::fromUtf8("pShoesLabel"));

        gridLayout->addWidget(pShoesLabel, 4, 0, 1, 1);

        yShoesLabel = new QLabel(gridLayoutWidget);
        yShoesLabel->setObjectName(QString::fromUtf8("yShoesLabel"));

        gridLayout->addWidget(yShoesLabel, 4, 1, 1, 1);

        blueShirtLabel = new QLabel(gridLayoutWidget);
        blueShirtLabel->setObjectName(QString::fromUtf8("blueShirtLabel"));

        gridLayout->addWidget(blueShirtLabel, 2, 2, 1, 1);

        blueShoesSpinBox = new QSpinBox(gridLayoutWidget);
        blueShoesSpinBox->setObjectName(QString::fromUtf8("blueShoesSpinBox"));

        gridLayout->addWidget(blueShoesSpinBox, 5, 2, 1, 1);

        blueShirtSpinBox = new QSpinBox(gridLayoutWidget);
        blueShirtSpinBox->setObjectName(QString::fromUtf8("blueShirtSpinBox"));

        gridLayout->addWidget(blueShirtSpinBox, 3, 2, 1, 1);

        addToCart = new QPushButton(gridLayoutWidget);
        addToCart->setObjectName(QString::fromUtf8("addToCart"));

        gridLayout->addWidget(addToCart, 6, 1, 1, 1);

        bueJacketLabel = new QLabel(gridLayoutWidget);
        bueJacketLabel->setObjectName(QString::fromUtf8("bueJacketLabel"));

        gridLayout->addWidget(bueJacketLabel, 0, 2, 1, 1);

        pShirtSpinBox = new QSpinBox(gridLayoutWidget);
        pShirtSpinBox->setObjectName(QString::fromUtf8("pShirtSpinBox"));

        gridLayout->addWidget(pShirtSpinBox, 3, 0, 1, 1);

        bJSpinBox = new QSpinBox(gridLayoutWidget);
        bJSpinBox->setObjectName(QString::fromUtf8("bJSpinBox"));

        gridLayout->addWidget(bJSpinBox, 1, 2, 1, 1);

        pJSpinBox = new QSpinBox(gridLayoutWidget);
        pJSpinBox->setObjectName(QString::fromUtf8("pJSpinBox"));

        gridLayout->addWidget(pJSpinBox, 1, 0, 1, 1);

        yShoesSpinBox = new QSpinBox(gridLayoutWidget);
        yShoesSpinBox->setObjectName(QString::fromUtf8("yShoesSpinBox"));

        gridLayout->addWidget(yShoesSpinBox, 5, 1, 1, 1);

        yShirtSpinBox = new QSpinBox(gridLayoutWidget);
        yShirtSpinBox->setObjectName(QString::fromUtf8("yShirtSpinBox"));

        gridLayout->addWidget(yShirtSpinBox, 3, 1, 1, 1);

        pShoesSpinBox = new QSpinBox(gridLayoutWidget);
        pShoesSpinBox->setObjectName(QString::fromUtf8("pShoesSpinBox"));

        gridLayout->addWidget(pShoesSpinBox, 5, 0, 1, 1);

        yellowJacketLabel = new QLabel(gridLayoutWidget);
        yellowJacketLabel->setObjectName(QString::fromUtf8("yellowJacketLabel"));

        gridLayout->addWidget(yellowJacketLabel, 0, 1, 1, 1);

        bShoesLabel = new QLabel(gridLayoutWidget);
        bShoesLabel->setObjectName(QString::fromUtf8("bShoesLabel"));

        gridLayout->addWidget(bShoesLabel, 4, 2, 1, 1);

        yellowShirtLabel = new QLabel(gridLayoutWidget);
        yellowShirtLabel->setObjectName(QString::fromUtf8("yellowShirtLabel"));

        gridLayout->addWidget(yellowShirtLabel, 2, 1, 1, 1);

        pinkShirtLabel = new QLabel(gridLayoutWidget);
        pinkShirtLabel->setObjectName(QString::fromUtf8("pinkShirtLabel"));

        gridLayout->addWidget(pinkShirtLabel, 2, 0, 1, 1);

        cart->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayoutWidget = new QWidget(tab_2);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 801, 511));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        itemLabel = new QLabel(formLayoutWidget);
        itemLabel->setObjectName(QString::fromUtf8("itemLabel"));

        verticalLayout->addWidget(itemLabel);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        itemListLabel = new QLabel(formLayoutWidget);
        itemListLabel->setObjectName(QString::fromUtf8("itemListLabel"));

        verticalLayout_2->addWidget(itemListLabel);


        horizontalLayout->addLayout(verticalLayout_2);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        totalPrice = new QLabel(formLayoutWidget);
        totalPrice->setObjectName(QString::fromUtf8("totalPrice"));

        gridLayout_2->addWidget(totalPrice, 0, 1, 1, 1);

        clearButton = new QPushButton(formLayoutWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        gridLayout_2->addWidget(clearButton, 0, 0, 1, 1);

        checkoutButton = new QPushButton(formLayoutWidget);
        checkoutButton->setObjectName(QString::fromUtf8("checkoutButton"));

        gridLayout_2->addWidget(checkoutButton, 1, 1, 1, 1);

        cancelButton = new QPushButton(formLayoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout_2->addWidget(cancelButton, 1, 0, 1, 1);


        formLayout->setLayout(1, QFormLayout::FieldRole, gridLayout_2);

        cart->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        formLayoutWidget_2 = new QWidget(tab_3);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(230, 150, 391, 401));
        formLayout_3 = new QFormLayout(formLayoutWidget_2);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        nameLabel = new QLabel(formLayoutWidget_2);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout_5->addWidget(nameLabel);

        AddressLabel = new QLabel(formLayoutWidget_2);
        AddressLabel->setObjectName(QString::fromUtf8("AddressLabel"));

        verticalLayout_5->addWidget(AddressLabel);

        phoneNumberLabel = new QLabel(formLayoutWidget_2);
        phoneNumberLabel->setObjectName(QString::fromUtf8("phoneNumberLabel"));

        verticalLayout_5->addWidget(phoneNumberLabel);

        emailLabel = new QLabel(formLayoutWidget_2);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        verticalLayout_5->addWidget(emailLabel);


        horizontalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        nameLineEdit = new QLineEdit(formLayoutWidget_2);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        verticalLayout_6->addWidget(nameLineEdit);

        addressLineEdit = new QLineEdit(formLayoutWidget_2);
        addressLineEdit->setObjectName(QString::fromUtf8("addressLineEdit"));

        verticalLayout_6->addWidget(addressLineEdit);

        phoneNumberLineEdit = new QLineEdit(formLayoutWidget_2);
        phoneNumberLineEdit->setObjectName(QString::fromUtf8("phoneNumberLineEdit"));

        verticalLayout_6->addWidget(phoneNumberLineEdit);

        emailLineEdit = new QLineEdit(formLayoutWidget_2);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        verticalLayout_6->addWidget(emailLineEdit);


        horizontalLayout_7->addLayout(verticalLayout_6);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, horizontalLayout_7);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        clearButton2 = new QPushButton(formLayoutWidget_2);
        clearButton2->setObjectName(QString::fromUtf8("clearButton2"));

        gridLayout_3->addWidget(clearButton2, 0, 1, 1, 1);

        cancelButton2 = new QPushButton(formLayoutWidget_2);
        cancelButton2->setObjectName(QString::fromUtf8("cancelButton2"));

        gridLayout_3->addWidget(cancelButton2, 0, 0, 1, 1);

        submitButton = new QPushButton(formLayoutWidget_2);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));

        gridLayout_3->addWidget(submitButton, 0, 2, 1, 1);


        formLayout_3->setLayout(1, QFormLayout::FieldRole, gridLayout_3);

        cart->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1123, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        cart->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Operator Username: ", nullptr));
        professorMessageLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Hello Professor, the Operator ID can be whatever you want it to be. </p><p>The Operator ID will be present in the transaction receipt.</p></body></html>", nullptr));
        cancelButton3->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        cart->setTabText(cart->indexOf(tab_4), QApplication::translate("MainWindow", "Sign In", nullptr));
        pinkJackLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Pink Jacket </p><p>Price: $30</p><p>Item ID: 1</p></body></html>", nullptr));
        pShoesLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Pink Shoes</p><p>Price: $30</p><p>Item ID: 7</p></body></html>", nullptr));
        yShoesLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Yellow Shoes</p><p>Price: $22</p><p>Item ID: 8</p></body></html>", nullptr));
        blueShirtLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Blue Shirt</p><p>Price: $11</p><p>Item ID: 6</p></body></html>", nullptr));
        addToCart->setText(QApplication::translate("MainWindow", "Add To Cart", nullptr));
        bueJacketLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Blue Jacket</p><p>Price: $ 20</p><p>Item ID: 3</p></body></html>", nullptr));
        yellowJacketLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Yellow Jacket</p><p>Price: $25</p><p>Item ID: 2</p></body></html>", nullptr));
        bShoesLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Blue Shoes</p><p>Price: $ 40</p><p>Item ID: 9</p></body></html>", nullptr));
        yellowShirtLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Yellow Shirt</p><p>Price: $12</p><p>Item ID: 5</p></body></html>", nullptr));
        pinkShirtLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Pink Shirt</p><p>Price: $15</p><p>Item ID: 4</p></body></html>", nullptr));
        cart->setTabText(cart->indexOf(tab), QApplication::translate("MainWindow", "Store", nullptr));
        itemLabel->setText(QApplication::translate("MainWindow", "Items:", nullptr));
        itemListLabel->setText(QString());
        totalPrice->setText(QApplication::translate("MainWindow", "Total Price: ", nullptr));
        clearButton->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        checkoutButton->setText(QApplication::translate("MainWindow", "Checkout", nullptr));
        cancelButton->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        cart->setTabText(cart->indexOf(tab_2), QApplication::translate("MainWindow", "Cart", nullptr));
        nameLabel->setText(QApplication::translate("MainWindow", "Name: ", nullptr));
        AddressLabel->setText(QApplication::translate("MainWindow", "Address: ", nullptr));
        phoneNumberLabel->setText(QApplication::translate("MainWindow", "Phone Number: ", nullptr));
        emailLabel->setText(QApplication::translate("MainWindow", "Email Address: ", nullptr));
        nameLineEdit->setInputMask(QApplication::translate("MainWindow", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", nullptr));
        addressLineEdit->setInputMask(QString());
        phoneNumberLineEdit->setInputMask(QApplication::translate("MainWindow", "9999999999", nullptr));
        emailLineEdit->setInputMask(QApplication::translate("MainWindow", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", nullptr));
        clearButton2->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        cancelButton2->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        submitButton->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        cart->setTabText(cart->indexOf(tab_3), QApplication::translate("MainWindow", "Checkout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
