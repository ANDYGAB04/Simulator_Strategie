#pragma once
#include <string>
#include <vector>
#include<map>


using namespace std;
class Civilizatie
{
private:
	string nume;
	int id;

public:
	Civilizatie();
	~Civilizatie();
	void AdaugareCivilizatie(string nume, int id);
	void ListareCivilizatii(string nume,int id,map<string,int>&listacivilizatii);

	map<string, int> listacivilizatii;
};

