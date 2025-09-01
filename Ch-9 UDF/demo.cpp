#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
public:
    int emp_id;
    char emp_name[20];
    float emp_salary;

    void setEMPData()
    {
        cout << "Enter your employee id : ";
        cin >> emp_id;
        fflush(stdin);
        cout << "Enter your employee name : ";
        gets(emp_name);
        cout << "Enter your employee salary : ";
        cin >> emp_salary;
    }

    void getEMPData()
    {
        cout << "Employee ID\t: " << emp_id << endl
             << "Employee Name\t: " << emp_name << endl
             << "Employee Salary\t: " << emp_salary << endl;
    }
};

int main()
{
    Employee e1;

    e1.setEMPData();

    e1.getEMPData();
}