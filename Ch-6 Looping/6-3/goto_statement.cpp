#include <iostream>
using namespace std;

main()
{
    int i = 1;
loop:
    if (i <= 10)
    {
        cout << i << endl;
        i++;
        goto loop;
    }
}