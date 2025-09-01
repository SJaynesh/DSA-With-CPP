#include <iostream>
using namespace std;

// Student Structure
class Student
{
public:
    // Attributes == Data Members
    int rollNo;      // 4
    char name[20];   // 20
    int age;         // 4
    char course[20]; // 20
};

int main()
{
    // Object : class_name objName;
    Student student;
    Student student1;

    // cout << "Student Class Bytes : " << sizeof(student);

    // (.) Dot Operator

    cout << "Enter your roll no : ";
    cin >> student.rollNo;
    cout << "Enter your name : ";
    cin >> student.name;
    cout << "Enter your age : ";
    cin >> student.age;
    cout << "Enter your course : ";
    cin >> student.course;

    cout << endl
         << endl
         << "Student Info" << endl
         << endl;

    cout << "Roll No\t: " << student.rollNo << endl;
    cout << "Name\t: " << student.name << endl;
    cout << "Age\t: " << student.age << endl;
    cout << "Course\t: " << student.course << endl;
}