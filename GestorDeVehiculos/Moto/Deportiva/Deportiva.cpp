#include "Deportiva.h"
#include <iostream>

using namespace std;

Deportiva::Deportiva(string brand, int year, string model, string color, string tipoManillar, bool alforjas, int cilindrada)
    : Moto(brand, year, model, color, tipoManillar, alforjas), cilindrada(cilindrada) {}

int Deportiva::getCilindrada()
{
    return cilindrada;
}

void Deportiva::setCilindrada(int cilindrada)
{
    this->cilindrada = cilindrada;
}

void Deportiva::activePerformanceMode()
{
    cout << "Modo rendimiento activado en la moto deportiva." << endl;
}

string Deportiva::getInfo()
{
    string info = Moto::getInfo();
    info += "Cilindrada: " + to_string(cilindrada) + " cc" + "\n";
    return info;
}
