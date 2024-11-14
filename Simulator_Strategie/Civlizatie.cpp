#include "Civlizatie.h"
#include <iostream>
using namespace std;

Civilizatie::Civilizatie()
{
}

Civilizatie::~Civilizatie()
{
}

void Civilizatie::AdaugareCivilizatie(string nume, int id)
{
	this->nume = nume;
	this->id = id;
	//cout << "Civilizatia " << nume << " a fost adaugata cu id-ul " << id << "." << endl;
}

unordered_map<string,int> Civilizatie::ListareCivilizatii(string nume, int id)
{
	this->nume = nume;
	this->id = id;
	unordered_map<string, int> listacivilizatii;
	listacivilizatii[nume] = id;
	return listacivilizatii;
	//cout << "Civilizatia " << nume << " a fost adaugata cu id-ul " << id << "." << endl;
}
