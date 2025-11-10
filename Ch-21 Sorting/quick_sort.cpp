#include <iostream>
#include <vector>
using namespace std;

int quickPartition(vector<int> &a, int start, int end)
{
    int pirot = a[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (a[j] <= pirot)
        {
            i++;
            swap(a[j], a[i]);
        }
    }

    i++;
    swap(a[end], a[i]);

    return i;
}

void quickSort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int pirotIndex = quickPartition(a, start, end);

        quickSort(a, start, pirotIndex - 1); // Left
        quickSort(a, pirotIndex + 1, end);   // Right
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a;

    cout << endl
         << "Enter elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter a[" << i << "]: ";
        cin >> element;

        a.push_back(element);
    }

    cout << endl
         << "Array is: ";
    for (int e : a)
    {
        cout << e << " ";
    }

    quickSort(a, 0, n - 1);

    cout << endl
         << "Sorted Array is: ";
    for (int e : a)
    {
        cout << e << " ";
    }
}