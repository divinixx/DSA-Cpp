#include <iostream>
#include <vector>
using namespace std;

void PrintRowSum(vector<vector<int>> arr)
{

    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;

        for (int j = 0; j < colSize; j++)
        {
            sum = sum + arr[i][j];
        }

        cout << sum << endl;
    }
}



void PrintColSum(vector<vector<int>> arr)
{

    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int j = 0; j < colSize; j++)
    {
        int sum = 0;

        for (int i = 0; i < rowSize; i++)
        {
            sum = sum + arr[i][j];
        }

        cout << sum << endl;
    }
}

void PrintDiagonalSum(vector<vector<int>> arr)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();
    int sum = 0;

    for (int i = 0; i < rowSize; i++)
    {
        sum += arr[i][i];
    }

    // for (int i = 0; i < rowSize; i++)
    // {

    //     for (int j = 0; j < colSize; j++)
    //     {
    //         if (i == j)
    //         {
    //             sum = sum + arr[i][j];
    //         }
    //     }
    // }

    cout << sum << endl;
}

void TransposeMatrix(vector<vector<int>> arr)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = i; j < colSize; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // Using temp Array
    // vector<vector<int>> temp(3, vector<int>(3, 0));

    // for (int i = 0; i < rowSize; i++)
    // {
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         temp[i][j] = arr[j][i];
    //     }
    // }

    // for (int i = 0; i < rowSize; i++)
    // {
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         cout << temp[i][j] << " ";
    //     }

    //     cout << endl;
    // }
}
int main()
{

    vector<vector<int>> arr(3, vector<int>(3, 0));
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cin >> arr[i][j];
        }

        cout << endl;
    }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout << "Transpose of a Matrix: " << endl;
    TransposeMatrix(arr);
    cout << "The Sum of Each Rows are: " << endl;
    PrintRowSum(arr);
    // cout << "The Sum of Each Columns are: " << endl;
    // PrintColSum(arr);
    // cout << "The Sum of Diagonal Elements are: " << endl;
    // PrintDiagonalSum(arr);
    return 0;
}