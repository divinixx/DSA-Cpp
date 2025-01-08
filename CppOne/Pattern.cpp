#include <iostream>
using namespace std;

int main()
{

    // Sqaure

    int side;

    cout << "Enter the Side: " << endl;
    cin >> side;

    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Rectangle
    // int l;
    // int b;

    // cout << "Enter the Length: " << endl;
    // cin >> l;
    // cout << "Enter the Breadth: " << endl;
    // cin >> b;

    // for (int i = 0; i < l; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // return 0;
}