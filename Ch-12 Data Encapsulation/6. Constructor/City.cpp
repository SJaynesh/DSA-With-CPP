#include <iostream>
using namespace std;

class City
{
private:
    string cityName;
    int pincode;

public:
    // Default Constructor
    City()
    {
        cout << endl
             << "WELCOME MY CITY" << endl;
    }

    // Parameterized Constructor
    City(string cityName, int pincode)
    {
        this->cityName = cityName;
        this->pincode = pincode;
    }

    // Copy Constructor
    City(City &obj)
    {
        this->cityName = obj.cityName;
        this->pincode = obj.pincode;
    }

    void getCityData()
    {
        cout << endl;
        cout << "City Name    : " << this->cityName << endl;
        cout << "City Pincode : " << this->pincode << endl;
    }
};

int main()
{
    City c1("Rajkot", 389654);
    // City c2 = c1; // Deep Copy

    City c2(c1); // Deep Copy

    City c3;

    c1.getCityData(); // suart
    c2.getCityData(); // rajkot
}