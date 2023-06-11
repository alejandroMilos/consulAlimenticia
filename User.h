// Alejandro & Marco Miloslavich Airola (A01424120, A01424280)
// 10-06-2023
// Situacion Problema: POO - Consulta Alimenticia 

#include <iostream>
#include <string>

class User
{
    std::string Name;
    int Age;
    double Weight;
    double Height;
    double ActivityFactor;
    public:
        // constructores
        User(); // por omision
        User(const std::string name, const int age, const double weight, const double height, const double actfactor) : Name(name), Age(age), Weight(weight), Height(height), ActivityFactor(actfactor) {}; // por definicion

        // destructor
        ~User() {}

        // setters
        void setName(std::string);
        void setAge(int);
        void setWeight(double);
        void setHeight(double);
        void setActivityFactor(double);

        // getters
        std::string getName();
        int getAge();
        double getWeight();
        double getHeight();
        double getActivityFactor();

        // metodo de impresion
        void printUser();
};

User::User()
{
    Name = " ";
    Age = 0;
    Weight = 0.0;
    Height = 0.0;
    ActivityFactor = 0.0;
}

void User::setName(std::string _name)
{
    Name = _name;
}
void User::setAge(int _age)
{
    Age = _age;
}
void User::setWeight(double _weight)
{
    Weight = _weight;
}
void User::setHeight(double _height)
{
    Height = _height;
}
void User::setActivityFactor(double _activityfactor)
{
    ActivityFactor = _activityfactor;
}

std::string User::getName()
{
    return Name;
}
int User::getAge()
{
    return Age;
}
double User::getWeight()
{
    return Weight;
}
double User::getHeight()
{
    return Height;
}
double User::getActivityFactor()
{
    return ActivityFactor;
}

void User::printUser()
{
    std::cout << "Username: " << Name << "\nAge: " << Age << "\nWeight: " << Weight << "kg" << "\nHeight: " << Height << "m" 
    << "\nThe Activity Factor is based on the following specifications:" << "\n-> 1.2 for sedentary people"
    << "\n-> 1.375 for people who excercise 1 to 3 days a week" << "\n-> 1.55 for people who excercise 3 to 5 days a week"
    << "\n-> 1.725 who excercise 6 to 7 days a week" << "\n-> 1.9 for people who excercise more than 4 hours a day (professional athletes)"
    << "\nActivity Factor: " << ActivityFactor << std::endl;
}