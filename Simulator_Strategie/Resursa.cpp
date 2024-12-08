#include "Resursa.h"
#include <string>

using namespace std;

Resursa::Resursa(TipResursa _nume_resursa, int numar_resursa)
    : nume_resursa(_nume_resursa), cantitate(numar_resursa)
{
}
Resursa::~Resursa()
{
}

int Resursa::getNumarResursa() const
{
    return cantitate;
}

void Resursa::setNumarResursa(int numar_resursa)
{
    this->cantitate = numar_resursa;
}
