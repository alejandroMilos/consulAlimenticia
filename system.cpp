// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include "FoodItem.h"
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

    FoodItem item1;
    item1.setFoodName("Manzana");
    item1.setCalories(52.0);
    item1.printItem();

    FoodItem item2;
    item2.setFoodName("Platano");
    item2.setCalories(96.8);
    item2.printItem();
}