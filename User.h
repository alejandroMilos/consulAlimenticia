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
    std::cout << "Please enter your name: ";
    std::cin >> Name;
    std::cout << "Please enter your age: ";
    std::cin >> Age;
    std::cout << "Please enter your weight (in kg): ";
    std::cin >> Weight;
    std::cout << "Please enter your height (in cm): ";
    std::cin >> Height;
    std::cout << "The Activity Factor is based on the following specifications: " << std::endl;
    std::cout << "-> 1.2 for sedentary people" << "\n-> 1.375 for people who excercise 1 to 3 days a week" << "\n-> 1.55 for people who excercise 3 to 5 days a week"
    << "\n-> 1.725 for people who excercise 6 to 7 days a week" << "\n-> 1.9 for people who excercise more than 4 hours a day (professional athletes)" << std::endl;
    std::cout << "Please enter your Activity Factor: ";
    std::cin >> ActivityFactor;
    std::cout << "Please enter your gender M being <Male> or F being <Female>: ";
    std::cin >> Gender;
}

void User::calculateBM()
{
    // "if" para elaborar la evaluación de las calorías necesarias para hombres y para mujeres (debido a que los valores son distintos para hombres que para mujeres)
    if (Gender == 'M')
    {
        std::cout << "The recommended amount of calories for you to consume are: " << (66 + (13.7*Weight) + (5*Height) - (6.8*Age))*ActivityFactor << "kcal/day" << std::endl;
    }
    else if (Gender == 'F')
    {
        std::cout << "The recommended amount of calories for you to consume are: " << (655 + (9.6*Weight) + (1.8*Height) - (4.7*Age))*ActivityFactor << "kcal/day" << std::endl;
    }
    // excepción para confirmar que el usuario haya ingresado un valor válido, de lo contrario, mostrar el mensaje de error para que el usuario corriga sus datos ingresados erróneamente
    try
    {
        if (Gender != 'M' && Gender != 'F')
        {
            std::cout << "Invalid character, please choose from the avaliable ones!" << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return;
    }
}