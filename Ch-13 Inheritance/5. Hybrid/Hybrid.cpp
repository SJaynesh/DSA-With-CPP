#include <iostream>
using namespace std;

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

class B : public A
{
protected:
    int b;

public:
    // setA()
    // setB()
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

class C : public A
{
protected:
    int c;

public:
    // setA();
    // getA();
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
};

class D : public C, public B
{
private:
    int d;

public:
    // setA(); => B Class
    // setA(); => C Class
    // setB();
    // setC();

    // getA(); => B Class
    // getA(); => C Class
    // getB();
    // getC();
    void setD()
    {
        cout << "Enter d : ";
        cin >> this->d;
    }

    void getD()
    {
        cout << endl
             << "D\t: " << this->d << endl;
    }

    void sum()
    {
        cout << "Sum : " << C::a + b + c + d;
    }
};

int main()
{
    D d1;

    d1.B::setA();
    d1.setB();
    d1.setC();
    d1.setD();

    d1.B::getA();
    d1.getB();
    d1.getC();
    d1.getD();

    d1.sum();

    // d1.C::a = 32;
}