#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 3 != 0)
        {
            continue;
        }
        cout << i << "\t";
    }
}