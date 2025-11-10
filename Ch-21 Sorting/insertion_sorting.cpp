#include <iostream>
using namespace std;

void insertion_sort(int[], int);

int main()
{
    int n;

    cout << "Enter number of elements : ";
    cin >> n;

    int a[n];

    cout << endl
         << "Enter array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << "Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    insertion_sort(a, n);

    cout << endl
         << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}