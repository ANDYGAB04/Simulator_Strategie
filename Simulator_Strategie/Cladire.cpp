#include "Cladire.h"
using namespace std;

Cladire::Cladire(TipCladire tip): numarcladire(0), tip(tip){

}

Cladire::~Cladire()
{
}

Cladire::TipCladire Cladire::getTip() const {
    return tip;
}

void Cladire::setNumarCladire(int numarCladire) {
    this->numarcladire = numarCladire;
}

int Cladire::getNumarCladire() const
{
    return numarcladire;
}

string Cladire::getTipCladireAsString() const
{
    switch (tip)
    {
    case Cladire::TipCladire::Primarie:
        return "Primarie";
    case Cladire::TipCladire::Gater:
        return "Gater";
    case Cladire::TipCladire::Moara:
        return "Moara";
    case Cladire::TipCladire::Ferma:
        return "Ferma";
    case Cladire::TipCladire::Mina:
        return "Mina";
    case Cladire::TipCladire::Caramidarie:
        return "Caramidarie";
    default:
        return "Unknown";
    }
}
