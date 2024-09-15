#include "Menu.h"
#include <iostream>

using namespace std;

vector<shared_ptr<Vehicle>> Menu::vehicles;

void Menu::displayMenu()
{
    cout << "Seleccione una opcion:" << endl;
    cout << "[1]. Crear Auto" << endl;
    cout << "[2]. Crear Moto" << endl;
    cout << "[3]. Crear Camion" << endl;
    cout << "[4]. Mostrar Informacion del Vehiculo" << endl;
    cout << "[5]. Salir" << endl;
}

void Menu::createVehicle(int option)
{

    if (option == 1)
    {
        // Crear Auto
        cout << "Seleccione el tipo de auto:" << endl;
        cout << "1. Deportivo" << endl;
        cout << "2. SUV" << endl;
        int autoType;
        cin >> autoType;

        string brand, model, color;
        int year, velMax;
        bool aileron, turbo, sportMode, traccion4x4;

        cout << "Ingrese la marca: ";
        cin >> brand;
        cout << "Ingrese el ano: ";
        cin >> year;
        cout << "Ingrese el modelo: ";
        cin >> model;
        cout << "Ingrese el color: ";
        cin >> color;

        if (autoType == 1)
        {
            cout << "Ingrese la velocidad maxima: ";
            cin >> velMax;
            auto autoNuevo = make_shared<Deportivo>(brand, year, model, color, aileron, turbo, sportMode, velMax);
            autoNuevo->activarTurbo();
            vehicles.push_back(autoNuevo);
        }
        else if (autoType == 2)
        {
            cout << "¿Tiene tracción 4x4? (1 para sí, 0 para no): ";
            cin >> traccion4x4;
            auto autoNuevo = make_shared<SUV>(brand, year, model, color, aileron, turbo, sportMode, traccion4x4);
            autoNuevo->activarTraccion4x4();
            vehicles.push_back(autoNuevo);
        }
        else
        {
            cout << "Tipo de auto no valido." << endl;
        }
    }
    else if (option == 2)
    {
        // Crear Moto
        cout << "Seleccione el tipo de moto:" << endl;
        cout << "1. Deportiva" << endl;
        cout << "2. Cruiser" << endl;
        int motoType;
        cin >> motoType;

        string brand, model, color, tipoManillar;
        int year, cilindrada;
        bool alforjas, absSystem;

        cout << "Ingrese la marca: ";
        cin >> brand;
        cout << "Ingrese el ano: ";
        cin >> year;
        cout << "Ingrese el modelo: ";
        cin >> model;
        cout << "Ingrese el color: ";
        cin >> color;

        if (motoType == 1)
        {
            cout << "Ingrese el tipo de manillar: ";
            cin >> tipoManillar;
            cout << "¿Tiene alforjas? (1 para sí, 0 para no): ";
            cin >> alforjas;
            cout << "Ingrese la cilindrada: ";
            cin >> cilindrada;
            cout << "¿Tiene sistema ABS? (1 para sí, 0 para no): ";
            cin >> absSystem;

            auto motoNueva = make_shared<Deportiva>(brand, year, model, color, tipoManillar, alforjas, cilindrada);
            motoNueva->activePerformanceMode();
            vehicles.push_back(motoNueva);
        }
        else if (motoType == 2)
        {
            cout << "Ingrese el tipo de manillar: ";
            cin >> tipoManillar;
            cout << "¿Tiene alforjas? (1 para sí, 0 para no): ";
            cin >> alforjas;
            cout << "Ingrese la cilindrada: ";
            cin >> cilindrada;

            auto motoNueva = make_shared<Cruiser>(brand, year, model, color, tipoManillar, alforjas, cilindrada);
            vehicles.push_back(motoNueva);
        }
        else
        {
            cout << "Tipo de moto no valido." << endl;
        }
    }
    else if (option == 3)
    {
        // Crear Camión
        cout << "Seleccione el tipo de camion:" << endl;
        cout << "1. Camion de Carga" << endl;
        cout << "2. Camion de Reparto" << endl;
        int camionType;
        cin >> camionType;

        string brand, model, color;
        int year, containerCapacity;
        float maxLoad;
        int numEjes;
        bool refrigeratorBox;

        cout << "Ingrese la marca: ";
        cin >> brand;
        cout << "Ingrese el ano: ";
        cin >> year;
        cout << "Ingrese el modelo: ";
        cin >> model;
        cout << "Ingrese el color: ";
        cin >> color;
        cout << "Ingrese la carga maxima: ";
        cin >> maxLoad;
        cout << "Ingrese la cantidad de Ejes: ";
        cin >> numEjes;

        if (camionType == 1)
        {
            cout << "Ingrese la capacidad del contenedor: ";
            cin >> containerCapacity;

            auto camionNuevo = make_shared<CamionCarga>(brand, year, model, color, maxLoad, numEjes, containerCapacity);
            camionNuevo->makeMaintenance();
            vehicles.push_back(camionNuevo);
        }
        else if (camionType == 2)
        {
            cout << "¿Tiene caja frigorifica? (1 para sí, 0 para no): ";
            cin >> refrigeratorBox;

            auto camionNuevo = make_shared<CamionReparto>(brand, year, model, color, maxLoad, numEjes, refrigeratorBox);
            camionNuevo->startRoute();
            vehicles.push_back(camionNuevo);
        }
        else
        {
            cout << "Tipo de camion no valido." << endl;
        }
    }
    else if (option == 4)
    {
        showVehicleInfo();
    }
    else if (option == 5)
    {
        cout << "Saliendo del programa." << endl;
        exit(0);
    }
    else
    {
        cout << "Opcion no valida." << endl;
    }
}

void Menu::showVehicleInfo()
{
    if (vehicles.empty())
    {
        cout << "No hay vehiculos para mostrar." << endl;
        return;
    }

    cout << "Seleccione el vehiculo para mostrar la informacion:" << endl;
    for (size_t i = 0; i < vehicles.size(); ++i)
    {
        cout << i + 1 << ". Vehiculo " << i + 1 << endl;
    }
    int choice;
    cout << "Ingrese la opcion deseada: ";
    cin >> choice;

    if (choice > 0 && choice <= vehicles.size())
    {
        cout << vehicles[choice - 1]->getInfo() << endl;
    }
    else
    {
        cout << "Opcion no valida." << endl;
    }
}
