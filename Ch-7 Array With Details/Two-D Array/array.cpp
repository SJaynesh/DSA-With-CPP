#include <iostream>
using namespace std;

main()
{
    // Syntax : Datatype arrayName[row][column];

    /*
        a [
                [10] [20] [30]
                 00   01   02
                [40] [50] [60]
                 10   11   12
                [70] [80] [90]
                 20   21   22
          ]
    */

    // Static 2D Array

    int a[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    // a[0][0] = 10

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}