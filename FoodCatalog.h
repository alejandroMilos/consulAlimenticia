// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include <vector>
#include "FoodGroup.h"

class FoodCatalog : public FoodGroup
{
    std::vector<std::string> groupList; // hacemos la lista de grupos disponibles
    public:
        // constructores
        FoodCatalog() {} // por omision
        FoodCatalog(std::string name, double calories) : FoodGroup(name, calories) {}
        
        // destructor
        ~FoodCatalog() {}

        // metodos publicos
        void addGroup(std::string& groupName); // agregamos un grupo a la lista de grupos disponibles en el catalogo
        void deleteGroup(std::string& groupName); // removemos un grupo de la lista de grupos disponibles en el catalogo
        
        // metodo de impresion
        void printGroupList();
};

void FoodCatalog::addGroup(std::string& groupName)
{
    groupList.push_back(groupName);
}

void FoodCatalog::deleteGroup(std::string& groupName)
{
    // buscamos que el grupo este en la lista y lo eliminamos
    for (auto it = groupList.begin(); it != groupList.end(); it++) // "it" es como estaremos estableciendo a cada grupo dentro de la lista de grupos disponibles
    {
        if (*it == groupName)
        {
            groupList.erase(it);
            break;
        }
    }
}

void FoodCatalog::printGroupList()
{
    std::cout << "Groups available:" << std::endl;
    for (auto& groupName : groupList) // recorremos cada elemento del vector "groupList" e imprimimos cada grupo disponible por nombre y elementos
    {
        std::cout << "- "<< groupName << std::endl;
        for (auto& group : foodGroups) // recorremos cada elemento del mapa "foodGroups" e imprimimos cada grupo junto con sus alimentos correspondientes
        {
            std::cout << "Group: " << group.first << std::endl;
            for (auto& foodItem : group.second)
            {
                foodItem.printItem();
            }
        std::cout << std::endl;
        }
    }
}