#pragma once
#include <string>
#include <vector>
using namespace std;
class Armata
{
public:
	int viata;
	int atac;
	string nume;
	int numarunitati;
	vector<Armata> armata(string nume, int viata,int atac,int numarunitati);
};
class Barbari : public Armata
{
public:
	Barbari(string nume, int viata, int atac, int numarunitati,vector<Armata>& armata);
};
class Arcasi : public Armata
{
public:
	Arcasi(string nume, int viata, int atac, int numarunitati, vector<Armata>& armata);
};
class Giganti : public Armata
{
public:
	Giganti(string nume, int viata, int atac, int numarunitati, vector<Armata>& armata);
};

