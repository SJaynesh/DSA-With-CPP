#include <iostream>
using namespace std;

// Single / Simple Inheritance

// Parent Class
class Animal
{
protected:
    char name[20];
    int age;

public:
    //  Default Constructor
    Animal()
    {
        cout << endl
             << "WELCOME MY ZOO" << endl;
    }
    // Setter
    void setAnimalData()
    {
        cout << "Enter animal name : ";
        cin >> this->name;
        cout << "Enter animal age : ";
        cin >> this->age;
    }

    // Getter
    void getAnimalData()
    {
        cout << "Animal Name : " << this->name << endl;
        cout << "Animal Age  : " << this->age << endl;
    }
};

// Child Class
class Dog : public Animal
{
    // Animal()
    // setAnimalData()
    // getAnimalData()
public:
    
    Dog()
    {
        cout << endl
             << "🐶🐶 DOG 🐶🐶" << endl;
    }
    void sound()
    {
        cout << endl
             << "Bhow Bhow..." << endl;
    }
};