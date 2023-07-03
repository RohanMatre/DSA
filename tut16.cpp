//--------------Episode-16 :-Call By Value & Call By Reference(V.V.V. IMP)-------------------
#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}
// Call By Value che :- 
// This will not swap a and b
void swap(int a,int b){// temp   a    b 
    int temp=a;      //    4    4    5
    a=b;             //    4     5    5 
    b=temp;          //    4     5    4
}
// Call By Reference using Pointers
void swapPointer(int* a,int* b){// temp   a    b 
    int temp= *a;      //    4    4    5
    *a= *b;           //    4     5    5 
    *b=temp;          //    4     5    4
}
// Call By Reference using C++ Reference Variables 
/*void swapReferenceVar(int &a,int &b){// temp   a    b 
    int temp= a;      //    4    4    5
    a= b;           //    4     5    5 
    b=temp;          //    4     5    4*/
//}

// Call By Reference using C++ Return By Reference Variables 
int & swapReferenceVar(int &a,int &b){// temp   a    b 
    int temp= a;      //    4    4    5
    a= b;           //    4     5    5 
    b=temp;          //    4     5    4
    return a;
}
int main(){
    int x=4,y=5;
    //cout<<"The Sum of 4 and 5 is "<<sum(a,b)<<endl;
    cout<<"The Value of x is "<<x<<". The value of y is "<<y<<endl;
    //swap(x,y);// here the Value of a and b value only is print in swap Above functions.--->// This will not swap a and b
   // swapPointer(&x,&y);    // This will Swap a and b using Pointer's.
   //swapReferenceVar(x,y);    // This will Swap a and b using Reference Variables.
    swapReferenceVar(x,y)= 755;    // This will Swap a and b using Reference Variables.
    cout<<"The Value of x is "<<x<<". The value of y is "<<y<<endl;
    return 0;
}







