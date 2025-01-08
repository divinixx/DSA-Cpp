/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int i = 1;
    // while (i < n)
    // {
    //     int j = i, count = 2 * n + 1, gaps = (n - i - 1), k = 1;
    //     while (k < gaps)
    //     {
    //         cout << " ";
    //         k = k + 1;
    //     }
    //     int m = 1, ch = count - 2 * gaps;
    //     while (m < ch)
    //     {
    //         cout << "*";
    //         m = m + 1;
    //     }
    //     k = 1;
    //     while (k < gaps)
    //     {
    //         cout << " ";
    //         k = k + 1;
    //     }
    //     cout << "\n";
    //     i = i + 1;
    // }

    for (int i = 0; i < n; i++)
    {
        int count = 2 * n - 1;
        int gaps = n - i - 1;
        for (int j = 0; j < gaps; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < count - 2 * gaps; k++)
        {
            cout << "* ";
        }
        for (int l = 0; l < gaps; l++)
        {
            cout << "  ";
        }
        cout << endl;
    }

    return 0;
}