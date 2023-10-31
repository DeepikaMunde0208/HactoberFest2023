/* question:given an array of integer and a number k,find the maximum sum of k consective
elements*/
#include <iostream>
using namespace std;
// time complexity O((n-1)(k-1)) when k=n/2 O(n^2) it means time complexity is quadratic
int windowsliding(int arr[], int n, int k)
{
    int max_sum = INT_MIN; // INTIALY MAXIMUM SUM IS - INFINITY
    for (int i = 0; i + k - 1 < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += arr[i + j];
            max_sum = max(sum, max_sum);
        }
    }
    return max_sum;
}
int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7};
    cout << windowsliding(arr, 6, 3);
    return 0;
}
