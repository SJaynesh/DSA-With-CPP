#include <iostream>
using namespace std;

class City
{
    int pincode;

public:
    // Default Constructor
    City()
    {
        cout << endl
             << "WELCOME MY CITY" << endl;
    }
    void setter()
    {
        cout << "Enter city pincode number : ";
        cin >> this->pincode;
    }

    void getter()
    {
        cout << endl
             << "Pincode : " << this->pincode << endl;
    }

    // Destructor
    ~City()
    {
        cout << endl
             << "Thanks for VISIT" << endl;
    }
};

int main()
{
    City c1;

    c1.setter();
    c1.getter();
}