#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


vector<int> findComplement(vector<int> binary)
{
    int n = binary.size();
    vector<int> twosComp(n, 0);

    // Step 1. Flip the Bits
    for (int  i = 0; i < n; i++)
    {
        twosComp[i] = binary[i] == 0 ? 1 : 0;
    }

    for (int i = 0; i < twosComp.size(); i++)
    {
        cout <<twosComp[i]<<" ";
    }

    cout << endl;
    // Now I have Flipped bits in my twosComp Array

    //Step 2. Add 1
    int carry = 1;
    for (int i = n - 1; i >= 0; i--)
    {

        int sum = twosComp[i] + carry;
        twosComp[i] = sum % 2;
        carry = sum / 2;
    }

    if (carry){
        twosComp[0] = carry;
    }

    return twosComp;
}
int main() {

    vector<int> binary = {1,1,1,0,1,0,1,1,0};
    vector<int> twosComp = findComplement(binary);
    for (int  i = 0; i < twosComp.size(); i++)
    {
        cout << twosComp[i]<< " ";
    }
    
    return 0;
}