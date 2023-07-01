// Stock Span Problem(V.V.V. IMP)
#include <iostream>
#include <stack>
using namespace std;

// Stock Span Problem
void stockSpan(int prices[], int n, int span[])
{
    stack<int> s; // Idices of the Days -O(N) -->Push and Pop Each Element Only once
    s.push(0);

    span[0] = 1;

    // Loop for Rest of the Days
    for (int i = 1; i <= n - 1; i++)
    {
        int currentPrice = prices[i];
        // topmost element that is Higher than current Prices
        while (!s.empty() and prices[s.top() <= currentPrice])
        {
            s.pop();
        }
        if (!s.empty())
        {
            int prev_highest = s.top();
            span[i] = i - prev_highest;
        }
        else
        {
            span[i] = i + 1;
        }
        // Push this element into the stack
        s.push(i);
    }
}

int main()
{
    int prices[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(prices) / sizeof(int);
    int span[100000] = {0};

    stockSpan(prices,n,span);
    for(int i=0;i<n;i++){
        cout<<span[i]<<" "<<endl;
    }
    return 0;
}