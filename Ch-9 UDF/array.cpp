#include <iostream>
#include "function.cpp"
using namespace std;

int main()
{
    int size;

    cout << "Enter number of elements : ";
    size = inputInt();

    int array[size];

    arrayInput(size, array);

    cout << endl
         << "Array Elements Sum : " << arrayElementsSum(size, array);

    return 0;
}