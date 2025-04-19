// divide no using binary search (having negative no)

#include <iostream>
#include <vector>
using namespace std;
int quotient(int dividend, int divisor)
{

    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        else if (abs(mid * divisor) < abs(dividend))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    if ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)) // for negative dividend or divisor
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int main()
{
    int divisor = -12;
    int dividend = 24;
    cout << quotient(dividend, divisor);
    return 0;
}