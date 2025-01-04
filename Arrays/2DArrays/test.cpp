#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<vector<int>> arr(3, vector<int>(3, 0));
    // int rowSize = arr.size();
    // int colSize = arr[0].size();

    // for (int i = 0; i < rowSize; i++)
    // {
    //     cout << "Enter the Elements of Row " << i <<  endl;
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         cout << "Enter the Element of Column " << j << endl;
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << "The Matrix Elements are: " << endl;
    // for (int i = 0; i < rowSize; i++)
    // {
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    // cout << "The Column Wise Elements are: " << endl;
    // for (int i = 0; i < colSize; i++)
    // {
    //     for (int j = 0; j < rowSize; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }
    

    // cout << "If Matrix is  Square Matrix : " << endl;
    // cout << " The Diagonal Elements are:" << endl;
    // for (int i = 0; i < rowSize; i++)
    // {
    //     cout << arr[i][i] << " ";
    // }


    // cout << "\nThe Diagonal Elements are " << endl;
    // for (int i = 0; i < rowSize; i++)
    // {
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         if (i == j)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //     }

    //     cout << endl;
    // }

    vector<vector<int>> arry(3, vector<int>(2, 0));
    int r = arry.size();
    int c = arry[0].size();

    for (int i = 0; i < r; i++)
    {
        cout << "Enter the Elements of Row " << i << endl;

        for (int j = 0; j < c; j++)
        {
            cout << "Enter the Elements of Column " << j << endl;
            cin >> arry[i][j];
        }
        
    }

    for (int i = 0; i < c; i++)
    {
        for (int  j = 0; j < r; j++)
        {
            cout << arry[j][i] << " ";
        }

        cout << endl;
    }
    
    
    return 0;
}