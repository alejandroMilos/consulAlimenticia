// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include "FoodGroup.h"
#include "User.h"

int main()
{
    User user1;
    user1.setName("Marco");
    user1.setAge(20);
    user1.setWeight(75.4);
    user1.setHeight(177);
    user1.setActivityFactor(1.725);
    user1.setGender('M');
    user1.printUser();
    user1.calculateBM();

    std::cout << "\n" << std::endl;

    User user2;
    user2.setName("Jezabel");
    user2.setAge(19);
    user2.setWeight(49.54);
    user2.setHeight(155);
    user2.setActivityFactor(1.725);
    user2.setGender('F');
    user2.printUser();
    user2.calculateBM();

    std::cout << "\n" << std::endl;

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