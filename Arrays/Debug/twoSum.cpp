#include <iostream>
using namespace std;

pair<int, int> solve(int arr[], int n, int target, int &count );
int main()
{

    int arr[] = {10, 20, 30, 40, 55, 60, 15};
    int n = 7;
    int target;
    int count = 0;

    cout << "Enter the Target Element: " << endl;
    cin >> target;

    pair<int, int> result = solve(arr, n, target, count);


    cout << "The  pair is: " << "(" << result.first << "," << result.second << ")" << endl;

    cout << "The total pair is: " << count << endl;

    return 0;
}

pair<int, int> solve(int arr[], int n, int target, int &count)
{

    pair<int, int> p = make_pair(-1, -1);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                count++;

                if (p.first == -1 && p.second == -1) // Capture the first pair
                {
                    p.first = arr[i];
                    p.second = arr[j];
                }
            }
        }
    }

    return p;
}