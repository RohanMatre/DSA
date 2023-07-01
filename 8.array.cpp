// Find out the largest sum By Prefix Sums Approach O(N^2)

#include <iostream>
using namespace std;

int largestSubarraySum2(int arr[], int n)
{

    int prefix[100] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int largest_sum = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            // Put a check is SubarraySum > Largest _sum
            largest_sum = max(largest_sum, subarraySum);
        }
    }
    return largest_sum;
}
// find out the largest sum of subarray
// Brute Force

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    // cout << largestSubarraySum1(arr, n) << endl;
    cout << largestSubarraySum2(arr, n) << endl;
    return 0;
}