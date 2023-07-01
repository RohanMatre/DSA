// 2-D Array Basics

#include <iostream>
using namespace std;
// Passed By Reference 
void print(int arr[][100], int n, int m)
{
    // Print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Generally,Constraint Would Be Given
    int arr[1000][100];
    // n-rows & m-columns
    int n, m;
    cin >> n >> m;

    // Take Input
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Print the Array
    print(arr, n, m);
    return 0;
}