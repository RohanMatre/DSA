// Backtracking On Arrays Code - By Using Pass By Reference

#include <iostream>
using namespace std;
void printArray(int *arr, int n)
{
    // print our array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillArray(int *arr, int i, int n, int val)
{
    // Base Case
    if (i == n)
    {
        printArray(arr, n);
        return;
    }
    // Rec Case
    arr[i] = val;
    fillArray(arr, i + 1, n, val + 1);
    // Backtracking Step
    arr[i] = -1 * arr[i];
}

int main()
{
    int arr[100] = {0};
    int n;
    cin >> n;

    fillArray(arr, 0, n, 1);
    printArray(arr, n);
    return 0;
}