//
#include <iostream>
using namespace std;
void printSubarrays(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            //    cout<<"("<< i <<"," <<j << "),";
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << endl;
        }
    }
}

// Print the sum of each subarray & find out the largest sum
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    printSubarrays(arr, n);
    return 0;
}