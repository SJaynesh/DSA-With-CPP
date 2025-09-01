#include <iostream>
using namespace std;

main()
{
    int n;

    cout << "Enter any number : ";
    cin >> n; // 5

    int a = 1;
    while (a <= 10)
    {
        cout << n << " * " << a << " = " << n * a << endl; // 5 * 1 = 5
        a++;
    }
}