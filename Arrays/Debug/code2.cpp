#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return true;
        }
    }
    return false;
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i = i + 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void pairSumToX(int input[], int size, int x)
{
    int pairs = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (input[i] + input[j] == x)
                cout << input[i] << ", " << input[j] << endl;
        }
    }
}

int tripletSumToX(int input[], int size, int x)
{
    int triplets = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (input[i] + input[j] + input[k] == x)
                    triplets++;
            }
        }
    }
    return triplets;
}

void sort0sand1s(int input[], int size)
{
    int nextZero = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[nextZero] == 0)
        {
            int temp = input[nextZero];
            input[nextZero] = input[i];
            input[i] = temp;
        }
    }
}
int main()
{

    // int arr[] = {1, 2, 3, 4, 5, 6};
    int arr[] = {0, 1, 1, 0, 1, 0};
    int n = 6;

    // swapAlternate(arr, n);

    // pairSumToX(arr, n, 6);
    // cout<< tripletSumToX(arr, n, 6);

    sort0sand1s(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // cout<< linearSearch(arr, n, 4);
    return 0;
}