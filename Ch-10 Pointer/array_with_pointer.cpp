#include <iostream>
using namespace std;

int main()
{
    // Address  84  88  92  96  100
    int a[5] = {10, 20, 30, 40, 50};
    //          0   1   2   3   4

    int *ptr[5];

    for (int i = 0; i < 5; i++)
        ptr[i] = &a[i];

    for (int i = 0; i < 5; i++)
    {
        // printf("%u\t", ptr[i]);
        cout << *ptr[i] << "\t";
    }
}