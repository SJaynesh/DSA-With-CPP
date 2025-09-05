#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
private:
    int id;
    char name[20];
    float salary;
    char role[20];

public:
    // Attributes == Data Members

    // Setter
    void setEmployeeData()
    {
        cout << "Enter your emp id : ";
        cin >> id;
        fflush(stdin);
        cout << "Enter your emp name : ";
        gets(name);
        cout << "Enter your emp salary : ";
        cin >> salary;
        fflush(stdin);
        cout << "Enter your emp role : ";
        gets(role);

        cout << endl
             << endl;
    }

    // Getter
    void getEmployeeData()
    {
        // cout
        //     << endl
        //     << endl;
        // cout << "EMP ID\t\t: " << id << endl;
        // cout << "EMP NAME\t: " << name << endl;
        // cout << "EMP SALARY\t: " << salary << endl;
        // cout << "EMP ROLE\t: " << role << endl;
        cout << "| " << id << "\t" << name << "\t" << salary << "\t" << role << " |" << endl;
    }

    void tableHeading()
    {
        cout << "| Id\tName\tSalary\tRole |" << endl;
    }
};