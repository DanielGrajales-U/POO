#include "SUV.h"
#include <iostream>
using namespace std;

SUV::SUV(string brand, int year, string model, string color, bool aileron, bool turbo, bool sportMode, bool traccion4x4)
    : Auto(brand, year, model, color, aileron, turbo, sportMode), traccion4x4(traccion4x4) {}

bool SUV::isTraccion4x4()
{
    return traccion4x4;
}

void SUV::setTraccion4x4(bool traccion4x4)
{
    this->traccion4x4 = traccion4x4;
}

void SUV::activarTraccion4x4()
{
    cout << "Tracción 4x4 activada en la SUV." << endl;
}

string SUV::getInfo()
{
    string info = Auto::getInfo();
    info += "Traccion 4x4: " + string(traccion4x4 ? "Sí" : "No") + "\n";

    return info;
}
