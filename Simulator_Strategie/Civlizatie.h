#pragma once
#include <string>
#include <vector>
#include<map>
#include<unordered_map>


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
	unordered_map<string, int> ListareCivilizatii(string nume,int id);
};

