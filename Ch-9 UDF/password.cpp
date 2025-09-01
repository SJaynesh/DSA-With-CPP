#include <iostream>
#include "function.cpp"
using namespace std;

int main()
{
    char psw[20];

    cout << "Enter yuor password : ";
    cin >> psw; // abc@123
    //             0123456

    (checkPasswordIsStrongOrNotStrong(psw)) ? cout << "password is strong..." : cout << "password not strong...";
}