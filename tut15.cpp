//------------Episode 15 :- Function's & Function Prototype's(V.V.V. IMP)-----------------
#include<iostream>
using namespace std;

// Function Prototype ----> 
//type function-name (arguments); 
// there are two type of Parameter :- 1) Formal parameter(function with a and b) 2) Actual Parameter(function pass through like as it is) 
//int sum(int a,int b);//-----> (Acceptable)/By write this,It will assurity that aage yeh Funtion Milega.
//int sum(int a, b);//-----> (Not Acceptable)
int sum(int ,int );//------> (Acceptable)
void g();//------> (acceptable)
// Function ---->Top-Down Structure Programming ----->means Split the Code into small code & Run according to their Work.
// fuction's Prototype -----> When Fuction is after the Main() function,then fuction Prototype is used.
// By using it,it tell to main fuction that it will come.
//intially,it will go to main and start to find sum by seeing this fuction prototype it will run now. 
int main(){
    int num1,num2;
    cout<<"Enter the value of num1 :- "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2 :- "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters 
    cout<<"The Sum is :" <<sum(num1,num2)<<endl;
    g();
    return 0;
}
int sum(int a,int b){
    // formal Parameters a and b will be taking Value from actual parameters num1 and num2
    int c = a+b;
    return c;
} 

void g(){
     cout<<"\nHello,Good Morning "<<endl;
}







