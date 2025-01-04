#include <iostream>
using namespace std;

bool search2Darray(int arr[][4], int rowSize, int colSize, int target)
{

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int arr[3][4] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int rowSize = 3;
    int colSize = 4;
    int target = 60;

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout << search2Darray(arr, 3, 4, 60);

    return 0;
}