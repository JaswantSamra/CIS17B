#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <QString>
#include "position.h"
#include "employer.h"
using namespace std;

class Position;
class Employer;

class Person
{
private:
    string m_Name;
    bool m_Employed;
    Position* m_Position;
    Employer *m_Employer;
    void setHire(bool employed);
public:
    Person();
    Person(string name);
    Position* getPosition();
    Employer* getEmployer();
    void setPosition(Position*);
    void setEmployer(Employer*);
    void apply(Position*, Employer*);
    QString returnName();
    string toString();

    static QList<Person*> s_unemploymentLine;
};

#endif // PERSON_H
