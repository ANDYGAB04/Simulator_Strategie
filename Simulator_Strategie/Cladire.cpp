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
