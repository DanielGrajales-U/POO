#include "Cruiser.h"
#include <iostream>
using namespace std;

Cruiser::Cruiser(string brand, int year, string model, string color, string tipoManillar, bool alforjas, bool absSystem)
    : Moto(brand, year, model, color, tipoManillar, alforjas), absSystem(absSystem) {}

bool Cruiser::isABSSystem()
{
    return absSystem;
}

void Cruiser::setABSSystem(bool sistemaABS)
{
    this->absSystem = sistemaABS;
}

void Cruiser::activarSistemaABS()
{
    cout << "Sistema ABS activado en la cruiser." << endl;
}

string Cruiser::getInfo()
{
    string info = Moto::getInfo();
    info += "Sistema ABS: " + string(absSystem ? "Sí" : "No") + "\n";
    return info;
}
