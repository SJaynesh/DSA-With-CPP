#include <iostream>
using namespace std;

// int binary_search(int a[], int n, int target)
// {
//     int start = 0;
//     int end = n - 1;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;

//         if (target < a[mid])
//         {
//             end = mid - 1;
//         }
//         else if (target > a[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             return mid;
//         }
//     }

//     return -1;
// }

int binary_search(int a[], int start, int end, int target)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target < a[mid])
        {
            return binary_search(a, start, mid - 1, target);
        }
        else if (target > a[mid])
        {
            return binary_search(a, mid + 1, end, target);
        }
        else
        {
            return mid;
        }
    }

    return -1;
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

    int target;

    cout << "Enter search element : ";
    cin >> target;

    // int index = binary_search(a, n, target);
    int index = binary_search(a, 0, n - 1, target);

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