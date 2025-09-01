#include <iostream>
using namespace std;

main()
{
    int row, col;

    cout << "Enter row : ";
    cin >> row;
    cout << "Enter column : ";
    cin >> col;

    int a[row][col];

    cout << endl
         << "Array Input" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    int sum = 0;

    cout << endl
         << "Array Output" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
            sum += a[i][j];
        }
        cout << endl;
    }

    cout << endl
         << endl
         << "Sum : " << sum << endl;

    cout << endl
         << endl
         << "AVG : " << (float)sum / (row * col) << endl;
}
