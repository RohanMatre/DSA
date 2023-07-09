// -------------- Episode:-66 : C++ Templates: Class Templates with Default Parameters --------------


#include<iostream>
using namespace std;
template<class T1=int,class T2=float,class T3=char>
class Rohan{
    public:
    T1 a;
    T2 b;
    T3 c;
    Rohan(T1 x,T2 y,T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The Value of a is :"<<a<<endl;
        cout<<"The Value of b is :"<<b<<endl;
        cout<<"The Value of c is :"<<c<<endl;
    }
};
int main(){
    Rohan<> r(4,4.53,'c');
    r.display();
    cout<<endl;
    Rohan<float,char,char> g(4.3,'d','c');
    g.display();
    return 0;
}