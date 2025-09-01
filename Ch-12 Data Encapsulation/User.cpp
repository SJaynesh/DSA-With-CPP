#include <iostream>
#include <string.h>
using namespace std;

class User
{
    // Attributes
private:
    int id;
    char userName[20];
    string email;
    char password[20];

public:
    // Setter
    void setUserData(int id, char userName[], string email, char password[])
    {
        this->id = id;                    // id = 101
        strcpy(this->userName, userName); // userName = b; // userName = Aman
        this->email = email;              // email = aman@gmail.com
        strcpy(this->password, password);
    }

    // Getter
    void getUserData()
    {
        cout << endl
             << endl;
        cout << "User Id\t\t: " << this->id << endl;
        cout << "User Name\t: " << this->userName << endl;
        cout << "User Email\t: " << this->email << endl;
        cout << "User Password\t: " << this->password << endl;
    }
};