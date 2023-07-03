//-----------Episode#18 :- Recursive Functions in C++(V.V.V. IMP)---------------------- 
// What is Recursion? ------> A Function call Itself Until it Gains It's Base Condition 
// DrawBack --->Sometime,It is Diffcult to Understand By Human Being,but Recursive do it Easily. 
// Recursion is Not Good always ,Sometimes it Give us an Overhead


#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1); 
}
// fib(5)
// fib(4) + fib(3)
// fib(3) + fib(2) + fib(3) + fib(2) 
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
    // Step-By-Step Calculation:- 
    // factorial(4) = 4*factorial(3);
    // factorial(4) = 4*3*factorial(2);
    // factorial(4) = 4*3*2*factorial(1);
    // factorial(4) = 4*3*2*1;
    // factorial(4) = 24;
int main(){
    // Factorial of a Number:- 
    // 6!=6*5*4*3*2*1=720
    // 0!=1 by Definition
    // 1!=1 by Definition

    // n!=n*(n-1)!
    int a;
    cout<<"Enter a number :- "<<endl;
    cin>>a;
    //cout<<"The Factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The Term in Fibonacci sequence at Position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}








