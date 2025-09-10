#include <iostream>
using namespace std;

class Math
{
public:
    void sum()
    {
        int a = 10;
        cout << endl
             << "A\t: " << ++a;
    }

    void sum(int a, int b)
    {
        cout << a << " + " << b << " = " << a + b << endl;
    }

    void sum(int a, int b, int c)
    {
        cout << a << " + " << b << " + " << c << " = " << a + b + c << endl;
    }

    float sum(float a, float b, float c)
    {
        return a + b + c;
    }
};

int main()
{
    Math m1;

    m1.sum(10, 20);
    float ans = m1.sum(10.20f, 20.20f, 30.20f);

    cout << ans;
}