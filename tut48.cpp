//------Code Example: Constructors in Derived Class in Cpp-------
#include<iostream>
using namespace std;

/*
Case:-1
class B : public A{
     Order of Exceution of Constructor ----> first A() then B().
};

Case:-2  
class A : public B,public C{
     Order of Exceution of Constructor ----> First B(),then C() & at last A().
};

Case:-3
class A: public B, virtual public C{
     Order of Exceution of Constructor ----> first C() ,then B() and A().
     imp:- Virtual Will Always Run First.
}
*/

class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base1 Class Constructor called "<<endl;
    }
    void printDataBase1(void){
        cout<<"The Value of Data1 is "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 Class Constructor called "<<endl;
    }
    void printDataBase2(void){
        cout<<"The Value of Data2 is "<<data2<<endl;
    }
};

class Derived : public Base1,public Base2{
        int derived1,derived2;
        public:
        Derived(int a,int b,int c,int d) : Base1(a),Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived Class Constructor Called"<<endl;
        }
         void printDataDevrived(void){
        cout<<"The Value of derived1 is "<<derived1<<endl;
        cout<<"The Value of derived2 is "<<derived2<<endl;
    }
};


int main(){
    Derived harry(1,2,3,4);
    harry.printDataBase1(); 
    harry.printDataBase2(); 
    harry.printDataDevrived();
    return 0;
}









