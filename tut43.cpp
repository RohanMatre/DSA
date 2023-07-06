//------------Episode :-43 : Ambiguity Resolution in Inheritance in C++ ------
// Ambiguity Resolution Means Base Class Have Same Name in case then Their Will be Confusion When we made Derived Class.
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
        void greet(){                       //Ambiguity resolution(this is Method)  
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


int main(){
    //Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();
    return 0;
}