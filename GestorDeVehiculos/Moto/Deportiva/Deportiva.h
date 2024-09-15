#ifndef DEPORTIVA_H
#define DEPORTIVA_H

#include "../Moto.h"

class Deportiva : public Moto
{
private:
    int cilindrada;

public:
    Deportiva(string brand, int year, string model, string color, string tipoManillar, bool alforjas, int cilindrada = 600);

    // Getters y Setters
    int getCilindrada();
    void setCilindrada(int cilindrada);

    // Métodos únicos
    void activePerformanceMode();
    string getInfo() override;
};

#endif
