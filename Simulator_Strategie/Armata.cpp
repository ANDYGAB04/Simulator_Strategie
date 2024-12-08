#include "Armata.h"



void ResursaMilitara::setViata(int viata)
{
	this->viata = viata;
}

void ResursaMilitara::setAtac(int atac)
{
	this->atac = atac;
}
int ResursaMilitara::getAtac() const
{
	return atac;
}
vector<ResursaMilitara*> Armata::getResursaMilitare() const
{
	return armata;
}
void Armata::adaugaResursaMilitare(ResursaMilitara* resursa)
{
	armata.push_back(resursa);
}

Barbar::Barbar()
{
	setNume("Barbar");
	setViata(100);
	setAtac(20);
}

Arcas::Arcas()
{
	setNume("Arcas");
	setViata(50);
	setAtac(30);
}

Gigant::Gigant()
{
	setNume("Gigant");
	setViata(200);
	setAtac(10);
}
