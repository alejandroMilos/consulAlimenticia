// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "FoodItem.h"

class FoodGroup : public FoodItem // la clase FoodGroup hereda con ambito publico la clase FoodItem
{
    std::string Group;
    protected:
        std::map<std::string, std::vector<FoodItem> > foodGroups; // creamos un mapa para poder almacenar los alimentos acorde a su grupo

    public:
        // constructores
        FoodGroup() {} // por omision
        FoodGroup(std::string name, double calories) : FoodItem(name, calories) {}
        
        // destructor
        ~FoodGroup() {}

        // setter
        void setGroup(int);

        // getter
        std::string getGroup();

        // metodo de impresion
        void printGroup();
};

void FoodGroup::setGroup(int group)
{
    std::cout << "The available food groups are the next ones:" << std::endl;
    std::cout << "Group 1: Fruits" << std::endl;
    std::cout << "Group 2: Vegetables" << std::endl;
    std::cout << "Group 3: Animal Originated" << std::endl;
    std::cout << "Group 4: Cereals" << std::endl;
    std::cout << "Group 5: Leguminose" << std::endl;
    std::cout << "Group 0: Finish groups" << std::endl;

    while(true)
    {
        std::cout << "Please enter the number of the group to which the food belongs (0 to finish): ";
        int choice;
        std::cin >> choice;

        if (choice == 0) // establecemos que si la opcion es "0", la seleccion de alimentos finaliza.
        {
            break;
        }

        if (choice < 1 || choice > 5)
        {
            std::cout << "Invalid option! Please choose from the valid group options." << std::endl;
            continue;
        }
        
        std::string groupName;
        if (choice == 1)
        {
            groupName = "Fruits";
        } else if (choice == 2)
        {
            groupName = "Vegetables";
        } else if (choice == 3)
        {
            groupName = "Animal Originated";
        } else if (choice == 4)
        {
            groupName = "Cereals";
        } else if (choice == 5)
        {
            groupName = "Leguminose";
        }

        std::string name;
        double calories;

        std::cin.ignore(); // sirve para limpiar el bufer de linea que aparece antes de leer el nombre del alimento
        
        std::cout << "Type the name of the item: ";
        std::cin >> name;
        
        std::cout << "Type the calories of the item: ";
        std::cin >> calories;

        foodGroups[groupName].push_back(FoodItem(name, calories)); // mandamos a llamar a foodGroups para almacenar los alimentos por grupo
    }

    // Imprimimos los alimentos de los grupos seleccionados
    std::cout << std::endl;
    std::cout << "Food items of groups: " << std::endl;
    for (auto& group : foodGroups) // recorremos cada elemento del mapa "foodGroups" e imprimimos cada grupo junto con sus alimentos correspondientes
    {
        std::cout << "Group: " << group.first << std::endl;
        for (auto& foodItem : group.second)
        {
            foodItem.printItem();
        }
        std::cout << std::endl;
    }

    std::cin.ignore();
}

std::string FoodGroup::getGroup()
{
    return Group;
}

void FoodGroup::printGroup()
{
    std::cout << "Current group: " << Group << std::endl;
}