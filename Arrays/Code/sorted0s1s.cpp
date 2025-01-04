#include <iostream>
using namespace std;
#include <algorithm>
void Sorted0s1s(int arr[], int n)
{

    int count0 = 0;
    int count1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }

        if (arr[i] == 1)
        {
            count1++;
        }
    }

    fill(arr, arr + count0, 0);
    fill(arr + count0, arr + n, 1);

    // for (int i = 0; i < count0; i++)
    // {
    //     arr[i] = 0;
    // }

    // for (int i = count0; i < n; i++)
    // {
    //     arr[i] = 1;
    // }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sorted0s1s(arr, n);   Time Complexity - O(N)

    sort(arr, arr + n); // Time Complexity - O(nlogn)

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}