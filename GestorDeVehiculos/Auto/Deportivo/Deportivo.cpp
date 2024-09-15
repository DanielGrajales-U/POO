#include "Deportivo.h"
#include <iostream>
using namespace std;

Deportivo::Deportivo(string brand, int year, string model, string color, bool aileron, bool turbo, bool sportMode, int velMax)
    : Auto(brand, year, model, color, aileron, turbo, sportMode), velMax(velMax) {}

int Deportivo::getVelMax()
{
    return velMax;
}

void Deportivo::setVelMax(int velMax)
{
    this->velMax = velMax;
}

void Deportivo::activarTurbo()
{
    cout << "Turbo activado en el deportivo." << endl;
}

string Deportivo::getInfo()
{
    string info = Auto::getInfo();
    info += "Velocidad Maxima: " + to_string(velMax) + "Km/h" + "\n";

    return info;
}
