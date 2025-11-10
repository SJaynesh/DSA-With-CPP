#include <iostream>
using namespace std;

void selection_sort(int[], int);

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int a[size];

    cout << endl
         << "Enter array elements : " << endl;
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

    selection_sort(a, size);

    cout << endl
         << "Sorted Array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void selection_sort(int a[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[min_index] > a[j])
            {
                min_index = j;
            }
        }

        int swap = a[min_index];
        a[min_index] = a[i];
        a[i] = swap;
    }
}