#include <iostream>
using namespace std;

main()
{
    int num;

    cout << "Enter any number : ";
    cin >> num;

    if ((num / 2) * 2 == num)
    {
        cout << num << " is even...";
    }
    else
    {
        cout << num << " is odd...";
    }
}