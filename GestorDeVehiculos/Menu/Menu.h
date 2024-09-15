#ifndef MENU_H
#define MENU_H

#include "../Vehicle/Vehicle.cpp"

#include "../Auto/Auto.cpp"
#include "../Moto/Moto.cpp"
#include "../Camion/Camion.cpp"
#include "../Camion/Carga/CamionCarga.cpp"
#include "../Camion/Reparto/CamionReparto.cpp"
#include "../Auto/Deportivo/Deportivo.cpp"
#include "../Auto/Suv/Suv.cpp"
#include "../Moto/Cruiser/Cruiser.cpp"
#include "../Moto/Deportiva/Deportiva.cpp"

#include <vector>
#include <memory>

class Menu
{
private:
    static std::vector<std::shared_ptr<Vehicle>> vehicles;

public:
    static void displayMenu();
    static void createVehicle(int option);
    static void showVehicleInfo();
};

#endif
