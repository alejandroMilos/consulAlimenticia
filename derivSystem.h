// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include <fstream>
#include "Menu.h"

class System
{
    User user;
    FoodGroup foodGroup;
    FoodCatalog foodCatalog;
    Menu menu;
    public:

        // destructor
        ~System() {}

        // setters
        void run();
};

void System::run()
{
    user.printUser();
    user.calculateBM();
    
    std::cout << std::endl;

    menu.printMenu();
}