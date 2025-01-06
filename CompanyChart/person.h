#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include "employer.h"
#include "position.h"

class employer;
class position;

class Person
{
private:
    std::string m_Name;
    bool m_Employed;
    position m_position;
    employer m_employer;
public:
    Person(std::string name);
    std::string toString() const;
    //void setPosition(employer* newC, position* newP);
};

#endif // PERSON_H
