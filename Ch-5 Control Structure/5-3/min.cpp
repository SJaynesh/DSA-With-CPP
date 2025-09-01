#include <iostream>
using namespace std;

main()
{
    int a, b, c;

    cout << "Enter a , b and c : ";
    cin >> a >> b >> c;

    (a < b)
        ? (a < c) ? cout << a << " is minimum.."
                  : cout << c << " is minimum.."
    : (b < c) ? cout << b << " is minimum.."
              : cout << c << " is minimum..";
}