#include <iostream>
using namespace std;

main()
{
    int a = 1;
    int n;

    cout << "Enter any number : ";
    cin >> n; // 24

    while (n >= a) // 24 >= 1
    {
        cout << n << "\t"; // 24
        n--;               // 23
    }
}