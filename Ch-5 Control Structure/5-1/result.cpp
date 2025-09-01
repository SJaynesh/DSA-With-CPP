#include <iostream>
using namespace std;

main()
{
    float marks;

    cout << "Enter your marks : ";
    cin >> marks;

    if (marks >= 91 && marks <= 100)
    {
        cout << endl
             << "Grade : A1" << endl;
    }
    else if (marks >= 81 && marks <= 90)
    {
        cout << endl
             << "Grade : A2" << endl;
    }
    else if (marks >= 71 && marks <= 80)
    {
        cout << endl
             << "Grade : B1" << endl;
    }
    else if (marks >= 61 && marks <= 70)
    {
        cout << endl
             << "Grade : B2" << endl;
    }
    else if (marks >= 51 && marks <= 60)
    {
        cout << endl
             << "Grade : C1" << endl;
    }
    else if (marks >= 41 && marks <= 50)
    {
        cout << endl
             << "Grade : C2" << endl;
    }
    else if (marks >= 33 && marks <= 40)
    {
        cout << endl
             << "Grade : D" << endl;
    }
    else if (marks >= 0 && marks <= 32)
    {
        cout << endl
             << "Your are Failed....." << endl;
    }
    else
    {
        cout << endl
             << "Invalid Marks.............." << endl;
    }
}