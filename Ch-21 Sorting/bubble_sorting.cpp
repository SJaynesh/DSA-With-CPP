#include <iostream>
using namespace std;

void bubble_sort(int[], int);

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int a[size];

    cout << endl
         << "Array Input" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << "Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    bubble_sort(a, size);

    cout << endl
         << "Sorted Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubble_sort(int a[], int size)
{
    int pass = 1;

    while (pass <= size - 1)
    {
        for (int i = 0; i < size - pass; i++)
        {
            if (a[i] > a[i + 1]) // 9 > 3
            {
                // swapping
                int swap = a[i]; // swap = 9
                a[i] = a[i + 1]; // a[1] = 3
                a[i + 1] = swap; // a[2] = 9
            }
        }

        pass++;
    }
}