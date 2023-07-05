//---------------------- Episode :- 35 : Destructors in C++ ----------------------------
#include<iostream>
using namespace std;
// Destructor ---> Never take agruments nor does it return any value.

int a=0;   // a means count.when Object is created then it is Constructor when Object is destroy then destructor.
class num{
        public:
        num(){ 
            cout<<"This is the time when constructor is called for object number "<<a<<endl;
            a++;
        }

        ~num(){             //~ is called tilde Operator.
            cout<<"This is the time when destructor is called for object number "<<a<<endl;
            a--;
        }
};
int main(){
   cout<<"We are inside our main function"<<endl; 
   cout<<"Creating first objects n1"<<endl;
   num n1;
   {                            // Creating Block in which it's scope in between this only.
        cout<<"Entering this block : "<<endl;
        cout<<" Creating two more objects "<<endl;
        num n2,n3;
        cout<<"Exiting this block :"<<endl;
   } 
   cout<<"Back to main"<<endl;
    return 0;
}
