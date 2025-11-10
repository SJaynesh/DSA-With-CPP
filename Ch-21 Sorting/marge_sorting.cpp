#include <iostream>
#include <vector>
using namespace std;

void marge(vector<int> &a, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(a[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(a[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(a[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
        a[i + start] = temp[i];
}

void marge_sort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;

        marge_sort(a, start, mid);   // Left
        marge_sort(a, mid + 1, end); // Right

        marge(a, start, mid, end);
    }
}

int main()
{
    int n;

    cout << "Enter number elements: ";
    cin >> n;

    vector<int> a;

    cout << endl
         << "Enter array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter a[" << i << "] : ";
        cin >> element;
        a.push_back(element);
    }

    cout << endl
         << "Array is : ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    marge_sort(a, 0, n - 1);

    cout << endl
         << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}