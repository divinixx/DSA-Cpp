#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int setBitCount = 0;

    while (n != 0)
    {
        int lastBit = (n & 1);
        if (lastBit == 1)
        {
            setBitCount++;
        }

        n = n >> 1;
    }

    // cout << 5 &4  << endl;
    // cout << calculatePower(2, 5);

    return 0;
}