#pragma once
#include <string>
#include <vector>
using namespace std;

class ResursaMilitara {
public:
	ResursaMilitara() : viata(0), atac(0) {} 
	void setViata(int viata);
	void setAtac(int atac);
	void setNume(string nume) { this->nume = nume; }
	int getAtac() const;
private:	
	string nume;
	int viata;
	int atac;
};

class Armata
{
public:
	vector<ResursaMilitara*> getResursaMilitare() const;
	void adaugaResursaMilitare(ResursaMilitara* resursa);
private:
  vector<ResursaMilitara*> armata;
};

class Barbar : public ResursaMilitara
{
public:
	Barbar();
};

class Arcas : public ResursaMilitara
{
public:
	Arcas();
};

class Gigant : public ResursaMilitara
{
public:
	Gigant();
};
