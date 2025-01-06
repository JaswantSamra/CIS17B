#ifndef ORDERFORM_H
#define ORDERFORM_H

#include <QtGui>
#include <QObject>
#include <QWidget>
#include <QLineEdit>
#include <QDateEdit>
#include <QSpinBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QAbstractButton>

class Order;

class OrderForm : public QWidget
{
    Q_OBJECT
public:
    OrderForm(QWidget* parent =0);
    ~OrderForm();
    void setOrder(Order* prod);
public slots:
    void submit();
    void cancel();


private:
    QVBoxLayout *vLayout = new QVBoxLayout;
    QVBoxLayout *vLayout2 = new QVBoxLayout;
    QLineEdit* m_nameEdit;
    QDateEdit* m_dateEdit;
    QLineEdit *m_unitPrice;
    QSpinBox* m_quantitySpin;
    QLabel *m_totalPrice;
    QPushButton* m_submitButton;
    QPushButton* m_cancelButton;
    Order *m_Order;
};



#endif        //  #ifndef ORDERFORM_H
