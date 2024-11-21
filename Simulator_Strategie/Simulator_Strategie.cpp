// Simulator_Strategie.cpp

#include <iostream>
#include <cstdlib>
#include "Civlizatie.h"
#include "Cladirii.h"
#include "Resurse.h"
#include "GestionareResurse.h"
#include "Armata.h"
using namespace std;

int main()
{
    cout << "Numar de civilizatii: ";
    int nr, nrcladiri;
    string civilizatie;
    nr = 2;
    system("cls");


    Civilizatie civ;

    Cladiri mCladiri;

    map<string, vector<string>> mListaCladiri;

    unordered_map<string, int> mListaCivilizatii;

	map<string, vector<Resurse>> mResurse;

	map<string, vector<Armata>> mArmata;

	//Adaugare civilizatii
    for (auto i = 1; i <= nr; i++) {

        cout << "Nume civilizatie: ";
        cin >> civilizatie;

        civ.AdaugareCivilizatie(civilizatie, i);
        GestionareResurse mResursa(civilizatie, i);

        unordered_map<string, int> tempMap = civ.ListareCivilizatii(civilizatie, i);
        mListaCivilizatii.insert(tempMap.begin(), tempMap.end());

        auto atempMap = mCladiri.AdaugareCladiri(i, 0,civilizatie);
        mListaCladiri.insert(atempMap.begin(), atempMap.end());

        mResurse[civilizatie]= { Resurse("Bani",0),Resurse("Grau",0),Resurse("Paine",0),Resurse("Lemn",0),Resurse("Caramida",0),Resurse("Fier",0) };
		mResurse[civilizatie] = mResursa.AdaugareResurse(civilizatie, i, "Primarie",mResurse[civilizatie]);
    }
    system("cls");

    for (const auto& pair : mListaCivilizatii) {
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

        map<string, vector<string>> atempMap;

        bool ok = false;

        switch (nrcladiri)
        {
        case 1:
           // bool ok = false;
            for ( auto& resursa : mResurse[pair.first]) {
                if (resursa.getNumeResursa() == "Grau" && resursa.getNumarResurse() > 3) {
                    atempMap = mCladiri.AdaugareCladiri(i, 1, pair.first);
                    ok = true;
                    resursa.setNumarResurse(resursa.getNumarResurse() - 4);
                    break;
                }
            }
                if (ok == false) {
                    system("cls");
                    cout << "Nu aveti suficiente resurse pentru a construi aceasta cladire" << endl;
                    break;
                }
			
        case 2:
           // bool ok = false;
            for (auto& resursa : mResurse[pair.first]) {
                if (resursa.getNumeResursa() == "Paine" && resursa.getNumarResurse() > 5) {
                    atempMap = mCladiri.AdaugareCladiri(i, 2, pair.first);
                    ok = true;
                    resursa.setNumarResurse(resursa.getNumarResurse() - 6);
                    break;
                }
            }
                if(ok==false) {
                    system("cls");
                    cout << "Nu aveti suficiente resurse pentru a construi aceasta cladire" << endl;
                    break;
                }
 
        case 3:
            //bool ok = false;
            for (auto& resursa : mResurse[pair.first]) {
                if (resursa.getNumeResursa() == "Lemn" && resursa.getNumarResurse() > 6) {
                    atempMap = mCladiri.AdaugareCladiri(i, 3, pair.first);
                    ok = true;
                    resursa.setNumarResurse(resursa.getNumarResurse() - 7);
                    break;
                }
            }
                if (ok == false) {
                    system("cls");
                    cout << "Nu aveti suficiente resurse pentru a construi aceasta cladire" << endl;
                    break;
                }
            
        case 4:
           // bool ok = false;
            for ( auto& resursa : mResurse[pair.first]) {
                if (resursa.getNumeResursa() == "Caramida" && resursa.getNumarResurse() > 7) {
                    atempMap = mCladiri.AdaugareCladiri(i, 4, pair.first);
                    ok = true;
                    resursa.setNumarResurse(resursa.getNumarResurse() - 8);
                    break;
                }
            }
                if (ok == false) {
                    system("cls");
                    cout << "Nu aveti suficiente resurse pentru a construi aceasta cladire" << endl;
                    break;
                }
            
        case 5:
            //bool ok = false;
            for ( auto& resursa : mResurse[pair.first]) {
                if (resursa.getNumeResursa() == "Bani" && resursa.getNumarResurse() > 2) {
                    atempMap = mCladiri.AdaugareCladiri(i, 5, pair.first);
                    ok = true;
                    resursa.setNumarResurse(resursa.getNumarResurse() - 3);
                    break;
                }
            }
                if (ok == false) {
                    system("cls");
                    cout << "Nu aveti suficiente resurse pentru a construi aceasta cladire" << endl;
                    break;
                }
            
        case 6:
            break;
        }
        for (const auto& entry : atempMap) {
            mListaCladiri[entry.first].insert(mListaCladiri[entry.first].end(), entry.second.begin(), entry.second.end());
        }
        atempMap.clear();
        i++;
    }
    system("cls");

    
    
    //primire resurse

    for (const auto pair : mResurse) {
        int i = 1;
		cout << "Civilizatia " << pair.first << " va primi urmatoarea resurse " << endl;
        GestionareResurse mResursa(pair.first, i);
		for (const auto cladire : mListaCladiri[pair.first])
		mResurse[pair.first] = mResursa.AdaugareResurse(pair.first, i, cladire, mResurse[pair.first]);



        i++;
    }

    system("cls");
    //gestionare armata

    for (const auto& pair : mListaCivilizatii) {
        int nrunitate;
		cout << "Civilizatia " << pair.first << " va construi urmatoarea unitate " << endl;

        cout << "1.Barbar" << endl;
        cout << "2.Arcas" << endl;
        cout << "3.Gigant" << endl;

        cin >> nrunitate;
        
        switch (nrunitate)
        {
        case 1: {
			Barbari mBarbari("Barbari", 100, 10, 0, mArmata[pair.first]);
                break;
            }
        case 2: {
			Arcasi mArcasi("Arcasi", 50, 20, 0, mArmata[pair.first]);
			break;
            }
        case 3: {
			Giganti mGiganti("Giganti", 200, 50, 0, mArmata[pair.first]);
			break;
           }
		default:
          {
            break;
          }
        }
        system("cls");
    }

    return 0;
}
