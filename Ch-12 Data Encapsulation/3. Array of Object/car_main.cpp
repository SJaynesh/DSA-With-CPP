#include <iostream>
#include "Car.cpp"
using namespace std;

int main()
{
    // int array[5];
    /*

    cars
    [id: name: color: price: ] [id: name: color: price: ] [id: name: color: price: ] [id: name: color: price: ] [id: name: color: price: ]
    0                           1                           2                           3                           4

    */
    int size;

    cout << "Enter number of cars : ";
    cin >> size;

    // Array Of Object
    Car cars[size];

    for (int i = 0; i < size; i++)
    {
        cout << endl
             << "Car No : " << i + 1;
        cars[i].setCarData();
    }

    for (int i = 0; i < size; i++)
        cars[i].getCarData();

    cars[0].sumOFCarPrice(size, cars);
}