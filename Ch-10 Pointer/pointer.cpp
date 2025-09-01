#include <iostream>
using namespace std;

int main()
{
    int n = 25;

    // Pointer => Datatype *pointerName;
    int *ptr;

    // & => AddressOf Operator

    ptr = &n;

    cout << "Number : " << n << endl; // 25
    cout << "PTR : " << *ptr << endl
         << endl; // 25

    n = 78;

    cout << "Number : " << n << endl; // 78
    cout << "PTR : " << *ptr << endl
         << endl; // 78

    *ptr = 100;

    cout << "Number : " << n << endl; // 78
    cout << "PTR : " << *ptr << endl; // 78

    return 0;
}