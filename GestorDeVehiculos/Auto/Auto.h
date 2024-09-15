#ifndef AUTO_H
#define AUTO_H

#include "../Vehicle/Vehicle.h"

class Auto : public Vehicle
{
private:
    bool aileron;
    bool turbo;
    bool sportMode;

public:
    // Constructor
    Auto(string brand, int year, string model, string color, bool aileron = false, bool turbo = false, bool sportMode = false);

    // Getters
    bool hasAileron();
    bool hasTurbo();
    bool isInSportMode();

    // Setters
    void setAileron(bool aileron);
    void setTurbo(bool turbo);
    void setSportMode(bool sportMode);

    std::string getInfo() override;
    void onTurbo();
    void offTurbo();
};

#endif
