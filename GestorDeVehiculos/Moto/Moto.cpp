#include <iostream>
#include "Moto.h"

using namespace std;

Moto::Moto(string brand, int year, string model, string color, string tipoManillar, bool alforjas, bool on)
    : Vehicle(brand, year, model, color, on), tipoManillar(tipoManillar), alforjas(alforjas) {}

// Getters
string Moto::getTipoManillar() { return tipoManillar; }
bool Moto::hasAlforjas() { return alforjas; }

// Setters
void Moto::setTipoManillar(string tipoManillar) { this->tipoManillar = tipoManillar; }
void Moto::setAlforjas(bool alforjas) { this->alforjas = alforjas; }

string Moto::getInfo()
{
    string info = Vehicle::getInfo();
    info += "Tipo de Manillar: " + tipoManillar + "\n";
    info += "Alforjas: " + string(alforjas ? "Sí" : "No") + "\n";
    info += "____________________________________________________________";
    info += "\n";

    return info;
}

void Moto::makeWheelie()
{
    if (on)
    {
        cout << "¡La moto está llanteando!" << endl;
    }
    else
    {
        cout << "Enciende la moto antes de llantear" << endl;
    }
}

void Moto::foldMirrors()
{
    cout << "Los espejos se han plegado." << endl;
}
