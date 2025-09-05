#include "Student.cpp"

int main()
{
    Student s1, s2;

    // cout << "School Name : " << Student::school;

    Student::displayData();

    s1.setStudentData();
    s2.setStudentData();

    s1.getStudentData();
    s2.getStudentData();
}