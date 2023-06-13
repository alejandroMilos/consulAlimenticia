// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include <string>
#include <list>
#include <ctime> // se usa para trabajar con el tiempo y la fecha 
#include "FoodCatalog.h"

class Menu
{
    int quantity;
    double totalCal;
    std::time_t creationTime; // atributo para poder accesar al tiempo local en forma de fecha y hora.
    public:
        Menu();// por omision
        Menu(double totalCal, std::time_t creationTime, int quantity);

        // destructor
        ~Menu() {}
        
        // getters
        std::time_t getCreationTime();

        // metodo para calcular el total de las calorias contenidas en el menu
        void calculateTotalCal();

        // metodo de impresion
        void printMenu();
};

Menu::Menu()
{
    quantity = 0;
    totalCal = 0.0;
    creationTime = time(0);
}

void Menu::calculateTotalCal()
{
    
}

std::time_t Menu::getCreationTime()
{
    return creationTime;
}

void Menu::printMenu()
{
    std::cout << "Creation date of Menu: " << asctime(localtime(&creationTime)) << std::endl;
}