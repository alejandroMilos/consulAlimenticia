// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include "FoodItem.h"

int main()
{
    FoodItem item1;
    item1.setFoodName("Manzana");
    item1.setCalories(52.0);
    item1.printItem();

    FoodItem item2;
    item2.setFoodName("Platano");
    item2.setCalories(96.8);
    item2.printItem();
}