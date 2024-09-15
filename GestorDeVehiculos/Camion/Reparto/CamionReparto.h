#include <iostream>
#ifndef CAMIONREPARTO_H
#define CAMIONREPARTO_H

using namespace std;

#include "../Camion.h"

class CamionReparto : public Camion
{
private:
    bool refrigeratorBox;

public:
    CamionReparto(string brand, int year, string model, string color, float maxLoad, int numEjes, bool refrigeratorBox);

    // Getters y Setters
    bool isRefrigeratorBox();
    void setRefrigeratorBox(bool refrigeratorBox);

    // Métodos únicos
    void startRoute();
    string getInfo() override;
};

#endif
