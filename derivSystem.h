// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include "Menu.h"

class System
{
    User user;
    Menu menu;
    std::string menuType; // para establecer el tipo de menu entre "Diario, Semanal o Mensual"
    public:
        // constructor
        System(); // por omision

        // destructor
        ~System() {}

        // metodo de impresion
        void printUserMenu();

        // metodo para generar el menu
        void generateMenu();

        // metodo para mostrar datos del usuario
        void printUserInfo();

        // ejecutador
        void run();
};

System::System()
{
    menuType = "";
}

void System::printUserMenu()
{
    std::cout << "Please select the type of menu you want: " << std::endl;
    std::cout << "1. Daily Menu" << std::endl;
    std::cout << "2. Weekly Menu" << std::endl;
    std::cout << "3. Monthly Menu" << std::endl;
    std::cout << "Enter your choice: ";
    int choice;
    std::cin >> choice;

    switch (choice)
    {
        case 1:
            menuType = "Daily Menu";
            break;
        case 2:
            menuType = "Weekly Menu";
            break;
        case 3:
            menuType = "Monthly Menu";
            break;
        default:
            std::cout << "Invalid option! Please try again." << std::endl;
            break;
    }

    std::cout << std::endl;
}

void System::printUserInfo()
{
    std::cout << "- Username: " << user.getName() << std::endl;
    std::cout << "- Age: " << user.getAge() << std::endl;
    std::cout << "- Weight: " << user.getWeight() << "kg" << std::endl;
    std::cout << "- Height: " << user.getHeight() << "cm" << std::endl;
    std::cout << "- Activity Factor: " << user.getActivityFactor() << std::endl;
    std::cout << "- Gender: " << user.getGender() << std::endl;
    std::cout << std::endl;
}

void System::generateMenu()
{
    std::cout << "---- Generating Menu... ----\n" << std::endl;
    printUserMenu();
    std::cout << std::endl;
    std::cout << "Menu Type: " << menuType << std::endl;
    std::cout << "User Data:" << std::endl;
    printUserInfo();
    menu.printMenu();
}

void System::run()
{
    std::cout << "---- Welcome to the Menu Generator System! ----" << std::endl;
    user.printUser();
    user.calculateBM();
    
    std::cout << std::endl;

    generateMenu();
}