#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            for (int k = 1; k < n; k++)
            {
                cout << k;
            }
            for (int l = 2 * n; l > n; l--)
            {
                cout << l;
            }
        }

        cout << endl;
    }

    return 0;
}