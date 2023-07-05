//------------ Episode:- 41: Multiple Inheritance Deep Dive with Code Example in C++ ------------
#include <iostream>
using namespace std;
// Syntax for inheriting in Multiple Inheritance
// class DerivedC : Visibility-mode base1,Visibility-mode base2
//{
//     class body of class "DerivedC"
// }
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2,public Base3
{
public:
    void show()
    {
        cout << "The Value of Base 1 is " << base1int << endl;
        cout << "The Value of Base 2 is " << base2int << endl;
        cout << "The Value of Base 3 is " << base3int << endl;
        cout << "The Sums of these values is " << (base1int + base2int + base3int) << endl;
    }
};
/*The inherited Derived Class will look Sonething like this:
Data members:
base1int---->protected 
base2int---->protected 
Members functions:
    set_base1int()-->public
    set_base2int()-->public
    set_show()-->public
*/
int main()
{
    Derived harry;
    harry.set_base1int(23);
    harry.set_base2int(45);
    harry.set_base3int(64);
    harry.show();
    return 0;
}
