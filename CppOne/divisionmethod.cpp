#include <iostream>
#include <cmath>
using namespace std;

// Divison Method
int DtoB(int n)
{
    int i = 0;
    int binaryno = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
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
