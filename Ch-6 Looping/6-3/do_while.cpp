#include <iostream>
using namespace std;

main()
{
    int i = 1;
    int n;

    cout << "Enter any number : ";
    cin >> n;

    do
    {
        if (i % 2 != 0)
            cout << i << endl;

        i++;
    } while (i <= n);
}