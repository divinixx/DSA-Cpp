#include <iostream>
using namespace  std;

int main()
{
    int arr[3][3];

    int r = 3;
    int c = 2;

    // Row_Wise Input

    for (int i = 0; i < r; i++)
    {
    cout << "Enter the Element of " << i << " Rows" << endl;
        for (int j = 0; j < c; j++)
        {
    cout << "Enter the Element of " << j << " Columns" << endl;
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // Column_Wise Inputs

    for (int j = 0; j < c; j++)
    {
        cout << "Enter the Element of " << j << " Columns" << endl <<endl;

        for (int i = 0; i < r; i++)
        {
            cout << "Enter the Element of " << i << " Rows" << endl;
            cin >> arr[i][j];
        }

        cout << endl;
    }


    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}