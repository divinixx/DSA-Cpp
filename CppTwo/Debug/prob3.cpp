#include <iostream>
using namespace std;

int main()
{
    int n, flag = 1;
    cout << "Enter the Number upto which you want to find the prime Numbers: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        int count = 1;
        if (n % i == 0)
        {
            count = 0;
        }

        if (count == 1)
        {
            cout << i << endl;
        }
    }

    // for (int i = 2; i <= n; i++)
    // {
    //     flag = 1;
    //     for (int j = 2; j <= i / 2; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             flag = 0;
    //         }
    //             }
    //     if (flag == 1)
    //     {
    //         cout << i << endl;
    //     }
    // }
    return 0;
}