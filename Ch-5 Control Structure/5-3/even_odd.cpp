#include <iostream>
using namespace std;

main()
{
    int num;

    cout << "Enter any number : ";
    cin >> num;

    (num % 2 == 0)
        ? cout << num << " is even" << endl
               << "Hello"
        : cout << num << " is odd";
}