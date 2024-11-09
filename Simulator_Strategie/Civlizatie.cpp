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

void Civilizatie::ListareCivilizatii(string nume, int id, map<string, int>&listacivilizatii)
{
	this->nume = nume;
	this->id = id;
	listacivilizatii.insert(pair<string, int>(nume, id));
	//cout << "Civilizatia " << nume << " a fost adaugata cu id-ul " << id << "." << endl;
}
