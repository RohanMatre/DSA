// Fibonacci Number

#include <iostream>
using namespace std;

int fib(int n)
{
    // Base Cases
    if (n == 0 or n == 1)
    {
        return n;
    }

    int f1 = fib(n - 1);
    int f2 = fib(n - 2);
    return f1 + f2;
    // Also write as fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}