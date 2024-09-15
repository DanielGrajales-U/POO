#include <iostream>
#include "Camion.h"

using namespace std;

// Constructor
Camion::Camion(string brand, int year, string model, string color, float maxLoad, int numEjes, bool on)
    : Vehicle(brand, year, model, color, on), maxLoad(maxLoad), numEjes(numEjes) {}

// Getters
float Camion::getMaxLoad() { return maxLoad; }
int Camion::getNumEjes() { return numEjes; }

// Setters
void Camion::setMaxLoad(float maxLoad) { this->maxLoad = maxLoad; }
void Camion::setNumEjes(int numEjes) { this->numEjes = numEjes; }

string Camion::getInfo()
{
    string info = Vehicle::getInfo();
    info += "Carga Máxima: " + to_string(maxLoad) + " toneladas\n";
    info += "Número de Ejes: " + to_string(numEjes) + "\n";
    info += "____________________________________________________________";
    info += "\n";

    return info;
}

void Camion::tow()
{
    cout << "El camión está remolcando un vehículo." << endl;
}

void Camion::discharge()
{
    cout << "La carga del camión ha sido descargada." << endl;
}
