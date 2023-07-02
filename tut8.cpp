//*************Episode-#08-Constants, Manipulators & Operator Precedence***********

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a=34;
    //  cout<<"The Value of a was : "<<a<<endl;
    // a=23;
    // cout<<"The Value of a is : "<<a<<endl;
    
    //-------------------Topic-01 : Constants in C++------------------------
    // const float a=3.23;
    // cout<<"The Value of a was : "<<a<<endl;
    // a=23.2;//You will get an Error because a is a Constant
    // cout<<"The Value of a is : "<<a<<endl;
    
    //-------------------Topic-02 : Manipulators in C++------------------------
    // int a=23,b=34,c=32;
    // cout<<"The value of a without setw is : "<<a<<endl;
    // cout<<"The value of b without setw is : "<<b<<endl;
    // cout<<"The value of c without setw is : "<<c<<endl;
    
    // cout<<"The value of a is : "<<setw(4)<<a<<endl;
    // cout<<"The value of b is : "<<setw(4)<<b<<endl;
    // cout<<"The value of c is : "<<setw(4)<<c<<endl;   
    
    //-------------------Topic-03 : Operator Precedence in C++------------------
    int a=5,b=4;
   // int c=(a*5)+b;
    int c=((((a*5)+b)-45)+87);
    cout<<c; 
    
 return 0;   
}