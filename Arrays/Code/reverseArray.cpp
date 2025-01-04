#include <iostream>
#define MAX 100
using namespace std;

void reverseArray(int arr[], int n)
{
    int l = 0;
    int h = n - 1;
    // while (l < h)
    // {
    //     swap(arr[l], arr[h]);
    //     l++;
    //     h--;
    // }

    // Pro ki trh code
    while (l < h)
    swap(arr[l++], arr[h--]);
}

int main()
{
    int arr[MAX];
    int n;
    cout << "Enter the Size of an Array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Elements of an Index " << i << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // M2. STL, C++ lib
    // reverse(arr, arr + n);

    cout << endl;
    cout << "The Reverse Array: " << endl;
    
    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}