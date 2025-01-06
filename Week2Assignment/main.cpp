#include <QCoreApplication>

#include <iostream>
#include <string>
#include <QList>
#include <QtDebug>
using namespace std;

class Person{
    class Position;
    class Employer;
private:
    static QList<Person*> s_unemploymentLine;
    string m_Name = " " ;
    bool m_Employed = false;
    Position *m_Position = NULL;
    Employer *m_Employer = NULL;
    void setHire(bool hire){
        m_Employed = hire;
    }
public:
    Person(){
        m_Name = " ";
        m_Employed = false;
        m_Position = NULL;
        m_Employer = NULL;
    }
    Person(string name){
    string m_Name = name;
    m_Employed = false;
    m_Position = NULL;
    m_Employer = NULL;
    s_unemploymentLine.append(this);
    }
    ~Person(){

    }
    void setPosition(Position *pos){
        if(pos != NULL){
            m_Position = pos;
            setHire(true);
            for(int i = 0; i < s_unemploymentLine.length(); ++i){
                if(s_unemploymentLine[i] == this){
                    s_unemploymentLine.removeAt(i);
                    return;
                }
            }
        }else{
            m_Position = NULL;
            setHire(false);
        }
    }
    void setEmployer(Employer* employer){
        if(employer !=NULL){
            m_Employer = employer;
            setHire(true);
        }else{
            m_Employer = NULL;
            setHire(false);
        }
    }
    string getPosition(Employer NewC, Position newP);
    Position*getPosition(){
        return m_Position;
    }
    Employer *getEmployer(){
        return m_Employer;
    }
   string toString(){
        string res = "Name" + m_Name + "\n";
        bool condition = (m_Employed) && (m_Employer != NULL) &&
        (m_Position != NULL);
        if(condition){
        res += m_Employer->setEmployer();
        res += m_Position->toString();
        }
        else
        {
        res += "Not Employed :/\n";
        }
        return res;
        }
    };
class Position{
private:
    string m_Name;
    string m_Description;
public:
    Position(){
    m_Name = " ";
    m_Description = " ";
    }
    Position(string name, string description){
        string m_Name = name;
        string m_Description = description;
    }
    ~Position(){

    }
    string toString(){
        return "Name: " + m_Name + "\nDescription: " + m_Description = "\n";
    }
};
class Employer{
private:
    string m_Name;
    string m_Market;
    QList<Position*> * positions;
public:
    Employer(){
        m_Name = "Name";
        m_Market = "Market";
        positions = new QList<Position*>;
    }
    Employer(string name, string market){
    string m_Name = name;
    string m_Market = market;
    positions = new QList<Position*>();
    }
    ~Employer(){
     delete positions;
    }
    int newRange(){
    int rValue = (rand()%(2)) + 1;
    return rValue;
    }
    void hire(Person * newHire, Position * pos){
        int v = newRange();
        switch(v){
        case 1:
            //newRange randomly generates
            break;
        case 2:
            newHire->setEmployer(this);
            newHire->setPosition(pos);
            positions -> append(pos);
            break;
        default:
            break;
        }
    }
    QList<Position*> * findJobs(){
        return positions;
    }
    string getEmployer(){
    return m_Name;
    }
    string toString(){
        return "Company name: " + m_Name + "\nMarket: " + m_Market;
    }
};

int main()
{
    Employer e1("Starfleet Federation", "Ah yes, Karen got him fired.");
    Employer e2("BORG", "Karen struck again");
    Person p1("Jean-Luc Picard");
    Person p2("Wesley Crusher");
    Person p3("John Wick");
    Person p4("Leon Kennedy");
    Person p5("Sora");
    Person p6("Terra");
    Person p7("Cloud");
    Person p8("Riku");
    Position pos1("Space person", "Idk go attack the sun");
    Position pos2("Cyborg", "Kill all the humans and make more of yourself");
    Position pos3("Good guy hitman", "Idk go find your dog");
    Position pos4("Beat Cop", "Shouldn't you find Ada Wong?");
    Position pos5("Keyblade Wielder", "wHerE's rIkU?");
    Position pos6("Failed Keyblade Master", "Shouldn't you be taking your Mastery Exam?");
    Position pos7("Hades' Puppet","gets beat by an 11 year old kid with a Keyblade");
    Position pos8("Dark Keyblade Wielder","iM a gOoD guY NoW");
    e1.hire(&p1, &pos1);
    e2.hire(&p2, &pos2);
    e1.hire(&p3,&pos3);
    e1.hire(&p4, &pos4);
    e2.hire(&p5, &pos5);
    e2.hire(&p6, &pos6);
    e2.hire(&p7, &pos7);
    e2.hire(&p8,&pos8);

    QList<Position*> * positions;
    QList<Position*> * positions2;

    void showPositions(positions);
    void showPositions(positions2);

    p1.toString();
    p2.toString();
    p3.toString();
    p4.toString();
    p5.toString();
    p6.toString();
    p7.toString();
    p8.toString();
    return 0;
    }
    void showPositions(QList<Position*>* pos)
    {
    qDebug().noquote() << "Here is a list of positions\n";
    for(int x = 0; x < pos->length(); ++x)
    {
    qDebug().noquote() << "Position #" << (x+1);
    qDebug().noquote() << "\n" << pos->at(x)->toString();
    }
   }
