#include <iostream>
using namespace std;

void swapping(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a, b;

    cout << "Enter first number : ";
    cin >> a; // 10
    cout << "Enter second number : ";
    cin >> b; // 20

    swapping(&a, &b);

    cout << "A\t: " << a << endl; // A : 20
    cout << "B\t: " << b << endl; // B : 10
}