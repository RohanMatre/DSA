// Character Array Introduction

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "abcde"; //{'a','b','c','d','\0'};// null char at the end.
    cout << a << endl;

    char b[100];
    cin >> b;

    cout << b << endl;
    cout << strlen(a) << endl; // No of visible Character
    cout << sizeof(a) << endl; // +1 Bcz of Null Character
    return 0;
}