// Arrays & Functions - Pass by Reference
#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{

    cout << "In Function " << sizeof(arr) << endl;
    //  int n=sizeof(arr)/sizeof(int);
    arr[0] = 100;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(int);

    printArray(arr, n);
    cout << "In main " << sizeof(arr) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}