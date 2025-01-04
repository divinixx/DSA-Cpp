#include <iostream>
#include <vector>
using namespace std;

bool search2DArray(vector<vector<int>> arr, int target)
{

    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; i++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }

    return false;
}

int Min2DArray(vector<vector<int>> arr)
{

    int rowSize = arr.size();
    int colSize = arr[0].size();
    int minValue = INT32_MAX;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            minValue = min(arr[i][j], minValue);
        }
    }

    return minValue;
}

int Max2DArray(vector<vector<int>> arr)
{

    int rowSize = arr.size();
    int colSize = arr[0].size();
    int maxValue = INT32_MIN;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            maxValue = max(arr[i][j], maxValue);
        }
    }

    return maxValue;
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

    int target;
    cout << "Enter the Target: " << endl;
    cin >> target;
    // int ans = Min2DArray(arr);
    int ans = Max2DArray(arr);
    // int ans = search2DArray(arr,target);

    cout << "Ans: " << ans;

    return 0;
}