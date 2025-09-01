#include <iostream>
using namespace std;

int fact(int n)
{
    // if (n <= 1)
    //     return 1;
    // else
    //     return n * fact(n - 1);

    return (n <= 1) ? 1 : n * fact(n - 1);
}

int main()
{
    int ans = fact(4);
    cout << "Fatorial Number : " << ans;
    return 0;
}