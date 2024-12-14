#pragma once
#include <string>
#include <vector>
#include<map>
#include<unordered_map>
#include "Cladire.h"
#include "Resursa.h"
#include "Armata.h"

using namespace std;

class Civilizatie
{
public:
	Civilizatie();
	~Civilizatie();  

	void updateResursa(Resursa::TipResursa tipResursa, int cantitate);
	void updateCladire(Cladire::TipCladire tipCladire,int numarcladire);
	void NumeCivilizatie(string nume);
	string getNume() const;
	int getNumarCladire(Cladire::TipCladire tipCladire) const;
	int getCantitateResursa(Resursa::TipResursa tipResursa) const;
	void AdaugareUnitate(ResursaMilitara* unitate);
	void setHealth(int health);
	int getHealth() const;
	vector<ResursaMilitara*> getArmata() const;
	vector<Cladire*> getCladiri() const;
	vector<Resursa*> getResurse() const;	

private:
	string nume;
	vector<Cladire*> cladiri;
	vector<Resursa*> resurse;
	int health;
	Armata* armata;

};
