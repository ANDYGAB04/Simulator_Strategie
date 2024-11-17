#pragma once
#include <string>
#include <vector>
#include "Resurse.h"
using namespace std;
class GestionareResurse
{
private:
	int numar_resurse;
	string NumeCiv;
	int id;
	string Cladire;
public:
	GestionareResurse(string NumeCiv, int id);
	~GestionareResurse();
	vector<Resurse> AdaugareResurse(string NumeCiv, int id, string Cladire,vector<Resurse> ListaResurse);
};

