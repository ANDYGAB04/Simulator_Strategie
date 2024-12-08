#include "SimulatorCivilizatie.h"  
#include <thread>
#include <chrono>

SimulatorCivilizatie::SimulatorCivilizatie()  
{  
    srand(static_cast<unsigned int>(time(nullptr)));
}  

void SimulatorCivilizatie::init()  
{  
   for (auto i = 0; i < 2; i++) {  
       Civilizatie civilizatie;  
       string NumeCiviliatie;  
       cout << "Nume civilizatie " << i+1<< ": ";  
       cin >> NumeCiviliatie;  
       civilizatie.NumeCivilizatie(NumeCiviliatie);
       civilizatie.updateCladire(Cladire::TipCladire::Primarie, 1);
	   //civilizatie.AdaugareUnitate(new Barbar());
	   civilizatie.setHealth(100);
       civilizatie.updateResursa(Resursa::TipResursa::Bani,5);
       civilizatii.push_back(civilizatie);  
   }  
  /* for (const auto& civ : civilizatii) {
       cout << "Civilizatie: " << civ.getNume() << endl;
       cout << "Primarie: " << civ.getNumarCladire(Cladire::TipCladire::Primarie) << endl;
       cout << "Bani: " << civ.getCantitateResursa(Resursa::TipResursa::Bani) << endl;
       }
   */
   system("cls");
}  

void SimulatorCivilizatie::run()
{
	while (civilizatii[0].getHealth()>0 && civilizatii[1].getHealth() > 0)
	{
		for (int i = 0; i < civilizatii.size(); i++)
		{
			cout << "Civilizatie: " << civilizatii[i].getNume() << endl;
			cout << "1. Construieste cladire" << endl;
			cout << "2. Colecteaza resurse" << endl;
			cout << "3. Construieste armata" << endl;
			cout << "Introduceti optiunea: ";
			int optiune;
			cin >> optiune;
			switch (optiune)
			{
			case 1:
				system("cls");
				cladiri(i);
				break;
			case 2:
				system("cls");
				resurse(i);
				this_thread::sleep_for(chrono::seconds(3));
				system("cls");
				break;
			case 3:
				system("cls");
				armata(i);
				break;
			default:
				break;
			}
			if (i == -1) {
				i++;
				if (i == 1)
				for (const auto& unit : civilizatii[i].getArmata())
				{
					civilizatii[i-1].setHealth(civilizatii[i-1].getHealth() - unit->getAtac());

				}
				else
					for (const auto& unit : civilizatii[i].getArmata())
					{
						civilizatii[i + 1].setHealth(civilizatii[i + 1].getHealth() - unit->getAtac());

					}
				i--;
				break;
			}
			     if (i == 1)
				for (const auto& unit : civilizatii[i].getArmata())
				{
					civilizatii[i-1].setHealth(civilizatii[i-1].getHealth() - unit->getAtac());

				}
				 else
					 for (const auto& unit : civilizatii[i].getArmata())
					 {
						 civilizatii[i + 1].setHealth(civilizatii[i + 1].getHealth() - unit->getAtac());

					 }

            
		}
	}
	if (civilizatii[1].getHealth() <= 0)
	{
		cout << "Civilizatie: " << civilizatii[0].getNume() << " a castigat" << endl;
	}
	else
	{
		cout << "Civilizatie: " << civilizatii[1].getNume() << " a castigat" << endl;
	}
}

void SimulatorCivilizatie::cladiri(int& indexcivilizatie)
{
	cout << "Civilizatie: " << civilizatii[indexcivilizatie].getNume() << " vrea sa construieasca urmatoare cladire" << endl;
	cout << "1. Gater" << endl;
	cout << "2. Moara" << endl;
	cout << "3. Ferma" << endl;
	cout << "4. Mina" << endl;
	cout << "5. Caramidarie" << endl;
	cout << "6. Iesire" << endl;
	cout << "Introduceti optiunea: ";
	int optiune;
	cin >> optiune;
	switch (optiune)
	{
	case 1:
		if (civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Bani) >= 4 && civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Paine) >= 2) {
			civilizatii[indexcivilizatie].updateCladire(Cladire::TipCladire::Gater, 1);
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Bani, -4);
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Paine, -2);
			system("cls");
			cout << "Gater construit" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
		}
		else
		{
			cout << "Nu aveti suficiente resurse" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
			cladiri(indexcivilizatie);
		}
		break;
	case 2:
		if (civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Bani) >= 3 && civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Grau) >= 3)
		{
		civilizatii[indexcivilizatie].updateCladire(Cladire::TipCladire::Moara, 1);
		civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Bani, -3);
		civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Grau, -3);
		system("cls");
		cout << "Moara construita" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		system("cls");
	     }
		else
		{
			cout << "Nu aveti suficiente resurse" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
			cladiri(indexcivilizatie);
		}
		break;
	case 3:
		if (civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Bani) >= 5)
		{
			civilizatii[indexcivilizatie].updateCladire(Cladire::TipCladire::Ferma, 1);
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Bani, -5);
			system("cls");
			cout << "Ferma construita" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
		}
		else
		{
			cout << "Nu aveti suficiente resurse" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
			cladiri(indexcivilizatie);
		}
		break;
	case 4:
		if (civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Bani) >= 6 && civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Caramida) >= 3) {
			civilizatii[indexcivilizatie].updateCladire(Cladire::TipCladire::Mina, 1);
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Bani, -6);
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Caramida, -3);
			system("cls");
			cout << "Mina construita" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
		}
		else
		{
			cout << "Nu aveti suficiente resurse" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
			cladiri(indexcivilizatie);
		}
		break;
	case 5:
		if (civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Bani) >= 5 && civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Lemn) >= 4)
		{
			civilizatii[indexcivilizatie].updateCladire(Cladire::TipCladire::Caramidarie, 1);
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Bani, -5);
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Lemn, -4);
			system("cls");
			cout << "Caramidarie construita" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
		}
		else
		{
			cout << "Nu aveti suficiente resurse" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
			cladiri(indexcivilizatie);
		}
		break;
	case 6:
		indexcivilizatie--;
		system("cls");
		break;
	default:
		  cladiri(indexcivilizatie);
		  break;
    }
}

void SimulatorCivilizatie::resurse(int indexcivilizatie)
{
	cout << "Civilizatie: " << civilizatii[indexcivilizatie].getNume() << " colecteaza" << endl;
	if (civilizatii[indexcivilizatie].getNumarCladire(Cladire::TipCladire::Gater) > 0)
	{
		int cantitate = rand() % 6;
		civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Lemn, cantitate);
		cout << "Cantitate colectata: " << cantitate << " Lemnuri" << endl;
	}
	if (civilizatii[indexcivilizatie].getNumarCladire(Cladire::TipCladire::Primarie) > 0)
	{
		int cantitate = rand() % 6;
		civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Bani, cantitate);
		cout << "Cantitate colectata: " << cantitate << " Bani" << endl;
	}
	if (civilizatii[indexcivilizatie].getNumarCladire(Cladire::TipCladire::Moara) > 0)
	{
		int cantitate = rand() % 6;
		civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Paine, cantitate);
		cout << "Cantitate colectata: " << cantitate << " Paine" << endl;
	}
	if (civilizatii[indexcivilizatie].getNumarCladire(Cladire::TipCladire::Ferma) > 0)
	{
		int cantitate = rand() % 6;
		civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Grau, cantitate);
		cout << "Cantitate colectata: " << cantitate << " Grau" << endl;
	}
	if (civilizatii[indexcivilizatie].getNumarCladire(Cladire::TipCladire::Mina) > 0)
	{
		int cantitate = rand() % 6;
		civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Fier, cantitate);
		cout << "Cantitate colectata: " << cantitate << " Fier" << endl;
	}
	if (civilizatii[indexcivilizatie].getNumarCladire(Cladire::TipCladire::Caramidarie) > 0)
	{
		int cantitate = rand() % 6;
		civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Caramida, cantitate);
		cout << "Cantitate colectata: " << cantitate << " Caramida" << endl;
	}

}

void SimulatorCivilizatie::armata(int& indexcivilizatie)
{
	cout << "Civilizatie: " << civilizatii[indexcivilizatie].getNume() << " vrea sa construiasca urmatoare unitate militara" << endl;
	cout << "1. Barbar" << endl;
	cout << "2. Arcas" << endl;
	cout << "3. Gigant" << endl;
	cout << "4. Iesire" << endl;
	cout << "Introduceti optiunea: ";
	int optiune;
	cin >> optiune;
	switch (optiune)
	{
	case 1:
		if (civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Fier) >= 3 && civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Paine) >= 5) {
			civilizatii[indexcivilizatie].AdaugareUnitate(new Barbar());
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Caramida, -5);
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Lemn, -5);
			system("cls");
			cout << "Unitatea Barbar adaugata in armata" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
		}
		else
		{
			cout << "Nu aveti suficiente resurse" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
			armata(indexcivilizatie);
		}
		break;
	case 2:
		if (civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Paine) >= 7 && civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Fier) >= 4) {
			civilizatii[indexcivilizatie].AdaugareUnitate(new Arcas());
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Paine, -7);
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Fier, -4);
			system("cls");
			cout << "Unitatea Arcas adaugata in armata" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
		}
		else
		{
			cout << "Nu aveti suficiente resurse" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
			armata(indexcivilizatie);
		}
		break;
	case 3:
		if (civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Fier) >= 10 && civilizatii[indexcivilizatie].getCantitateResursa(Resursa::TipResursa::Caramida) >= 7) {
			civilizatii[indexcivilizatie].AdaugareUnitate(new Gigant());
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Fier, -10);
			civilizatii[indexcivilizatie].updateResursa(Resursa::TipResursa::Caramida, -7);
			system("cls");
			cout << "Unitatea Gigant adaugata in armata" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
		}

		else
		{
			cout << "Nu aveti suficiente resurse" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
			armata(indexcivilizatie);
		}
		break;
	case 4:
		indexcivilizatie--;
		system("cls");
		break;
	}

}