// Episode-#04 Variable Scope & Data Types
//--------Episode-04:- Variable Scope and data-types------------
#include<iostream>

using namespace std;
int glo = 43;//-------> This is Global Variable
void sum(){
    int a;
    cout<<glo;
}
//Note : Function Inside Variable is called as Local Variable
int main(){
    int glo = 32;//Local Variable has More Precedence(importance) than Global Variable 
    glo=53;//Local Variable is Updated 
    // int a=4;   
    // int b=5; Use this or Beleow 
    int a=4,b=5;
    float pi=3.14;
    char c='d';
    bool is_true =  true;//boolen value true=1,False=0;
    sum();//when we call the exceution Stop here and goes to that Function  
    cout<<glo<<is_true;
    // cout<<"This is Tutorial-04.\nHere the value of a is "<<a<<".\nThe value of b is "<<b<<"."<<endl;
    // cout<<"The Value of Pi is : "<<pi<<endl;//Copy line the same line we used shortcut key :- ctrl+d
    // cout<<"The Character of c is : "<<c;//To Replicate it from the above line by using two Letters like ud Together it result get Unexpected
    return 0;
}
