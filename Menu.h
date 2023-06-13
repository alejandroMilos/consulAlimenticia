// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include <string>
#include <list>
#include <ctime> // se usa para trabajar con el tiempo y la fecha 
// #include "FoodGroup.h"

class Menu
{
    double totalCal;
    std::time_t creationTime;
    public:
        Menu();// por omision
        Menu(const double totalcal, const std::time_t creationtime) : totalCal(totalcal), creationTime(creationtime) {}

        // destructor
        ~Menu() {}

        // setters

        // getters
        double getTotalCal();
        std::time_t getCreationTime();

        // metodo para calcular el total de las calorias contenidas en el menu
        void calculateTotalCal();

        // metodo de impresion
        void printMenu();
};

Menu::Menu()
{
    totalCal = 0;
    creationTime = time(0);
}

std::time_t Menu::getCreationTime()
{
    return creationTime;
}

void Menu::printMenu()
{
    std::cout << "Creation date of Menu: " << asctime(localtime(&creationTime)) << std::endl;
}