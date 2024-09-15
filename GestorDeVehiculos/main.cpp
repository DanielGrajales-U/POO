#include <iostream>
#include "Menu/Menu.cpp"

using namespace std;

int main()
{
    int option;
    do
    {
        Menu::displayMenu();
        cout << "Ingrese la opcion deseada: ";
        cin >> option;

        switch (option)
        {
        case 1:
        case 2:
        case 3:
            Menu::createVehicle(option);
            break;
        case 4:
            Menu::showVehicleInfo();
            break;
        case 5:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
        }
    } while (option != 5);

    return 0;
}
