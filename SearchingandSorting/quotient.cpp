#include <iostream>
#include <vector>
using namespace std;


int getQuotient(int dividend, int divisor){

    // search space -> (+ve dividend) -> (-ve dividend)

    int s = 0;
    int e = dividend;
    int mid = s + ((e - s) >> 1);
    int ans = -1;

    while (s <= e)
    {
        if((divisor*mid) == dividend){
            return mid;
        }
        if((divisor*mid)< dividend){
            // store and compute
            ans = mid;
            s = mid + 1;
        }
        else{
            //left
            e = mid - 1;
        }

        mid = s + ((e - s) >> 1);
    }
    
}

int main()
{
    int dividend = 10;
    int divisor = -2;
    int ans = getQuotient(abs(dividend), abs(divisor));

    // ans answer positive values k hisaab se aara h
    if((dividend < 0 && divisor > 0) || (dividend >0 && divisor < 0)){
        ans = 0 - ans;
    }
    cout << "Final Answer" << ans << endl;
    return 0;
}
