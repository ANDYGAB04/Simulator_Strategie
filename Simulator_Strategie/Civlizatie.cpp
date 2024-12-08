#include "Civlizatie.h"
#include <iostream>
using namespace std;


Civilizatie::Civilizatie()
 :armata(new Armata())
{
    srand(static_cast<unsigned int>(time(nullptr)));
}

Civilizatie::~Civilizatie()
{
}



void Civilizatie::updateResursa(Resursa::TipResursa tipResursa, int cantitate)
{
    for (Resursa* resursa : resurse) {
        if (static_cast<int>(resursa->getTipResursa()) == static_cast<int>(tipResursa)) {
            resursa->setNumarResursa(resursa->getNumarResursa() + cantitate);
            return;
        }
    }
	resurse.push_back(new Resursa(tipResursa, cantitate));
}

  
void Civilizatie::updateCladire(Cladire::TipCladire tipCladire, int numarCladire)  
{  
for (Cladire* cladire : cladiri) {  
 if (static_cast<int>(cladire->getTip()) == static_cast<int>(tipCladire)) {
cladire->setNumarCladire(numarCladire);  
 return;  
    }  
   }  
 Cladire* newCladire = new Cladire(tipCladire);
 newCladire->setNumarCladire(numarCladire);
 cladiri.push_back(newCladire);
}

void Civilizatie::NumeCivilizatie(string nume)
{
	this->nume = nume;
}

string Civilizatie::getNume() const
{
    return nume;

}

int Civilizatie::getNumarCladire(Cladire::TipCladire tipCladire) const  
{  
   for (const Cladire* cladire : cladiri) {  
       if (static_cast<int>(cladire->getTip()) == static_cast<int>(tipCladire)) {  
           return cladire->getNumarCladire();  
       }  
   }  
   return 0;  
}
int Civilizatie::getCantitateResursa(Resursa::TipResursa tipResursa) const
{
    for (const Resursa* resursa : resurse) {
        if (static_cast<int>(resursa->getTipResursa()) == static_cast<int>(tipResursa)) {
            return resursa->getNumarResursa();
        }
    }
    return 0;
}

void Civilizatie::AdaugareUnitate(ResursaMilitara* unitate)
{
	armata->adaugaResursaMilitare(unitate);
}

void Civilizatie::setHealth(int health)
{
	this->health = health;
}
int Civilizatie::getHealth() const
{
	return health;
}

vector<ResursaMilitara*> Civilizatie::getArmata() const
{
	return armata->getResursaMilitare();
}


