/*
Pattern
1
23
345
4567
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0, count = 0;
        while (count < i + 1)
        {
            cout << j + i + 1;
            j = j + 1;
            count = count + 1;
        }
        cout << "\n";
        i = i + 1;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < (i + 1); j++)
    //     {
    //         cout << i + j + 1;
    //     }

    //     cout << endl;
    // }

    return 0;
}
