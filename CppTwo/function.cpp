#include <iostream>
using namespace std;

int calculatePower(int a, int b)
{

    int exp = 1;
    for (int i = 1; i <= b; i++)
    {
        exp = exp * a;
    }

    return exp;
}

bool isPrime(int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        if (n & 1 == 0) // n % i
        {
            // Not Prime
            return false;
        }
    }

    return true;
}

int printEvenInRange(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        int n = i;
        if ((n & 1) == 0)
        {
            cout << n << endl;
        }
    }

    return 0;
}

int printOddInRange(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        int n = i;
        if ((n & 1) != 0)
        {
            cout << n << endl;
        }
    }

    return 0;
}

int main()
{
    int check = isPrime(11);
    if (check == true)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }

    cout << calculatePower(2, 5) << endl;
    cout << printEvenInRange(110, 210) << endl;
    cout << printOddInRange(110, 210) << endl;

    cout << ~5 << endl;

    return 0;
}