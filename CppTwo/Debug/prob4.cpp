#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0;
    cin >> n;
    int temp = n;

    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (temp = rev)
    {
        cout << "The Number is Palindrome: " << rev << endl;
    }

    else
    {
        cout << "Nigga: " << rev << endl;
    }

    // int z = n, digits = 0;
    // while (z != 0)
    // {
    //     z = z / 10;
    //     digits++;
    // }
    // while (n != 0)
    // {
    //     int k = n % 10, z = digits - 1;
    //     while (z--)
    //     {
    //         k = k * 10;
    //     }
    //     a = a + k;
    //     digits--;
    //     n = n / 10;
    // }
    // cout << a;
    return 0;
}