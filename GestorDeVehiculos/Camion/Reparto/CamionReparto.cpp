#include "CamionReparto.h"
#include <iostream>
using namespace std;

CamionReparto::CamionReparto(string brand, int year, string model, string color, float maxLoad, int numEjes, bool refrigeratorBox)
    : Camion(brand, year, model, color, maxLoad, numEjes), refrigeratorBox(refrigeratorBox) {}

bool CamionReparto::isRefrigeratorBox()
{
    return refrigeratorBox;
}

void CamionReparto::setRefrigeratorBox(bool refrigeratorBox)
{
    this->refrigeratorBox = refrigeratorBox;
}

void CamionReparto::startRoute()
{
    cout << "Ruta iniciada para el camión de reparto." << endl;
}

string CamionReparto::getInfo()
{
    string info = Camion::getInfo();
    info += "Caja Frigorífica: " + string(refrigeratorBox ? "Sí" : "No") + "\n";
    return info;
}
