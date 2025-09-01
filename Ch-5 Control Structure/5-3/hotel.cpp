#include <iostream>
using namespace std;

main()
{
    cout << endl
         << "WELCOME" << endl
         << endl;

    cout << "Press 1 for South Indian" << endl;
    cout << "Press 2 for Gujarati" << endl;
    cout << "Press 3 for Panjabi" << endl;

    int num;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << endl
             << "SOUTH INDIAN" << endl;

        break;
    case 2:
        cout << endl
             << "GUJARATI" << endl;

        break;
    case 3:
        // clear
        cout << endl
             << "PANJABI" << endl;

        cout << "Enter 1 for Kaju Tika" << endl;
        cout << "Enter 2 for Kaju Masala" << endl;
        cout << "Enter 3 for Kaju Kaju Tika" << endl;
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl
                 << "Your order is KAJU TIKA...." << endl;
            break;
        case 2:
            cout << endl
                 << "Your order is KAJU MASALA...." << endl;
            break;
        case 3:
            cout << endl
                 << "Your order is KAJU KAJU TIKA...." << endl;
            break;
        default:
            cout << endl
                 << "Your order is Invalid..." << endl;
        }

        break;
    default:
        cout << endl
             << "Invalid choice" << endl;
    }
}