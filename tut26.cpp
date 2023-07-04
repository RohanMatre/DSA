//-----------------------Episode #26 :- Friend Functions in C++-------------
#include<iostream>
using namespace std;

//  1 + 4i  
//  5 + 8i
// --------- 
//  6 + 12i
class Complex{
    int a;
    int b;

public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    //Below Line means That Non-Member - SumComplex Function is Allowed to do anything with my private Parts (members).
    friend Complex sumComplex(Complex o1,Complex o2);// BY USING THIS IT WILL WORK.
    void printNumber(){
        cout<<"Your Number is : "<<a<<" + "<<b<<" i "<<endl;
    }

};

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}
int main(){
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}
// PROPERTIES OF FRIEND FUNCTIONS :-
/*
1. Not in the Scope of Class
2. Since it is not in the scope of the class,it cannot be called from the 
object of that class. c1.sumComplex() == INVALID
3. Can be Invoked without the help of any Object
4. Usually Contains the Objects as arguments. 
5. Can be declare inside public and private section of the class. 
6. It cannot Access the members Directly by their names and need object_name.member_name to access the member. 
*/









