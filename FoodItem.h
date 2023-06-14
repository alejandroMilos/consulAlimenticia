// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include <string>

class FoodItem
{ 
    protected:
        std::string FoodName;
        double Calories;
    public:
        // constructores
        FoodItem(); // por omision
        FoodItem(std::string name, double calories) : FoodName(name), Calories(calories) {}; // por definicion
        
        // destructor
        ~FoodItem() {}

        // setters
        void setFoodName(std::string);
        void setCalories(double);

        // getters
        std::string getFoodName();
        double getCalories();

        // metodo de impresion
        virtual void printItem();
};

FoodItem::FoodItem()
{
    FoodName = " ";
    Calories = 0.0;
}

void FoodItem::setFoodName(std::string _name)
{
    FoodName = _name;
}
std::string FoodItem::getFoodName()
{
    return FoodName;
}
void FoodItem::setCalories(double _calories)
{
    Calories = _calories;
}
double FoodItem::getCalories()
{
    return Calories;
}

void FoodItem::printItem()
{
    std::cout << "Food Item: " << FoodName << " - " << "Calories: " << Calories << "kcal" << std::endl;
}