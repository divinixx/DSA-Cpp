#include <iostream>
using namespace std;

int main()
{

    // Row Wise
     int arr[3][2] = {{10, 20}, {30, 40}, {50, 60}};


    // -------------Declaration----------------     
    // int arr[3][2] = {10, 20, 30, 40, 50, 60};
    // int arr[3][2] = {10, 20};

    int rowSize = 3;
    int colSize = 2;

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // Column Wise
    for (int j = 0; j < colSize; j++)
    {
        for (int i = 0; i < rowSize; i++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}