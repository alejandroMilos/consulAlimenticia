// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include <string>
#include <list>
#include <ctime> // se usa para trabajar con el tiempo y la fecha 
#include "FoodCatalog.h"
#include "User.h"

class Menu
{
    FoodCatalog foodCatalog; // hacemos uso de composicion para poder utilizar metodos de la clase "FoodCatalog"
    User user; // hacemos uso de composicion para poder utilizar metodos de la clase "User"
    int quantity;
    std::time_t creationTime; // atributo para poder accesar al tiempo local en forma de fecha y hora.
    double totalCal;
    public:

        // constructor
        Menu();// por omision

        // destructor
        ~Menu() {}
        
        // getter
        std::time_t getCreationTime();

        // metodo de impresion
        void printMenu();
};

Menu::Menu()
{
    quantity = 0;
    totalCal = 0.0;
    creationTime = time(0);
}

std::time_t Menu::getCreationTime()
{
    return creationTime;
}

void Menu::printMenu()
{
    foodCatalog.printGroupListFromFile("Foodlist.txt");
    while (true)
    {
        // le preguntamos al usuario si quiere ver los contenidos de los grupos 
        std::cout << "Do you wish to view the Food Groups' contents? [Y] Yes, [N] No: ";
        char goption;
        std::cin >> goption;
        if (goption == 'Y' || goption == 'y')
        {
            // pedimos al metodo que nos muestre el contenido de cada grupo
            foodCatalog.viewFoodGroupsContentFromList("Foodlist.txt");
            std::ifstream inputFile("Foodlist.txt");
            if (inputFile.is_open())
            {
                std::string line;
                while(std::getline(inputFile, line))
                {
                    if (line.find("Calories: ") != std::string::npos)
                    {
                        // extraemos el valor que tenemos establecidos en cada alimento guardado en cada grupo
                        std::string caloriesStr = line.substr(line.find("Calories: ") + 10); // 10 es la longitud de "Calories"
                        double calories = std::stod(caloriesStr);

                        // sumamos la cantidad total de calorias
                        totalCal += calories;
                    }
                }
                inputFile.close();
            }

            std::cout << "Total Calories: " << totalCal << "kcal" << std::endl;
            break;
        }
        else if (goption == 'N' || goption == 'n')
        {
            // en caso de que el usuario no quiera verlo, se le mostrará directamente la cantidad de calorías totales en el catálogo
            std::cout << "Total Calories: " << totalCal << "kcal" << std::endl;
            break;
        }
        else if (goption != 'Y' || goption != 'y' && goption != 'N' || goption != 'n')
        {
            // si la respuesta no es 'Y' o 'N', vuelve a preguntar si quieres ver el contenido de los grupos 
            std::cout << "Invalid option! Please enter [Y] for Yes or [N] for No" << std::endl;
            continue;
        }
    }

    std::cout << "\nCreation date of Menu: " << asctime(localtime(&creationTime)) << std::endl;
}