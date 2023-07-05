//-------------------Episode:-34 : Copy Constructor in C++----------------------------
// Copy Constructor are the Constructor in which  Making The another Object Copy Like it. 


#include<iostream>
using namespace std;


class Number{
    int a;
    public:
    Number(){
        a=0;
    }
    Number(int num){
        a=num;
    }
    // when No Copy Constructor Found,Compiler Supplies it's own Constructor.
    //Number(Number &obj){
        //cout<<"Copy Constructor Called !!! "<<endl;
       // a=obj.a;
   // }
    void display(){
    cout<<"The Number for this Object is  "<<a<<endl;
    }
};
int main(){
    Number x,y,z(54),z2; 
    x.display(); 
    y.display(); 
    z.display(); 
    Number z1(z);  // Copy Constructor invoked
    z1.display();  // Z1 is Exaclty Resemble z or x or y.

    z2=z; //Copy Constructor not Called 
    
    Number z3=z;   // Copy Constructor invoked
    z3.display();
    return 0;
}









