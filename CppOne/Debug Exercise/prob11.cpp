#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int count = 2 * n - 1;
        int gaps = n - i - 1;
        for (int j = 0; j < gaps; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < count - 2 * gaps; k++)
        {
            cout << "  ";
        }
        for (int l = 0; l < gaps; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
    return 0;
}