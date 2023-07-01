// Sorted Array Check!

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    // Base Case
    if (n == 1 or n == 0)
    {
        return true;
    }
    // Rec Case
    if (arr[0] < arr[1] and isSorted(arr + 1, n - 1))
    {
        return true;
    }
    return false;
}

// Another Method
bool isSortedTwo(int arr[], int i, int n)
{
    if (i == n - 1)
    {
        return true;
    }
    if (arr[i] < arr[i + 1] and isSortedTwo(arr, i + 1, n))
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7};
    int n = sizeof(arr) / sizeof(n);
    // cout<<isSorted(arr,n)<<endl; -----> First Method
    cout << isSortedTwo(arr, 0, n) << endl; // ------> Second Method
    return 0;
}