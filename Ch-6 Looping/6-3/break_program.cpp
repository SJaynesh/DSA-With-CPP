#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 15; i++)
    {
        if (i == 8)
            break;
        cout << i << "\t";
    }
}