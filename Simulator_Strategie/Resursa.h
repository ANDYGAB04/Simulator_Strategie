#pragma once
#include <string>
using namespace std;

class Resursa
{
public:
    enum class TipResursa { Bani, Grau, Paine, Lemn, Caramida, Fier };
    Resursa(TipResursa _nume_resursa, int numar_resurse);
    ~Resursa();
    int getNumarResursa() const;
    void setNumarResursa(int numar_resurse);
    TipResursa getTipResursa() const;
	string tipResursaToString() const ;
private:
    TipResursa nume_resursa;
    int cantitate;
};

inline Resursa::TipResursa Resursa::getTipResursa() const {
    return nume_resursa;
}



inline bool operator==(const Resursa::TipResursa& lhs, const Resursa::TipResursa& rhs) {
    return static_cast<int>(lhs) == static_cast<int>(rhs);
}



