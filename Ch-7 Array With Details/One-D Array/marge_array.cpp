#include <iostream>
using namespace std;

main()
{
    int size1, size2;

    cout << "Enter size 1 : ";
    cin >> size1;
    cout << "Enter size 2 : ";
    cin >> size2;

    int a[size1], b[size2];
    int marge[size1 + size2];

    cout
        << endl
        << "First Array Input" << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << "Second Array Input" << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter b[" << i << "] : ";
        cin >> b[i];
    }

    // Marge Logic
    for (int i = 0; i < size1; i++)
    {
        marge[i] = a[i];
    }

    for (int i = 0; i < size2; i++)
    {
        marge[i + size1] = b[i];
    }

    for (int i = 0; i < size1 + size2; i++)
    {
        cout << marge[i] << "\t";
    }
}