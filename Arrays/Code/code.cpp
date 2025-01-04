#include <iostream>
#include <limits>
using namespace std;

bool LinearSearch(int arr[], int size, int target)
{

    // int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }

    return false;
}

int findMax(int arr[], int size)
{

    int maxAns = INT64_MIN;

    for (int i = 0; i < size; i++)
    {
        maxAns = max(maxAns, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }

    return maxAns;
}

int findMin(int arr[], int size)
{

    int minAns = INT32_MAX;

    for (int i = 0; i < size; i++)
    {
        if (minAns > arr[i])
        {
            minAns = arr[i];
        }

        // minAns = min(minAns, arr[i]);
    }

    return minAns;
}

int findMinTerm(int arr[], int size)
{

    int minAns = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (minAns > arr[i])
        {
            minAns = arr[i];
        }

        // minAns = min(minAns, arr[i]);
    }

    return minAns;
}


void print0sAnd1s(int arr[], int n)
{
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];

        if (curr == 0)
        {
            zeroCount++;
        }
        if (curr == 1)
        {
            oneCount++;
        }
        
    }

    cout << "Total Zeroes: " << zeroCount << endl;
    cout << "Total Ones: " << oneCount << endl;
}

void printExtreme(int arr[], int n)
{

    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i] << " ";
            break;
        }

        cout << arr[i] << " ";
        i++;
        cout << arr[j] << " ";
        j--;
    }
}
int main()
{

    int arr[100];
    int size;
    cout << "Enter the number of Elements in array: " << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element in Array at Index" << i << endl;
        cin >> arr[i];
    }

    // int target;
    // cout << "Enter the Element you want to Search in Array: " << endl;
    // cin >> target;

    // bool found = LinearSearch(arr, size, target);

    // if (found == 1)
    // {
    //     cout << "Element was Found" << endl;
    // }

    // else
    // {
    //     cout << "target not found " << endl;
    // }

    // cout << "Max Number is: " << findMax(arr, size);

    // print0sAnd1s(arr, size);

    // cout << "Min Number is: " << findMin(arr, size);

    printExtreme(arr, size);

    cout << "Min Number is: " << findMinTerm(arr, size);

    return 0;
}