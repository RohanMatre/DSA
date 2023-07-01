// Challenge : 1)Insert at stack Bottom - 2) Reverse the Stack
#include <iostream>
#include <stack>
using namespace std;

// 1. Insert the Number by Recursive Method
void insertAtBottom(stack<int> &s, int data)
{ // &s ---> By Pass By Reference
    // Base case
    if (s.empty())
    {
        s.push(data);
        return;
    }
    // Rec Case
    int temp = s.top();
    s.pop();

    insertAtBottom(s, data);
    s.push(temp);
}

// 2. Reverse the Stack
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int t = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, t);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // insertAtBottom(s, 5);
    reverse(s);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}