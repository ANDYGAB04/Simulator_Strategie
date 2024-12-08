#pragma once

#include "Civlizatie.h"
#include <vector>
#include <cstdlib>
#include "Civlizatie.h"
#include "Cladire.h"
#include "Resursa.h"
#include "Armata.h"
#include <ctime>
#include <cstdlib>

class SimulatorCivilizatie
{
private:
	vector<Civilizatie> civilizatii;
	int indexcivilizatie;
public:
	SimulatorCivilizatie();
	void init();
	void run();
	void cladiri(int &indexcivilizatie);
	void resurse(int indexcivilizatie);
	void armata(int& indexcivilizatie);
};

