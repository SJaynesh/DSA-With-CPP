#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int rollNo;
    char name[20];
    int age;

public:
    // Static Data Member
    static char school[20];
    // setter
    void setStudentData()
    {
        cout << endl;
        cout << "Enter your roll no : ";
        cin >> this->rollNo;
        fflush(stdin);
        cout << "Enter your name : ";
        gets(this->name);
        cout << "Enter your age : ";
        cin >> this->age;
    }

    // getter
    void getStudentData()
    {
        cout << endl
             << endl;
        cout << "Roll No\t: " << this->rollNo << endl;
        cout << "Name\t: " << this->name << endl;
        cout << "Age\t: " << this->age << endl;
        cout << "School\t: " << this->school << endl;
    }

    // Static Member Function
    static void displayData()
    {
        cout << "School : " << school << endl;
    }
};

char Student::school[20] = "ABC School";
