// Inbuilt Sort & Comparator's

#include <iostream>
#include <algorithm>
using namespace std;

// Method - 1 : Use Comparators
bool compare(int a, int b)
{
    //    cout<<"Comparing "<<a <<" and " <<b<<endl ;
    //    return a>b; // Descending Order(a is Greater than b.)
    return a > b; // Ascending Order(a is Smaller than b.)
}

void bubble_sort(int a[], int n)
{
    for (int times = 0; times <= n - 1; times++)
    {
        // Repeated Swapping
        for (int j = 0; j <= n - times - 1; j++)
        {
            if (compare(a[j], a[j + 1]))
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {10, 9, 8, 6, 5, 4, 3, 2, 11, 16, 8};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr + n, compare); // Here compare is not the function Call,But passing the function as a Parameter to another function.
    // reverse(arr,arr+n);  // Method - 2 : To Reverse sort array.
    sort(arr, arr + n, greater<int>()); // Method - 3

    // Print the output
    for (int x : arr)
    {
        cout << x << " ";
    }

    /*    bubble_sort(arr, n);

        for (auto x : arr)
        {
            cout << x << ",";
        }
    */
    return 0;
}