//--------Episode:-51 : Pointers to Objects and Arrow Operator in CPP ----------


#include<iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
    void getData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }

    void setData(int a,int b){
        real = a;
        imaginary =b;
    }
};
int main(){
    /* Complex c1;//Method-1
    // Complex *ptr = &c1; Method-2
    Complex *ptr = new Complex; // Method-3
    // (*ptr).setData(1,42);// here () is imp because . operator has Higher precedence than *.
    // Arror operator:-
    ptr->setData(1,42);
    
    //(*ptr).getData(); is as good as 
    ptr->getData();
   */
   
   // Array of Objects :- 
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1,42);
    ptr1->getData();
    return 0;
}

