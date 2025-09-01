#include <iostream>
using namespace std;

main()
{
    int a, b;

    cout << "Enter first number : ";
    cin >> a; // 10
    cout << "Enter second number : ";
    cin >> b; // 20

    cout << endl
         << "A\t: " << a << endl
         << "B\t: " << b << endl;

    // using Third Variable

    // int c = a; // c = 10
    // a = b;     // a = 20
    // b = c;     // b = 10

    // without using third variable (+ -)

    // a = a + b; // a = 30;
    // b = a - b; // 30 - 20 = b = 10
    // a = a - b; // 30 - 10 = 20

    // without using third variable (* /)

    // a = a * b; // 10 * 20 = 200 = a
    // b = a / b; // 200 / 20 = 10 = b
    // a = a / b; // 200 / 10 = 20 = a

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout
        << endl
        << "A\t: " << a << endl
        << "B\t: " << b << endl;
}