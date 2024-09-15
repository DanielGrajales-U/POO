#include "CamionCarga.h"
#include <iostream>
using namespace std;

CamionCarga::CamionCarga(string brand, int year, string model, string color, float maxLoad, int numEjes, int containerCapacity)
    : Camion(brand, year, model, color, maxLoad, numEjes), containerCapacity(containerCapacity) {}

int CamionCarga::getContainerCapacity()
{
    return containerCapacity;
}

void CamionCarga::setContainerCapacity(int containerCapacity)
{
    this->containerCapacity = containerCapacity;
}

void CamionCarga::makeMaintenance()
{
    cout << "Mantenimiento realizado en el camión de carga." << endl;
}

string CamionCarga::getInfo()
{
    string info = Camion::getInfo();
    info += "Capacidad del Contenedor: " + to_string(containerCapacity) + " L\n";
    return info;
}
