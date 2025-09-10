#include <iostream>
using namespace std;

class Demo
{
    int n;

public:
    void setDemoData()
    {
        cout << "Enter any number : ";
        cin >> this->n;
    }

    void getDemoData()
    {
        cout << "N\t: " << this->n << endl;
    }

    // Unary Operator Oveloading

    // Post Increment
    Demo operator++(int val)
    {
        Demo tmp;
        tmp.n = this->n + 1;
        return tmp;
    }

    // Pre Increment
    Demo operator++()
    {
        Demo tmp;
        tmp.n = ++this->n;
        return tmp;
    }
};

int main()
{
    Demo d1, d2;

    d1.setDemoData(); // d1 [n => 12]

    // d2 = d1++; // d2 = d1 + 1; d2 = d1.operator++(1)
    d2 = ++d1; // d2 = 1 + d1; d2 = d1.operator++()

    d1.getDemoData(); // 13
    d2.getDemoData(); // 13
}