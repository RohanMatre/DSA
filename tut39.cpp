//--------------------Episode:-39 : Protected Access Modifier in C++ ----------------------------
#include<iostream>
using namespace std;

class Base{
        protected:     //Partially Protected Give Permission to Inherit
        int a;
        private:       // Completely Protected 
        int b;
         
};
/*
For a protected member:
                    Public derivation        Private Derivation       Protected derivation
1. private members    Not Inherited             Not Inherited             Not Inherited 
2. protected members   Protected                  Private                   Protected
3. public members       Public                    Private                   Protected
*/
class Derived : protected Base 
{

};

int main(){
    Base b;
    Derived d;
   // cout<<b.a; Will Not Worked Since it is Protected in both base as well as in Derived Class.
    return 0;
}









