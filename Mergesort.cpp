// Merge Sort

#include <iostream>
#include <vector>
using namespace std;

// Helper Method
void merge(vector<int> &array, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;

    vector<int> temp;

    while (i <= m and j <= e)
    {
        if (array[i] < array[j])
        {
            temp.push_back(array[i]);
            i++;
        }
        else
        {
            temp.push_back(array[j]);
            j++;
        }
    }

    // Copy the Remaining Element's from first array
    while (i <= m)
    {
        temp.push_back(array[i++]);
    }

    // Copy the Remaining element's from the second array
    while (j <= e)
    {
        temp.push_back(array[j++]);
    }

    // Copy Back the elements from temp to original array
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        array[idx] = temp[k++];
    }
    return;
}

// Sorting Method
void mergesort(vector<int> &arr, int s, int e)
{
    // Base Case
    if (s >= e)
    {
        return;
    }
    // Rec Case
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    return merge(arr, s, e);
}

int main()
{
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};

    int s = 0;
    int e = arr.size() - 1;
    mergesort(arr, s, e);
    for (int x : arr)
    {
        cout << x << ",";
    }
    return 0;
}