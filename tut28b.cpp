
#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int a){
        val1 = a;
    }
    void display(void){
        cout<<val1<<endl;
    }
};

class c2 {
    int ṽal2;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int a){
        val2 = a;
    }
    void display(void){
        cout<<val2<<endl;
    }
};
/*  Trick to(swap the 2 Number)Solve the Call By the Reference:- 
 temp = a ;
 a = b;   
 b = temp;
*/
void exchange(c1 &x, c2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2= temp; 
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(42);
    oc2.indata(53);
    exchange(oc1,oc2);
    cout<<"The Value of c1 after Exchanging Becames :"<<endl;
    oc1.display();
    cout<<"The Value of c2 after Exchanging Becames :"<<endl;
    oc2 .display();
    return 2;
}