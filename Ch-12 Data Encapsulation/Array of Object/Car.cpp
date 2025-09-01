#include <iostream>
#include <string.h>
using namespace std;

class Car
{
private:
    // Attributes
    int id;
    char name[20];
    char color[20];
    double price;

public:
    // Setter
    void setCarData()
    {
        cout << endl;
        cout << "Enter your car id : ";
        cin >> this->id;
        fflush(stdin);
        cout << "Enter your car name : ";
        gets(this->name);
        fflush(stdin);
        cout << "Enter your car color : ";
        gets(this->color);
        cout << "Enter your car price : ";
        cin >> this->price;
    }

    // Getter
    void getCarData()
    {
        cout << endl
             << endl;
        cout << "Car Id\t\t: " << this->id << endl;
        cout << "Car Name\t: " << this->name << endl;
        cout << "Car Color\t: " << this->color << endl;
        cout << "Car Price\t: " << this->price << endl;
    }

    // Sum of car price
    void sumOFCarPrice(int size, Car cars[])
    {
        cout << endl;
        double sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += cars[i].price;
        }
        cout << "Cars Price Total : " << sum << endl;
    }
};