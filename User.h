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
    char Gender;
    public:
        // constructores
        User(); // por omision
        User(const std::string name, const int age, const double weight, const double height, const double actfactor, const char gender) : Name(name), Age(age), Weight(weight), Height(height), ActivityFactor(actfactor), Gender(gender) {}; // por definicion

        // destructor
        ~User() {}

        // setters
        void setName(std::string);
        void setAge(int);
        void setWeight(double);
        void setHeight(double);
        void setActivityFactor(double);
        void setGender(char);

        // getters
        std::string getName();
        int getAge();
        double getWeight();
        double getHeight();
        double getActivityFactor();
        char getGender();

        // metodo para calcular el metabolismo basal ()
        void calculateBM();

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
    Gender = 'M';
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
void User::setGender(char _gender)
{
    Gender = _gender;
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
char User::getGender()
{
    return Gender;
}

void User::printUser()
{
    std::cout << "Username: " << Name << "\nAge: " << Age << "\nWeight: " << Weight << "kg" << "\nHeight (in cm): " << Height << "cm" 
    << "\nThe Activity Factor is based on the following specifications:" << "\n-> 1.2 for sedentary people"
    << "\n-> 1.375 for people who excercise 1 to 3 days a week" << "\n-> 1.55 for people who excercise 3 to 5 days a week"
    << "\n-> 1.725 who excercise 6 to 7 days a week" << "\n-> 1.9 for people who excercise more than 4 hours a day (professional athletes)"
    << "\nActivity Factor: " << ActivityFactor << "\nGender being M <Male> or F <Female>: " << Gender << std::endl;
}

void User::calculateBM()
{
    if (Gender == 'M')
    {
        std::cout << "The recommended amount of calories for you to consume are: " << (66 + (13.7*Weight) + (5*Height) - (6.8*Age))*ActivityFactor << std::endl;
    }
    else if (Gender == 'F')
    {
        std::cout << "The recommended amount of calories for you to consume are: " << (655 + (9.6*Weight) + (1.8*Height) - (4.7*Age))*ActivityFactor << std::endl;
    }
}