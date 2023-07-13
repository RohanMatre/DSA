#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}

int main()
{
    int a = 5, b = 10;
    cout << "("<<a <<","<< b<<")"<<endl;
    swap(a, b);
    cout << "("<<a <<","<< b<<")"<<endl;
    return 0;
}
