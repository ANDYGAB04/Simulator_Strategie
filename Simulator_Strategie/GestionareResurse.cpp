#include "GestionareResurse.h"
#include <ctime>
GestionareResurse::GestionareResurse(string NumeCiv, int id)
{
	this->NumeCiv = NumeCiv;
	this->id = id;
	srand(time(nullptr));

}

GestionareResurse::~GestionareResurse()
{
}

 vector<Resurse> GestionareResurse::AdaugareResurse(string NumeCiv, int id,string Cladire, vector<Resurse> ListaResurse)
{
	 this->Cladire = Cladire;
	 vector<Resurse> resurse = ListaResurse;
	vector<string> nume_resurse = { "Lemn","Fier","Bani","Paine","Caramida","Grau"};
	if (Cladire == "Primarie") {
		auto it = find_if(resurse.begin(), resurse.end(), [](const Resurse& r) { return r.getNumeResursa() == "Bani"; });
		if (it != resurse.end())
		{
			it->setNumarResurse(it->getNumarResurse() + (rand() % nume_resurse.size()));
		}
	}
	else if (Cladire == "Gater") {
		auto it = find_if(resurse.begin(), resurse.end(), [](const Resurse& r) { return r.getNumeResursa() == "Lemn"; });
		if (it != resurse.end())
		{
			it->setNumarResurse(it->getNumarResurse() + (rand() % nume_resurse.size()));
		}
	}
	else if (Cladire == "Moara") {
		auto it = find_if(resurse.begin(), resurse.end(), [](const Resurse& r) { return r.getNumeResursa() == "Paine"; });
		if (it != resurse.end())
		{
			it->setNumarResurse(it->getNumarResurse() + (rand() % nume_resurse.size()));
		}
	}
	else if (Cladire == "Mina") {	
		auto it = find_if(resurse.begin(), resurse.end(), [](const Resurse& r) { return r.getNumeResursa() == "Fier"; });
		if (it != resurse.end())
		{
			it->setNumarResurse(it->getNumarResurse() + (rand() % nume_resurse.size()));
		}
	}
	else if (Cladire == "Caramiderie") {
		auto it = find_if(resurse.begin(), resurse.end(), [](const Resurse& r) { return r.getNumeResursa() == "Caramida"; });
		if (it != resurse.end())
		{
			it->setNumarResurse(it->getNumarResurse() + (rand() % nume_resurse.size()));
		}
	}
	else if (Cladire == "Ferma") {	
		auto it = find_if(resurse.begin(), resurse.end(), [](const Resurse& r) { return r.getNumeResursa() == "Grau"; });
		if (it != resurse.end())
		{
			it->setNumarResurse(it->getNumarResurse() + (rand() % nume_resurse.size()));
		}
	}

		return resurse;
	}
