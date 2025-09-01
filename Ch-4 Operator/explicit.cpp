#include <iostream>
using namespace std;

main()
{

    // Float -> Int -> Char

    // Float -> Int
    int a = 10, b = 4;

    float PI = 3.14;

    cout << (float)a / b << endl; //

    cout << (int)PI << endl
         << endl;

    float number = 89.12;

    char ch = (int)number;

    cout << ch;
}