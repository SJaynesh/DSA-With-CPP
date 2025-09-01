#include <iostream>
using namespace std;

int main()
{
    string name;
    string *ptr;

    ptr = &name;

    cout << "Enter your name :";
    cin >> name;

    cout << "Name\t: " << name << endl;
    cout << "Name\t: " << *ptr << endl
         << endl;

    *ptr = "Hello";

    cout << "Name\t: " << name << endl;
    cout << "Name\t: " << *ptr << endl
         << endl;
}