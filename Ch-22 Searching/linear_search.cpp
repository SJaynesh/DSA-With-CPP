#include <iostream>
using namespace std;

int searching(int a[], int n)
{
    int search_element;

    cout << endl;
    cout << "Enter any element : ";
    cin >> search_element;

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (search_element == a[i])
        {
            index = i;
            break;
        }
    }

    return index;
}

int main()
{
    int n;

    cout << "Enter number of elements : ";
    cin >> n;

    int a[n];

    cout << endl
         << "Enter elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << "Array is : ";
    for (int element : a)
    {
        cout << element << " ";
    }

    int index = searching(a, n);

    if (index == -1)
    {
        cout << endl
             << "element not found.." << endl;
    }
    else
    {
        cout << endl
             << "Searching element index : " << index << endl;
    }
}