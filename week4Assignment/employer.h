#ifndef EMPLOYER_H
#define EMPLOYER_H
#include <string>
#include <vector>
#include <QList>
#include "person.h"
#include "position.h"
using namespace std;

class Person;
class Position;

class Employer
{
private:
    string m_Name;
    string m_Market;
    vector<Person*> employees;
    QList<Position*> positions;

public:
    void hire(Person* newHire, Position*pos);
    void printEmployees();
    void addOpenPosition(Position* pos);
    QList<Position*> findJobs();
    //QStringList findJobs();
    Employer(string name, string market);
    ~Employer();
    string toString();
};

#endif // EMPLOYER_H
