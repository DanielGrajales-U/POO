#include <iostream>
#include "Auto.h"

using namespace std;

// Constructor
Auto::Auto(string brand, int year, string model, string color, bool aileron, bool turbo, bool sportMode)
    : Vehicle(brand, year, model, color), aileron(aileron), turbo(turbo), sportMode(sportMode) {}

// Getters
bool Auto::hasAileron() { return aileron; }
bool Auto::hasTurbo() { return turbo; }
bool Auto::isInSportMode() { return sportMode; }

// Setters
void Auto::setAileron(bool aileron) { this->aileron = aileron; }
void Auto::setTurbo(bool turbo) { this->turbo = turbo; }
void Auto::setSportMode(bool sportMode) { this->sportMode = sportMode; }

// Método getInfo
string Auto::getInfo()
{
    string info = Vehicle::getInfo();

    info += "Aileron: " + string(aileron ? "Yes" : "No") + "\n";
    info += "Turbo: " + string(turbo ? "Yes" : "No") + "\n";
    info += "Sport Mode: " + string(sportMode ? "Yes" : "No") + "\n";
    info += "____________________________________________________________";
    info += "\n";

    return info;
}

void Auto::onTurbo()
{
    if (!turbo)
    {
        turbo = true;
        cout << "¡Turbo activado!" << endl;
    }
    else
    {
        cout << "El turbo ya está activado." << endl;
    }
}

void Auto::offTurbo()
{
    if (turbo)
    {
        turbo = false;
        cout << "Turbo desactivado." << endl;
    }
    else
    {
        cout << "El turbo ya está desactivado." << endl;
    }
}