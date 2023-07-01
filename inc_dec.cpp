// Understanding Recursive Directions

#include <iostream>
using namespace std;
// Decreasing Part
void dec(int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }

    // Rec Base - Going towards the Base Case
    cout << n << ",";
    dec(n - 1);
}

// Increasing Part
void inc(int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }
    inc(n - 1);
    cout << n << ",";
}

int main()
{
    int n;
    cin >> n;
    dec(n);
    cout << endl;
    inc(n);
    return 0;
}
