#include <iostream>
using namespace std;

main()
{
    int age;

    cout << "Enter your age : ";
    cin >> age; // 18

    if (age >= 18) // 18 >= 18
    {
        cout << "You can Vote !!";
    }
    else
    {
        cout << "You cannot Vote !!";
    }
}