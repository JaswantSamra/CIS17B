#include "person.h"
#include <iostream>
using namespace std;

QList<Person*> Person::s_unemploymentLine;

Person::Person()
{
    m_Name = "";
    m_Employed = false;
    m_Position = nullptr;
    m_Employer = nullptr;
}

Person::Person(string name)
{
    m_Name = name;
    m_Employed = false;
    m_Position = nullptr;
    m_Employer = nullptr;
    s_unemploymentLine.append(this);
}

Position* Person::getPosition()
{
    if(m_Position == NULL)
    {
        std::cout << "Damn, this person is not employed!" << endl;
    }
    return m_Position;
}

Employer* Person::getEmployer()
{
    if(m_Position == NULL)
    {
        std::cout << "Damn, this person is not employed!" << endl;
    }
   return m_Employer;
}

void Person::setHire(bool employed)
{
    m_Employed = employed;
}

void Person::setPosition(Position * position)
{
    if(position != NULL)
    {
        m_Position = position;
        setHire(true);
    }
    else
    {
        m_Position = NULL;
        setHire(false);
    }
}

void Person::setEmployer(Employer * employer)
{
    if(employer != NULL)
    {
        m_Employer = employer;
        setHire(true);
    }
    else
    {
        m_Employer = NULL;
        setHire(false);
    }
}

void Person::apply(Position * p, Employer* e)
{
    e->hire(this, p);
}

QString Person::returnName()
{
  QString str = QString::fromStdString(this->m_Name);
  return str;
}

string Person::toString()
{
    string result = m_Name;
    string employer = "\n" + m_Employer->toString();
    string position = "\n" + m_Position->toString();
    return result + employer + position;
}

