#include <iostream>
#ifndef DEPORTIVO_H
#define DEPORTIVO_H

#include "../Auto.h"

using namespace std;

class Deportivo : public Auto
{
private:
    int velMax;

public:
    Deportivo(string brand, int year, string model, string color, bool aileron = false, bool turbo = false, bool sportMode = false, int velMax = 300);

    // Getters y Setters
    int getVelMax();
    void setVelMax(int velocidadMaxima);

    // Métodos únicos
    void activarTurbo();
    string getInfo() override;
};

#endif
