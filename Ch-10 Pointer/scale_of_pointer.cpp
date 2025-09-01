#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    int *ptr = &a[0];

    // cout << *ptr;

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << "\t";
    }
}