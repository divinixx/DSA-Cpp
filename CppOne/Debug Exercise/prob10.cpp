// Hollow Pyramid

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // 1. spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // 2. stars
        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 || j == 0 || j == i)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // I spaces
        for (int j = 0; j < i; j++)
            cout << " ";

        // II stars
        for (int k = 0; k < n - i; k++)
            if (k == 0 || k == n - i - 1 || i == n - 1)
            {
                cout << "* ";
            }

            else
            {

                cout << "  ";
            }

        cout << endl;
    }

    return 0;
}