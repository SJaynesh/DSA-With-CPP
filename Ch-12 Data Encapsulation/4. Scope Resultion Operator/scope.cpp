#include <iostream>
using namespace std;

// Global Variable
int x = 90;

int main()
{

    int x = 50;
    cout << "Global X : " << ::x << endl; // 90
    cout << "Local  X : " << x;           // 50
}