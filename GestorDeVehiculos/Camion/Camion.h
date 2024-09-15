#ifndef CAMION_H
#define CAMION_H

#include "../Vehicle/Vehicle.h"

class Camion : public Vehicle
{
private:
    float maxLoad;
    int numEjes;

public:
    // Constructor
    Camion(string brand, int year, string model, string color, float maxLoad, int numEjes, bool on = false);

    // Getters
    float getMaxLoad();
    int getNumEjes();

    // Setters
    void setMaxLoad(float maxLoad);
    void setNumEjes(int numEjes);

    std::string getInfo() override;
    void tow();
    void discharge();
};

#endif
