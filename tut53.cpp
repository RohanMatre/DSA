//-------Episode :-53 :this Pointer in C++ (vvv Imp) --------------
#include<iostream>
using namespace std;

class A{
    int a;
    public:
    // new Method:-
    void setData(int a){
    //A & setData(int a){
       this->a = a;
       //return *this;
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main(){
// 'this' is a Keyword which is a pointer points to the object which invoked the member Function.
// 
    A a;
    a.setData(4);
    a.getData();
    return 0;
}