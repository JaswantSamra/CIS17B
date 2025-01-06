#include "position.h"

Position::Position(string name, string description)
{
    this->m_Name = name;
    this->m_Description = description;
}

QString Position::getName()
{
    QString str = QString::fromStdString(this->m_Name);
    return str;
}

string Position::toString()
{
    return "Position: " + m_Name + "\nDescription: " + m_Description;
}
