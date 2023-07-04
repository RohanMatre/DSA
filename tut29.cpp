//----------------Episode #29 :- Constructors In C++(V.V.V. Imp) -----------------------
#include <iostream>
using namespace std;

class Complex  // Class Name and Constructor Name Should Be same.
{
    int a, b;

public:
    // Creating a Constructor(Analog: Oject Ko bana na)
    // defination :- Constructor is a  special Members funtion with same name as of the class.
    //  (Constructor is a Special Type of function Only & It is Run Automatically(Invoked(call Karna)) when we made it's Object. )
    // It is used to Intialize the objects of it's Class .
    Complex(void); // Constructor Declaration.
    void printNumber()
    {
        cout << "Your Number is : " << a << " + " << b << " i " << endl;
    }
}; 

Complex ::Complex(void)  // ------>This is a Default Constructor!! as it does not take(Accepts) any Parameters.
{
    a = 0;
    b = 0;
    //cout<<" Hello world! "<<endl; it is Working In it also.
}
int main()
{
    Complex c;
    c.printNumber();
    return 0;
}
// Characteristics Of Constructors:-
/*
 1. It should be Declared in the public section of the class.
 2. They are automatically invoked whenever the Object is Created.
 3. They Cannot return values and Do Not Have Return types.
 4. It can have default Arguments. 
 5. We Cannot Refer to their address.
*/








