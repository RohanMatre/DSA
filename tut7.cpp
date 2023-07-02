//-------------->Epispode-#07C++ Reference Variables & Typecasting <---------
#include<iostream>
using namespace std;


int c=45;//This is Global Varaiable Right ?Yes 

int main(){
   //---------------Topic-1 :Build-in Data Type---------------------
     int a,b,c;
     cout<<"Enter the Value of a is : "<<endl;
     cin>>a;
     cout<<"Enter the Value of b is : "<<endl;
     cin>>b;
     c=a+b;
     cout<<"The value of c is : "<<c<<endl;//This is Local variable right ? yes,So it has More precedence than Global variable. 
     cout<<"The Global value  of c is : "<<::c<<endl;//To Get value of Global variable value we Use ::(Scope Resolution operator).
    
    //----------------Topic-2 :Float,double and Long double Literals---------------------
     float d=34.4f; 
     long double e=34.4l;//---->l means Long double
    // //34.4------->this is double By default by C++ Compiler
    // //34.4f--->This is Float
     cout<<"The Size of 34.4 is "<<sizeof(34.4)<<endl;
     cout<<"The Size of 34.4f is "<<sizeof(34.4f)<<endl;
     cout<<"The Size of 34.4F is "<<sizeof(34.4F)<<endl;
     cout<<"The Size of 34.4l is "<<sizeof(34.4l)<<endl;
     cout<<"The Size of 34.4L is "<<sizeof(34.4L)<<endl;
     cout<<"The Value of d is "<<d<<"."<<endl;
     cout<<"The value of e is "<<e<<"."<<endl;

    // ---------------Topic-3: Reference variable--------------------------------
    // Ex:-1 Rohan------>Monty----->Rohu------->Dangerous Coder  
     float x=455; 
     float &y=x;//  Making y as Reference which y is Pointing to x; & is Symbol of Reference
     cout<<x<<endl;
     cout<<y<<endl; 
     
    // ---------------Topic-4: Typecasting means one variable(int) convert into another variable(float)-------------------------------- 
    int p = 45; 
    float q = 45.34;
    cout<<"The value of p is : "<<(float)p<<endl;//Both Line are same in C++
    cout<<"The value of p is : "<<float(p)<<endl;
    
    cout<<"The value of q is : "<<(int)q<<endl; 
    cout<<"The value of q is : "<<int(q)<<endl; 
     
    int r=int(q);
     
    cout<<"The Expression is "<<(p+q)<<endl; 
    cout<<"The Expression is "<<p+int(q)<<endl;
    cout<<"The Expression is "<<p+(int)q<<endl;
    return 0;
}