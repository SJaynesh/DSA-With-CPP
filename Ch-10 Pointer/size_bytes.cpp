#include <iostream>
using namespace std;

int main()
{
    cout << "Int Bytes : " << sizeof(int) << endl;
    cout << "Char Byte : " << sizeof(char) << endl;
    cout << "Float Bytes : " << sizeof(float) << endl;
    cout << "Double Bytes : " << sizeof(double) << endl;
    cout << "Long Int Bytes : " << sizeof(long int) << endl;
    cout << "Long Long Int Bytes : " << sizeof(long long int) << endl;
    cout << "Short Int Bytes : " << sizeof(short int) << endl;
    cout << "Bool Bytes : " << sizeof(bool) << endl
         << endl;

    int a[10];

    // sizeof(a) / sizeof(a[0])
    // 40 / 4 = 10 length

    int size = sizeof(a) / sizeof(a[0]);

    cout
        << "Array Bytes : " << sizeof(a) << endl;

    cout
        << "Array Size : " << size << endl;

    char name[50];
    cout << "String Bytes : " << sizeof(name) << endl;
}