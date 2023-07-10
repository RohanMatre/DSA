#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;  // i---> Row
    while (i <= n)
    {
        int j = 1; // j--->Column
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}