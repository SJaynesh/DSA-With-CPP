#include <iostream>
using namespace std;

// Parent Class
class A
{
protected:
    int a;

public:
    void setA()
    {
        cout << "Enter a : ";
        cin >> this->a;
    }

    void getA()
    {
        cout << endl
             << "A\t: " << this->a << endl;
    }
};

// Parent / Child Class
class B : public A
{
protected:
    int b;

public:
    // setA();
    // getA();

    void setB()
    {
        cout << "Enter b : ";
        cin >> this->b;
    }

    void getB()
    {
        cout << endl
             << "B\t: " << this->b << endl;
    }
};

// Child Class
class C : public B
{
private:
    int c;

public:
    // setA();
    // getA();
    // setB();
    // getB();
    void setC()
    {
        cout << "Enter c : ";
        cin >> this->c;
    }

    void getC()
    {
        cout << endl
             << "C\t: " << this->c << endl;
    }

    void additionOfAllClass()
    {
        cout << endl
             << a << " + " << b << " + " << c << " = " << a + b + c << endl;
    }
};