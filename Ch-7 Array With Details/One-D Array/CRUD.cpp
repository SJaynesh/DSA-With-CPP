#include <iostream>
using namespace std;

main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int a[size];

    cout << endl
         << "Array Input" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << system("cls");
    int n;
    int pos, element;

    do
    {
        cout << endl
             << endl
             << "CRUD Operation" << endl;

        cout << "Press 1 for Insert" << endl;
        cout << "Press 2 for Push" << endl;
        cout << "Press 3 for Fetch" << endl;
        cout << "Press 4 for Update" << endl;
        cout << "Press 5 for Delete" << endl;
        cout << "Press 6 for Pop" << endl;
        cout << "Press 0 for Exit" << endl;

        cin >> n;

        switch (n)
        {
        case 1:
            system("cls");
            cout << endl
                 << "INSERT" << endl
                 << endl;

            cout << "Enter your index : ";
            cin >> pos; // 2
            cout << "Enter new element : ";
            cin >> element; // 100

            if (pos < size && pos >= 0) // 2 < 5 && 2 <= 0
            {
                for (int i = size - 1; i >= pos; i--)
                {
                    a[i + 1] = a[i];
                }

                a[pos] = element;
                size++;
            }

            break;
        case 2:
            system("cls");
            cout << endl
                 << "PUSH" << endl;
            cout << "Enter element : ";
            cin >> element;

            a[size] = element;
            size++;
            break;
        case 3:
            system("cls");
            cout << endl
                 << "FETCH" << endl
                 << endl;

            for (int i = 0; i < size; i++)
            {
                cout << a[i] << "\t";
            }

            break;
        case 4:
            system("cls");
            cout << endl
                 << "UPDATE" << endl;

            cout << "Enter your index : ";
            cin >> pos; // 2
            cout << "Enter new element : ";
            cin >> element; // 100

            if(pos < size && pos >= 0) {
                a[pos] = element;
            }
            break;
        case 5:
            system("cls");
            cout << endl
                 << "DELETE" << endl;

            cout << "Enter your index : ";
            cin >> pos; 

            if(pos < size && pos >= 0) {
                for(int i=pos; i<size; i++) {
                    a[i] = a[i+1];
                }
                size--;
            }

            break;
        case 6:
            system("cls");
            cout << endl
                 << "POP" << endl;

            size--;
            break;
        case 0:
            system("cls");
            cout << endl
                 << "EXIT";
            break;

        default:
            system("cls");
            cout << endl
                 << "INVALID CHOICE";
        }
    } while (n != 0);
}