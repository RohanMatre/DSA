#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"How are You? "<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"Kaise ho? "<<endl;
    }
};

class Derived : public Base1,public Base2{
    int a;
    public:
    void greet(){
        Base2 :: greet();
    }
};

class B{
    public:
    void say(){
        cout<<"Hello World! "<<endl;
    }
};
class D : public B
{
    int a;
    // D' new say() method will overwrite Base Class's say() Method.
    public:
    void say(){
        cout<<"Hello World! I am RM. "<<endl;
    }
};

int main(){
    B b;
    b.say();
    
    D d;
    d.say();
    return 0;
}