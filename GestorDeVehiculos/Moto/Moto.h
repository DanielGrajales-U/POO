#ifndef MOTO_H
#define MOTO_H

#include "../Vehicle/Vehicle.h"

class Moto : public Vehicle
{
private:
    string tipoManillar;
    bool alforjas;

public:
    Moto(string brand, int year, string model, string color, string tipoManillar, bool alforjas, bool on = false);

    // Getters
    string getTipoManillar();
    bool hasAlforjas();

    // Setters
    void setTipoManillar(string tipoManillar);
    void setAlforjas(bool alforjas);

    std::string getInfo() override;
    void makeWheelie();
    void foldMirrors();
};

#endif
