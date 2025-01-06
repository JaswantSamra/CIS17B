#include "orderform.h"
/* You must implement the missing methods in this file */
#include "order.h"
OrderForm::OrderForm(QWidget *parent)
    : QWidget(parent)
{ 
    m_Order = new Order();
    vLayout = new QVBoxLayout;
    QLabel *name = new QLabel("Name: ");
    QLabel *date = new QLabel("Date: ");
    QLabel *quantity = new QLabel("Quantity: ");
    QLabel *unitPrice = new QLabel("Unit Price: ");
    QLabel *totalPrice = new QLabel("Total Price: ");
    QPushButton *submitButton = new QPushButton("submit");

    vLayout->addWidget(name);
    vLayout->addWidget(date);
    vLayout->addWidget(quantity);
    vLayout->addWidget(unitPrice);
    vLayout->addWidget(totalPrice);
    vLayout->addWidget(submitButton);

    vLayout2 = new QVBoxLayout;
    m_nameEdit = new QLineEdit;
    m_dateEdit = new QDateEdit;
    m_quantitySpin = new QSpinBox;
    m_unitPrice = new QLineEdit;
    m_totalPrice = new QLabel();
    QPushButton *cancelButton = new QPushButton("cancel");

    vLayout2->addWidget(m_nameEdit);
    vLayout2->addWidget(m_dateEdit);
    vLayout2->addWidget(m_quantitySpin);
    vLayout2->addWidget(m_unitPrice);
    vLayout2->addWidget(m_totalPrice);
    vLayout2->addWidget(cancelButton);

    QHBoxLayout *mainLayout = new QHBoxLayout;

    mainLayout->addLayout(vLayout);
    mainLayout->addLayout(vLayout2);

    this->setLayout(mainLayout);
    this->setWindowTitle("Order Form");

//    m_nameEdit = nameEdit->text();
//    m_dateEdit = dateEdit->date().toString();
//    m_quantitySpin = quantitySpin->text();
    m_cancelButton = cancelButton;
    m_submitButton = submitButton;
    connect(m_submitButton, SIGNAL(clicked()), this, SLOT(submit()));
    connect(m_cancelButton, SIGNAL(clicked()), this , SLOT(cancel()));
}

OrderForm::~OrderForm()
{
    delete this;
}


void OrderForm::setOrder(Order* prod){
    m_Order = prod;
}
void OrderForm::submit(){
        m_Order->setName(m_nameEdit->text());
        m_Order->setDateAdded(m_dateEdit->date());
        m_Order->setQuantity(m_quantitySpin->value());
        m_Order->setPrice(m_unitPrice->text().toDouble());

        double price = (m_Order->price() * m_Order->quantity());
        QString Price = QString::number(price);
        QString outPut = "$ " + Price;
        m_totalPrice->setText(outPut);
}

void OrderForm::cancel(){
        m_nameEdit->clear();
        m_dateEdit->clear();
        m_quantitySpin->clear();
        m_unitPrice->clear();
        this->close();
}
