#include <iostream>
using namespace std;

int main()
{

    int a = 45;

    // Pointer
    int *ptr1;
    int **ptr2;
    int ***ptr3;

    ptr1 = &a;
    ptr2 = &ptr1;
    ptr3 = &ptr2;

    cout << "A\t: " << a << endl;
    cout << "PTR1\t: " << *ptr1 << endl;
    cout << "PTR2\t: " << **ptr2 << endl;
    cout << "PTR3\t: " << ***ptr3 << endl
         << endl;

    **ptr2 = 89;

    cout << "A\t: " << a << endl;
    cout << "PTR1\t: " << *ptr1 << endl;
    cout << "PTR2\t: " << **ptr2 << endl;
    cout << "PTR3\t: " << ***ptr3 << endl;
}