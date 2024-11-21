#include "Armata.h"

vector<Armata> Armata::armata(string nume, int viata, int atac,int numarunitati)
{
	return vector<Armata>();
}

Barbari::Barbari(string nume, int viata, int atac, int numarunitati,vector<Armata>& armata)
{
	this->viata = 100;
	this->atac = 10;
	this->nume = "Barbari";
	this->numarunitati = numarunitati;
	numarunitati++;
	armata.push_back(*this);	

}

Arcasi::Arcasi(string nume, int viata, int atac, int numarunitati, vector<Armata>& armata)
{
	this->viata = 50;
	this->atac = 20;
	this->nume = "Arcasi";
	this->numarunitati = numarunitati;
	numarunitati++;
	armata.push_back(*this);
}

Giganti::Giganti(string nume, int viata, int atac,  int numarunitati, vector<Armata>& armata)
{
	this->viata = 200;
	this->atac = 50;
	this->nume = "Giganti";
	this->numarunitati = numarunitati;
	numarunitati++;
	armata.push_back(*this);
}

