#include <iostream>
#include <cmath>
using namespace std;

int BinaryToDecimal(int n)
{

    int decimal = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        decimal += bit * pow(2, i++);
        n /= 10;
    }

    return decimal;
}

int main()
{
    int num;
    cin >> num;
    int decimal = BinaryToDecimal(num);
    cout << decimal << endl;

    return 0;
}
