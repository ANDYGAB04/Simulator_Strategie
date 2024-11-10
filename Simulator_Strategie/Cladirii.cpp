#include "Cladirii.h"
using namespace std;

Cladiri::Cladiri()
{
}

Cladiri::~Cladiri()
{
}

void Cladiri::AdaugareCladiri(map<string, int>& listacladiri, int _id, int _numarcladire)
{
    this->numarcladire = _numarcladire;
    this->id = _id;
    string cladire;

    switch (numarcladire)
    {
    case 0:
        cladire = "Primarie";
        break;
    case 1:
        cladire = "Moara";
        break;
    case 2:
        cladire = "Gater";
        break;
    case 3:
        cladire = "Mina";
        break;
    case 4:
        cladire = "Caramiderie";
        break;
    case 5:
        cladire = "Ferma";
        break;
    default:
        return; 
    }
    if (listacladiri.find(cladire) == listacladiri.end())
    {
        listacladiri.insert(pair<string, int>(cladire, id));
    }
    else
    {
        cout << "Constructia " << cladire << " exista deja si nu poate fi construita din nou." << endl;
    }
}