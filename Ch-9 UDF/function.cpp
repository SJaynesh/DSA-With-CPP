#include <iostream>
#include <string.h>
using namespace std;
// Input Int Val
int inputInt()
{
    int n;
    cin >> n;
    return n;
}

// (Output Array)
void arrayOutput(int n, int a[])
{
    cout << endl
         << endl
         << "Array Output" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}

// TSRN (Input Array)
void arrayInput(int n, int a[])
{
    cout << endl
         << endl
         << "Array Input" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "] : ";
        a[i] = inputInt(); // Nasted Function
    }

    arrayOutput(n, a);
}

// TSRS (Array Elements Sum)
int arrayElementsSum(int n, int a[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

int checkPasswordIsStrongOrNotStrong(char psw[])
{
    int len = strlen(psw);

    int upr = 0, lwr = 0, digit = 0, symbol = 0;

    if (len >= 6)
    {
        for (int i = 0; i < len; i++)
        {
            if (psw[i] >= 65 && psw[i] <= 90)
            {
                upr++;
            }
            else if (psw[i] >= 97 && psw[i] <= 122)
            {
                lwr++;
            }
            else if (psw[i] >= 48 && psw[i] <= 57)
            {
                digit++;
            }
            else
            {
                symbol++;
            }
        }

        // cout << "Total Uppercase : " << upr;
        // cout << "Total Lowercase : " << lwr;
        // cout << "Total Digit : " << digit;
        // cout << "Total Symbol : " << symbol;

        if (upr >= 1 && lwr >= 1 && digit >= 1 && symbol >= 1)
        {
            return 1;
            // cout << endl
            //      << "Password is strong...";
        }
        else
        {
            return 0;
            // cout << endl
            //      << "Password not strong...";
        }
    }
    else
    {
        return 0;
        // cout << endl
        //      << "Password not strong...";
    }
}