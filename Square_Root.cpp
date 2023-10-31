// efficent approach by binary search
// time complexity O(log x) where x is input
#include <iostream>
using namespace std;
int squareroot(int x)
{
    int low = 1, high = x, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int sq = mid * mid;
        if (sq == x)
        {
            return mid;
        }
        else if (sq > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int x;
    cin >> x;
    cout << squareroot(x);

    return 0;
}
