// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include <vector>
#include <fstream>
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
        void viewFoodGroupsContentFromList(const std::string& fileName);
        
        // metodo de impresion
        void printGroupListFromFile(const std::string& fileName);
};

void FoodCatalog::printGroupListFromFile(const std::string& fileName)
{
    std::ifstream inputFile(fileName);
    if (inputFile.is_open())
    {
        std::string line;
        std::cout << "---- Loading Food Catalog... ----" << std::endl;
        std::cout << "Groups Available: " << std::endl;
        while (std::getline(inputFile, line))
        {
            if (line.find("- Group: ") != std::string::npos)
            {
                std::cout << line << std::endl;
            }
        }
        inputFile.close();
    }
    else
    {
        std::cout << "Unable to open file: " << fileName << std::endl;
    }
}

void FoodCatalog::viewFoodGroupsContentFromList(const std::string& fileName)
{
    std::ifstream inputFile(fileName);
    if (inputFile.is_open())
    {
        std::string line;
        while (std::getline(inputFile, line))
        {
            if (line.find("- Group: ") != std::string::npos)
            {
                std::cout << line << std::endl;
                    while (std::getline(inputFile, line) && line.find("Food Item: ") != std::string::npos)
                    {
                        std::cout << line << std::endl;
                    }
                    std::cout << std::endl;
            }
        }
        inputFile.close();
    }
    else
    {
        std::cout << "Unable to open file: " << fileName << std::endl;
    }
}
