#ifndef EMPLOYER_H
#define EMPLOYER_H
#include <iostream>
//#include "person.h"
//#include "position.h"

class person;
class position;

class Employer
{
private:
    std::string m_Name;
    std::string m_Market;
public:
    Employer(std::string name, std::string market);
    bool hire(person& newHire, position* pos);
};

#endif // EMPLOYER_H
