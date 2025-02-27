#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int mySqrt(int n)
{
    int s = 0, e = n;
    int ans = 0;

    while (s <= e)
    {
        int mid = s + ((e - s) >> 1);
        if (mid * mid <= n)
        {
            ans = mid;
            s = mid + 1; // go right
        }
        else
        {
            e = mid - 1; // go left
        }
    }
    return ans;
}

double myPrecisionSqrt(int n)
{
    double sqrt = mySqrt(n);
    int precision = 13;
    double step = 0.1;

    while (precision--)
    {
        double j = sqrt;
        while (j * j <= n)
        {
            sqrt = j;
            j += step;
        }

        step /= 10;
    }

    return sqrt;
}

double BSPrecision(int n)
{

    double s = 0;
    double e = n;
    double ans = 0;

    while ((e - s) > 0.000000001)
    {

        double mid = s + ((e - s)/2);
        double sqr = mid * mid;
        if (sqr <= n)
        {
            ans = mid;
            s = mid;
        }
        else
        {
            e = mid;
        }
    }

    return ans;
}

int main()
{
    int n = 63;
    // double ans = myPrecisionSqrt(n);
    double ans = BSPrecision(n);
    cout << fixed << setprecision(13) << ans << endl; // Cout only can print 5 precision
    return 0;
}
