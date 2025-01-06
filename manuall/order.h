#ifndef ORDER_H
#define ORDER_H

#include <QObject>
class Order : public QObject
{
public:
    explicit Order(QObject *parent = nullptr);
    Order();
signals:
};

#endif // ORDER_H
