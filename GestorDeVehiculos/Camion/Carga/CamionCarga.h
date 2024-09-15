#include <iostream>
#ifndef CAMIONCARGA_H
#define CAMIONCARGA_H

using namespace std;

#include "../Camion.h"

class CamionCarga : public Camion
{
private:
    int containerCapacity;

public:
    CamionCarga(string brand, int year, string model, string color, float maxLoad, int numEjes, int containerCapacity);

    // Getters y Setters
    int getContainerCapacity();
    void setContainerCapacity(int containerCapacity);

    // Métodos únicos
    void makeMaintenance();
    string getInfo() override;
};

#endif
