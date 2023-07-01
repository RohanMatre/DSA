// Bubble Sort Recursive

// Bubble Sort

#include <iostream>
using namespace std;

// Sort the elements in increasing order
void bubble_sort_rec(int a[], int n)
{
    // Base Case  (Stopping Condition)
    if (n == 1)
    {
        return;
    }

    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
    }
    bubble_sort_rec(a, n - 1); // Update Condition
}

void bubble_sort_rec_2(int a[], int n, int j)
{
    // Base Case  (Stopping Condition)
    if (n == 1 || n == 0)
    {
        return;
    }
    if (j == n - 1)
    {
        // Reduce the Problem Size, and reset j to 0.
        bubble_sort_rec_2(a, n - 1, 0);
        return;
    }
    if (a[j] > a[j + 1])
    {
        swap(a[j], a[j + 1]);
    }
    bubble_sort_rec_2(a, n, j + 1);
}
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    // bubble_sort_rec(arr, n); Method-1
    bubble_sort_rec_2(arr, n, 0); // Method-2

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}