//-------------------------------Episode#21:- Classes,Public and Private Access Modifiers in C++--------------------------
#include<iostream>
using namespace std;

//-----------------  SYNTAX OF CLASSES :- ----------------------
class Employee 
{
    private:
        int a,b,c;
    public:
        int d,e;
     void setData(int a1,int b1,int  c1);// Declaration
    void getData(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;
    }
};
void Employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1 ;
}

int main(){
    Employee rohan;
    //rohan.a=33;It is Private Variable which Definitely will Throw an Error.
    rohan.d=38;
    rohan.e=34;
    rohan.setData(1,2,4);
    rohan.getData();
    return 0;
}