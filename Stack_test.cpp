#include <iostream>

#include "StackLL.h"
using namespace std;

int main()
{
    stack<int> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}