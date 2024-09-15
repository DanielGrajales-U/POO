#include <iostream>
#include "Vehicle.h"

using namespace std;

// Constructor
Vehicle::Vehicle(string brand, int year, string model, string color, bool on)
    : brand(brand), year(year), model(model), color(color), on(on) {}

// Getters
string Vehicle::getBrand() { return brand; }
int Vehicle::getYear() { return year; }
string Vehicle::getModel() { return model; }
string Vehicle::getColor() { return color; }
bool Vehicle::isOn() { return on; }

// Setters
void Vehicle::setBrand(string brand) { this->brand = brand; }
void Vehicle::setYear(int year) { this->year = year; }
void Vehicle::setModel(string model) { this->model = model; }
void Vehicle::setColor(string color) { this->color = color; }
void Vehicle::switchOnOff() { on = !on; }

string Vehicle::getInfo()
{
    string info = "Ano: " + to_string(year) + "\n";
    info += "Marca: " + brand + "\n";
    info += "Modelo: " + model + "\n";
    info += "Color: " + color + "\n";
    info += "Encendido: " + string(on ? "Yes" : "No") + "\n";

    return info;
}

void Vehicle::honkHorn()
{
    cout << "¡BEEP BEEP!" << endl;
}
