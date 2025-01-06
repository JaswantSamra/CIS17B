#include <QCoreApplication>
#include "person.h"
#include "position.h"
#include "employer.h"
#include <QDebug>
#include <iostream>
using namespace std;

class Person;
class Position;
class Employer;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Employer employer0("Galactic Empire", "The Empire");
    Employer employer1("Rebel Forces", "The Anti-Empire");

    Person person1("Darth Vader");
    Person person2("C3PO");
    Person person3("Data");

    cout << "Number of Unemployed: ";
    qDebug() << Person::s_unemploymentLine.size();
    QList<Person *> personList = Person::s_unemploymentLine;
    cout << "Unemployed: " << endl;
    if(!personList.empty())
    {
        foreach(Person* p, personList)
        {
            qDebug() << p->returnName();
        }
    }

    cout << endl;

    Position position1("Tie Fighter Pilot", "Pilot");
    Position position2("Protocol Android", "Android");
    Position position3("Captain", "Captain of the fleet");

    person1.apply(&position3, &employer0);
    person2.apply(&position2, &employer1);
    person3.apply(&position1, &employer1);

    QList<Position *> positionList = employer0.findJobs();
    QList<Position *> positionList1 = employer1.findJobs();

    if(!positionList.empty() || !positionList1.empty())
    {
        qDebug() << "\nAvailable Positions: ";
        if(!positionList.empty())
        {
            foreach(Position* p, positionList)
            {
                qDebug() << p->getName();
            }
        }

        if(!positionList1.empty())
        {
            foreach(Position* p, positionList1)
            {
                qDebug() << p->getName();
            }
        }
    }
    else
    {
        qDebug() << "\nNo available positions!" << endl;
    }


    // testing code

    //Employer employer0("StarFleet Federation", "Fightin Stuff"), employer1("Borg", "Attack them");
    //Person person1("Jean-Luc Picard"), person2("Wesley Crusher"), person3("Anakin Skywalker");
    //Position pos1("Star Captain", "Captain of the fleet"), pos2("Cyborg", "Cyborg Captain"), pos3("Admiral", "Admiral of the fleet");

    //employer0.hire(&person1,&pos1);
    //employer0.hire(&person3,&pos3);
    //employer1.hire(&person2,&pos2);

    //person1.apply(&pos1, &employer0);

    //employer0.printEmployees();
    //employer0.addOpenPosition(&pos1);
    //employer0.addOpenPosition(&pos2);
    //employer0.addOpenPosition(&pos3);
    //QString joinedOpenPositionString = employer0.findJobs().join(", ");
    //qDebug() << joinedOpenPositionString;

    /*QList<Position *> positionList = employer1.findJobs();
    foreach(Position* p, positionList)
    {
        qDebug() << p->getName();
    }*/

    return a.exec();
}
