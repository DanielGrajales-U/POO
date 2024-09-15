#include <iostream>
#ifndef SUV_H
#define SUV_H

#include "../Auto.h"

using namespace std;

class SUV : public Auto
{
private:
    bool traccion4x4;

public:
    SUV(string brand, int year, string model, string color, bool aileron = false, bool turbo = false, bool sportMode = false, bool traccion4x4 = false);

    // Getters y Setters
    bool isTraccion4x4();
    void setTraccion4x4(bool traccion4x4);

    // Métodos únicos
    void activarTraccion4x4();
    string getInfo() override;
};

#endif
