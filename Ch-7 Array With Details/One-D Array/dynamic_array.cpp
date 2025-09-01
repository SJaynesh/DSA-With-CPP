#include <iostream>
using namespace std;

main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int a[size];

    cout << endl
         << "Array Input" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : "; // Enter a[1] : 20
        cin >> a[i];
    }

    cout << endl
         << "Array Output" << endl;
    for (int i = 0; i < size; i++)
        cout << a[i] << "\t";

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    cout << endl
         << endl
         << "Array Sum : " << sum << endl;

    cout << endl
         << "Array AVG : " << (float)sum / size << endl;
}