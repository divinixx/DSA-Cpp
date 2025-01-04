#include <iostream>
#include <algorithm>
#define INT16_MIN ;
using namespace std;

pair<int, int> check2Sum(int arr[], int n, int target)
{
    pair<int, int> ans = make_pair(-1, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }

    return ans;
}

void check2SumPairs(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) // use i+1 to avoid Duplicate numbers and pairs
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << ", " << arr[j] << endl;
            }
        }
    }
}

int main()
{
    int arr[] = {10, 5, 20, 15, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the Target of 2Sum: ";
    cin >> target;

    check2SumPairs(arr, n, target);

    // pair<int, int> found = check2Sum(arr, n, target);

    // if (found.first == -1 && found.second == -1)
    // {
    //     cout << "Pair not Found" << endl;
    // }

    // else
    // {
    //     cout << "Pair Found: " << found.first << ", " << found.second << endl;
    // }

    return 0;
}