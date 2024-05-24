#include <iostream>
using namespace std;
int coins(int n)
{
    int lo = 1;
    int hi = n;
    int ans = 0;
    while (lo <= hi)
    {
        long long mid = lo + (hi - lo) / 2;
        long long sum = (mid) * (mid + 1) / 2;
        if (sum <= n)
        {
            lo = mid + 1;
            ans = mid;
        }
        else if (sum > n)
        {
            hi = mid - 1;
        }
    }
    return ans;
}
int main()
{
    cout << coins(5);
}