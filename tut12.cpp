//--------------------Episode-12 : Pointers in C++(Most Imp Basics)-----------------------
#include<iostream>
using namespace std;

int main(){
   // what is Pointers?---------> Data Type Which Holds the address of other Data Type.
    int a=3;
    int* b;
    b = &a;

    // & ----> (Address of) Operator 
    cout<<"The Address of a is "<<&a<<endl;
    cout<<"The Address of a is "<<b<<endl;

    // * ----> (Dereference) Operator
    cout<<"The value at Address of b  is "<<*b<<endl;//* ------->(Value at b)
     
    // **------->Pointer to Pointer Concept-------------------
    int** c;
    c=&b;
    cout<<"The Address of b is "<<&b<<endl;
    cout<<"The Address of b is "<<c<<endl;
    cout<<"The Value at address value(address of c) is "<<**c<<endl;
    return 0;
} 
 




