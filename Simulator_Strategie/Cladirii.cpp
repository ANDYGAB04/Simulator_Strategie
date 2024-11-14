#include "Cladirii.h"
using namespace std;

Cladiri::Cladiri()
{
}

Cladiri::~Cladiri()
{
}

map<string,vector<string>> Cladiri::AdaugareCladiri( int _id, int _numarcladire, string _civ)
{
    this->numarcladire = _numarcladire;
    this->id = _id;
	this->civ = _civ;
    string cladire;
    map<string, vector<string>> listacladiri;
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
        return listacladiri; 
    }
   // if (find(listacladiri[civ].begin(), listacladiri[civ].end(), cladire) == listacladiri[civ].end())
   // {
        listacladiri[civ].push_back(cladire);
   // }
    return listacladiri;
}