#include <iostream>
#include <cmath>
using namespace std;

// Bitwise Method
int DtoB(int n)
{
    int i = 0;
    int binaryno = 0;
    while (n > 0)
    {
        int bit = n & 1;
        binaryno += bit * pow(10, i++);
        n = n >> 1;
    }
    return binaryno;
}

int main()
{
    int n;
    cin >> n;
    int binary = DtoB(n);
    cout << binary << endl;
    return 0;
}