#include "Resursa.h"
#include <string>
#include <unordered_map>

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
string Resursa::tipResursaToString() const
{

    switch (nume_resursa)
    {
    case TipResursa::Bani:
        return "Bani";
    case TipResursa::Paine:
        return "Paine";
    case TipResursa::Grau:
        return "Grau";
    case TipResursa::Lemn:
        return "Lemn";
    case TipResursa::Fier:
        return "Fier";
    case TipResursa::Caramida:
        return "Caramida";
    default:
        return "Unknown";

    }
}