#include "position.h"

Position::Position(string name, string description)
{
    this->m_Name = name;
    this->m_Description = description;
}

QString Position::getName()
{
    QString s = QString::fromStdString(this->m_Name);
    return s;
}

string Position::toString()
{
    return "Position: " + m_Name + "\nDescription: " + m_Description;
}
