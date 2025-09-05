#include <iostream>
using namespace std;

// Parent Class
class Father
{
protected:
    double amount;

    Father()
    {
        this->amount = 350;
    }
};

// Parent Class
class Mother
{
protected:
    double pocketAmount;

    Mother()
    {
        this->pocketAmount = 100;
    }
};

// Parent Class
class Brother
{
protected:
    double brotherAmount;

    Brother()
    {
        this->brotherAmount = 2000;
    }
};

// Child Class
class Me : public Father, Mother, Brother
{
private:
    double total;

public:
    void myTotalAmout()
    {
        this->total = amount + pocketAmount + brotherAmount;

        cout << endl
             << "Total My Amout : " << this->total << endl;
    }
};

int main()
{

    Me m1;

    m1.myTotalAmout();
}