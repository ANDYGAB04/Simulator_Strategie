// Simulator_Strategie.cpp

#include <iostream>
#include <cstdlib>
#include "Civlizatie.h"
#include "Cladirii.h"
using namespace std;

int main()
{
    cout << "Numar de civilizatii: ";
    int nr, nrcladiri;
    string civilizatie;
    cin >> nr;
    system("cls");

    Civilizatie civ;
    Cladiri mCladiri;
    map<string, vector<string>> mListaCladiri;
    unordered_map<string, int> mListaCivilizatii;

    for (auto i = 1; i <= nr; i++) {
        cout << "Nume civilizatie: ";
        cin >> civilizatie;
        civ.AdaugareCivilizatie(civilizatie, i);
        unordered_map<string, int> tempMap = civ.ListareCivilizatii(civilizatie, i);
        mListaCivilizatii.insert(tempMap.begin(), tempMap.end());
        auto atempMap = mCladiri.AdaugareCladiri(i, 0,civilizatie);
        mListaCladiri.insert(atempMap.begin(), atempMap.end());
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
        switch (nrcladiri)
        {
        case 1:
            atempMap = mCladiri.AdaugareCladiri(i, 1, pair.first);
            break;
        case 2:
            atempMap = mCladiri.AdaugareCladiri(i, 2, pair.first);
            break;
        case 3:
            atempMap = mCladiri.AdaugareCladiri(i, 3, pair.first);
            break;
        case 4:
            atempMap = mCladiri.AdaugareCladiri(i, 4, pair.first);
            break;
        case 5:
            atempMap = mCladiri.AdaugareCladiri(i, 5, pair.first);
            break;
        case 6:
            break;
        }
        for (const auto& entry : atempMap) {
            mListaCladiri[entry.first].insert(mListaCladiri[entry.first].end(), entry.second.begin(), entry.second.end());
        }
        atempMap.clear();
        system("cls");
    }


    return 0;
}
