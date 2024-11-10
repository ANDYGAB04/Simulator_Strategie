
#include <iostream>
#include <cstdlib>
#include "Civlizatie.h"
#include "Cladirii.h"
using namespace std;
int main()
{
    cout << "Numar de civilizatii: ";
    int nr,nrcladiri;
	string civilizatie;
cin >> nr;
system("cls");
    Civilizatie civ;
	Cladiri mCladiri;

    for (auto i = 1; i <= nr; i++) {
		cout << "Nume civilizatie: ";
        cin >> civilizatie;
        civ.AdaugareCivilizatie(civilizatie, i);
        civ.ListareCivilizatii(civilizatie, i, civ.listacivilizatii);
		mCladiri.AdaugareCladiri(mCladiri.listacladiri, i, 0);
    }
	system("cls");
		for (const auto& pair : civ.listacivilizatii) {
			int i = 1;
			cout << "Civilizatia " << pair.first << " va construi urmatoarea caldire " << endl;

			cout << "1.Moara" << endl;
			cout << "2.Gater" << endl;
			cout << "3.Mina" << endl;
			cout << "4.Caramiderie" << endl;
			cout << "5.Ferma" << endl;
			cout << "6.Iesire" << endl;
			cout << "Numar cladirie: ";
			cin >> nrcladiri;
			switch (nrcladiri)
			{
			case 1:
				mCladiri.AdaugareCladiri(mCladiri.listacladiri, i, 1);

				break;
			case 2:
				mCladiri.AdaugareCladiri(mCladiri.listacladiri, i, 2);
				break;
			case 3:
				mCladiri.AdaugareCladiri(mCladiri.listacladiri, i, 3);
				break;
			case 4:
				mCladiri.AdaugareCladiri(mCladiri.listacladiri, i, 4);
				break;
			case 5:
				mCladiri.AdaugareCladiri(mCladiri.listacladiri, i, 5);
				break;
			case 6:
				break;
			}
			system("cls");
         }


    return 0;
}

