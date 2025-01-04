#include <iostream>
#include <algorithm>
using namespace std;

void DutchFlag(int arr[], int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    // Count the occurrences of 0, 1, and 2
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else if (arr[i] == 2)
        {
            count2++;
        }
    }

    // Fill the array based on counts
    fill(arr, arr + count0, 0);                   // Fill 0s
    fill(arr + count0, arr + count0 + count1, 1); // Fill 1s
    fill(arr + count0 + count1, arr + n, 2);      // Fill 2s
}

int main()
{
    int arr[] = {0, 1, 0, 1, 0, 2, 0, 2, 1, 2};
    int n = sizeof(arr) / sizeof(int);

    DutchFlag(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
