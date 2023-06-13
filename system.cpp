// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include "FoodGroup.h"
#include "User.h"

int main()
{
    User user;
    user.printUser();
    user.calculateBM();
    
    std::cout << std::endl;

    FoodGroup foodGroup;
    while (true)
    {
        std::cout << "Do you wish to add food to an existing group or finalize the selection?" << std::endl;
        std::cout << "1. Add food to an existing group" << std::endl;
        std::cout << "2. Finalize selection" << std::endl;
        std::cout << "Enter an option: ";
        int choice;
        std::cin >> choice;
        std::cout << std::endl;

        if (choice == 2)
        {
            break;
        } else if (choice != 1)
        {
            std::cout << "Invalid option! Please choose from the available ones." << std::endl;
            continue;
        }

        foodGroup.setGroup(choice);
    }

    return 0;
}