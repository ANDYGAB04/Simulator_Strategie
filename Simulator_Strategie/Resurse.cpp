#include "Resurse.h"

Resurse::Resurse(string _nume_resursa, int numar_resurse)
	: nume_resursa(_nume_resursa), numar_resurse(numar_resurse)
{
}

Resurse::~Resurse()
{
}

int Resurse::getNumarResurse() const
{
	return numar_resurse;
}

void Resurse::setNumarResurse(int numar_resurse)
{
	this->numar_resurse = numar_resurse;
}

string Resurse::getNumeResursa() const
{
	return nume_resursa;
}
