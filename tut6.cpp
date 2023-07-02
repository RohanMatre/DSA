//------------------>Episode-#06 C++ Header files & Operators:<------------------
// There are two types of Header Files:-
// 1. System Header files:- It Comes with the Compiler
#include<iostream>
// 2. User-Defined Header Files :- It is Written by the Programmer.
// #include "this.h"--------->This will Produce an Error if this.h is no present in the Current Directory

using namespace std;
int main(){
    int a=4,b=5;
    cout<<"Operators in C++ "<<endl;//Deprecated-Means Old Header Files
    cout<<"Following are the Types of Operators in  C++ "<<endl;
    cout<<"Following are the Arithmetic Operators in  C++ "<<endl;    
    //Arithmetic Operators
    cout<<"The value of a + b is : "<<(a+b)<<endl;
    cout<<"The value of a - b is : "<<(a-b)<<endl;
    cout<<"The value of a * b is : "<<(a*b)<<endl;
    cout<<"The value of a / b is : "<<(a/b)<<endl;
    cout<<"The value of a % b is : "<<(a%b)<<endl;
    cout<<"The value of a++ is : "<<a++<<endl;
    cout<<"The value of a-- is : "<<a--<<endl;
    cout<<"The value of ++a is : "<<++a<<endl;
    cout<<"The value of --a is : "<<--a<<endl;
    cout<<"The value of b++ is : "<<b++<<endl;
    cout<<"The value of b-- is : "<<b--<<endl;
    cout<<endl;
    //Assignment Operators---->Used to assign values to Variables
    // int a=3,b=9;
    // char d='d';
    cout<<"Following are the Comparison Operators in  C++ "<<endl;    
    //Comparison Operators
    cout<<"The Value of a==b is "<<(a==b)<<endl;
    cout<<"The Value of a!=b is "<<(a!=b)<<endl;
    cout<<"The Value of a > b is "<<(a > b)<<endl;
    cout<<"The Value of a < b is "<<(a < b)<<endl;
    cout<<"The Value of a>=b is "<<(a>=b)<<endl;
    cout<<"The Value of a<=b is "<<(a<=b)<<endl;
    cout<<endl;
    
    //Logical Operators
    cout<<"Following are the Logical Operators in  C++ "<<endl;  
    cout<<"The Value of ((a==b) && (a<b)) Logical Operator is "<<((a==b) && (a<b))<<endl;//&& is And Operator
    cout<<"The Value of ((a==b) || (a<b)) Logical Operator is "<<((a==b) || (a<b))<<endl;//|| is Or Operator
    cout<<"The Value of (!(a==b)) Logical Operator is "<<(!(a==b))<<endl;//(!(a==b)) is Not Operator
    
    
    // Bit-wise - First of Follow it Convert into Binary No.,then it is Works as bit by bit.
    return 0;
}
