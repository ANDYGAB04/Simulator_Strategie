#pragma once
#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;
class Cladire {
public:
    enum class TipCladire { Gater, Moara, Primarie, Ferma, Mina, Caramidarie };
    Cladire(TipCladire tip);
    ~Cladire();
    TipCladire getTip() const;
    void setNumarCladire(int numarcladire);
    int getNumarCladire() const;

private:
    int numarcladire;
    TipCladire tip;
};


inline bool operator==(const Cladire::TipCladire& lhs, const Cladire::TipCladire& rhs) {
    return static_cast<int>(lhs) == static_cast<int>(rhs);
}
