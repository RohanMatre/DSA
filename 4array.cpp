// Binary Search Code
#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    // Implement Binary Search
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 15, 12, 9, 6, 4, 3, 10, 8};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin >> key;

    int index = linear_search(arr, n, key);
    if (index != -1)
    {
        cout << key << " is Present at index " << index << endl;
    }
    else
    {
        cout << key << " is NOT FOUND!" << endl;
    }
    return 0;
}