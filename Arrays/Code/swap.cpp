#include <iostream>
using namespace std;
// Pass By Reference
void swapUsingTwoVariable(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void swapUsingtemp(int &a, int &b)
{

    int temp = a;
    a = b;
    b = temp;
}
void swapUsingXOR(int &a, int &b)
{

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a = 12;
    int b = 9;
    // swap(a, b);
    swapUsingXOR(a, b);
    cout << "Value Swapped: " << a << " " << b;
    return 0;
}
