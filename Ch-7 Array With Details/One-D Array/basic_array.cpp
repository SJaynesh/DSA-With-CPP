#include <iostream>
using namespace std;

main()
{
    // 1D Array : Datatype arrayName[size];
    // Datatype arrayName[size] = {elements};

    // Static Array

    // int array[5];
    int array[50] = {10, 20, 30, 40, 50};

    // array[0] = 10;
    // array[1] = 20;
    // array[2] = 30;
    // array[3] = 40;
    // array[4] = 50;

    array[41] = 78;

    for (int i = 0; i < 50; i++)
    {
        cout << array[i] << endl; // 10
    }
}