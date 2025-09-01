#include <iostream>
using namespace std;

main()
{
    int a, b, c;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;

    if (a == b && a == c && b == c)
    {
        cout << endl
             << "All are equal...." << endl;
    }
    else if (a == b || a == c || b == c)
    {
        cout << endl
             << "Both are equal...." << endl;
    }
    else
    {
        if (a > b)
        {
            if (a > c)
                cout << endl
                     << a << " is Max...." << endl;
            else
                cout << endl
                     << c << " is Max...." << endl;
        }
        else
        {
            if (b > c)
                cout << endl
                     << b << " is Max...." << endl;
            else
                cout << endl
                     << c << " is Max...." << endl;
        }
    }
}