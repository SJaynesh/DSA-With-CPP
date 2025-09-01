#include <iostream>
using namespace std;

// TNRS (Take Nothing and Return Something)
int addition();
int inputInt();

int addition()
{
    int a, b;

    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    return a + b;
}

int inputInt()
{
    int n;
    cin >> n; // 25

    return n;
}

int main()
{
    // int ans = addition();
    cout << "Sum : " << addition() << endl;

    int age;

    cout << "Enter your age : ";
    age = inputInt();

    cout << "Age : " << age;
    return 0;
}