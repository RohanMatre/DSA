#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    int dup = x;
    int revNum = 0;

    if (x < 0)
    {
        return false;
    }

    while (x != 0)
    {
        int ld = x % 10;

        if (revNum > INT_MAX || revNum < INT_MIN)
        {
            return 0;
        }

        revNum = ((revNum * 10) + ld);
        x = x / 10;
    }
    if (revNum == dup) return true;
}

int main()
{
    int x;
    cin >> x;

    isPalindrome(x);
    return 0;
}