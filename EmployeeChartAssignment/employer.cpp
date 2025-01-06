#include "employer.h"
#include <iostream>
#include <QDebug>
#include<cstdlib>
#include <QRandomGenerator>
using namespace std;

void Employer::hire(Person* newHire, Position * pos)
{
    int i = QRandomGenerator::global()->generate();
    addOpenPosition(pos);
    if(i%2 == 0)
    {
        newHire->setEmployer(this);
        newHire->setPosition(pos);
        newHire->s_unemploymentLine.removeOne(newHire);
        employees.push_back(newHire);
        positions.removeOne(pos);
        qDebug() << newHire->returnName() + " has been hired!";
    }
    else
    {
        qDebug() << newHire->returnName() + " could not be hired!";
    }
}

void Employer::printEmployees()
{
    if(employees.size() > 0)
    {
        int j = employees.size();
        for(int i = 0; i < j; i++)
        {
           cout << "1. ";
           cout << employees[i]->toString();
           cout << endl;
        }
    }
}

void Employer::addOpenPosition(Position *pos)
{
    positions.append(pos);
}

/*QStringList Employer::findJobs()
{
    QStringList employeeList;
    QString str = "";
    foreach(Position* p, positions)
    {
        str = p->getName();
        employeeList.append(str);
    }
    return employeeList;
}*/

QList<Position*> Employer::findJobs()
{
    return positions;
}

Employer::Employer(string name, string market)
{
    m_Name = name;
    m_Market = market;
}

Employer::~Employer()
{
}

string Employer::toString()
{
    return "Employer: " + m_Name + "\nMarket: " + m_Market;
}


