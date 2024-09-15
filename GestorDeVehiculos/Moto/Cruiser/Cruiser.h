#include <iostream>
#ifndef CRUISER_H
#define CRUISER_H

using namespace std;

#include "../Moto.h"

class Cruiser : public Moto
{
private:
    bool absSystem;

public:
    Cruiser(string brand, int year, string model, string color, string tipoManillar, bool alforjas, bool absSystem = false);

    // Getters y Setters
    bool isABSSystem();
    void setABSSystem(bool absSystem);

    // Métodos únicos
    void activarSistemaABS();
    string getInfo() override;
};

#endif
