#include <iostream>
using namespace std;

class Math
{
public:
    void mul(int a, int b)
    {
        cout << a << " * " << b << " = " << a * b << endl;
    }
};

class Std9 : public Math
{
public:
    void mul(int a, int b)
    {
        Math::mul(a, b);
        cout << "Value of " << a << " and " << b << " are Multiplication of " << a * b << endl;
    }
};

int main()
{
    Std9 s1;

    s1.mul(10, 5);
}