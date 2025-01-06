#ifndef POSITION_H
#define POSITION_H
#include <string>
#include <QString>

using namespace std;

class Position
{
private:
    string m_Name;
    string m_Description;
public:
    Position(string name, string description);
    QString getName();
    string toString();
};

#endif // POSITION_H
