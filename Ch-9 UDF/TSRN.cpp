#include <iostream>
using namespace std;

// TSRN (Take Something and Return Nothing)

void sum(int, int, int, char);

int main()
{
    int a, b, c;

    cout << "Enter first, second, third numbers : ";
    cin >> a >> b >> c;

    sum(a, b, c, 'J');

    return 0;
}
void sum(int a, int b, int c, char ch)
{
    cout << a << " + " << b << " + " << c << " = " << a + b + c << endl;
    cout << "Character : " << ch << endl;
}