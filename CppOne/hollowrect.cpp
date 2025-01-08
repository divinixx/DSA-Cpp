#include <iostream>
using namespace std;

int main()
{
    int l;
    int b;

    cout << "Enter the Length: " << endl;
    cin >> l;
    cout << "Enter the Breadth: " << endl;
    cin >> b;
    for (int r = 0; r < l; r++)
    {
        for (int c = 0; c < b; c++)
        {
            if (r == 0 || r == l - 1)
            {
                cout << "*";
            }
            else
            {
                if (c == 0 || c == b - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}