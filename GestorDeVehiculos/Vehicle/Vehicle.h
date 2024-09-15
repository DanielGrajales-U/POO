#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle
{
protected:
    string brand;
    int year;
    string model;
    string color;
    bool on;

public:
    // Constructor
    Vehicle(string brand, int year, string model, string color, bool on = false);

    // Getters
    string getBrand();
    int getYear();
    string getModel();
    string getColor();
    bool isOn();

    // Setters
    void setBrand(string brand);
    void setYear(int year);
    void setModel(string model);
    void setColor(string color);
    void switchOnOff();

    virtual string getInfo();
    void honkHorn();
};

#endif
