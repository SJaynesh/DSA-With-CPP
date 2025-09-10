#include <iostream>
using namespace std;

class ABC
{
private:
    int num;

public:
    void setABCData()
    {
        cout << "Enter any number : ";
        cin >> this->num;
    }

    void getABCData()
    {
        cout << "Number : " << this->num << endl;
    }

    // Binary Operator Oveloading
    ABC operator*(ABC obj)
    {
        ABC tmp;

        tmp.num = this->num * obj.num; // tmp.num =  a1.num + a2.num // 10 + 20

        return tmp;
    }

    ABC operator+(ABC obj1)
    {
        ABC tmp;

        tmp.num = this->num + obj1.num;

        return tmp;
    }
};

int main()
{
    ABC a1, a2, a3, a4, a5;

    a1.setABCData(); // 10
    a2.setABCData(); // 20
    a3.setABCData(); // 30

    // a3 = a1 * a2; // a3 = a1.operator*(a2)

    a4 = a1 + a2;
    a5 = a3 + a4; // 30 + 30 = 60

    a1.getABCData(); // 10
    a2.getABCData(); // 20
    a3.getABCData(); // 30
    a4.getABCData(); // 30
    a5.getABCData(); // 60
}