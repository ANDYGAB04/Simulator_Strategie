#pragma once
#include <string>
using namespace std;

class Resurse
{
private:
    string nume_resursa;
    int numar_resurse;
public:
    Resurse(string _nume_resursa, int numar_resurse);
    ~Resurse();
    int getNumarResurse() const;
    void setNumarResurse(int numar_resurse);
    string getNumeResursa() const; // Marked as const
};


