#include <iostream>
using namespace std;

int findUniqueNumber(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int findUniqueIndex(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ans)
            return i; // Return the index of the unique number
    }

    return -1; // If no unique number is found
}

int main()
{
    // Adjusted array for proper behavior
    int arr[] = {2, 3, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = findUniqueNumber(arr, n);
    cout << "Unique Number is: " << ans << endl;
    return 0;
}
