// ---------- Episode :- 36 : Inheritance & it's different types with examples --------------
/*
Inheritance :- Concept of Reusability in C++ is Supported using Inheritance.
The Existing Class is called Base Class.
The New Class which is inherited is called as Derived class.

Different types of Inheritance:-
                                Base Class    Derived Class
(1) Simple Inheritance:-            1               1
(2) Multiple Inheritance:-    more than 1           1
(3) Hierarchical Inheritance:-      1           more than 1
(4) Multilevel Inheritance:- Deriving a class from already Derived Class.
(5) Hybrid Inheritance:- It is Combination of Multiple inheritance & Multilevel inheritance.
*/

//------------------ Episode :- 37 : Inheritance Syntax & Visibility Mode -------------------
#include <iostream>
using namespace std;

// Base Class:-
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

/*Derived Class:-
Syntax:-
class {{derived-class-name}} : {{visibility-mode}} {{base class-name}} // Visibility mode - Private or Public
{                                                                      //By default Private Hota hai.
     class member,methods,etc....

}
Note:-
1. Default Visibility mode is Private.
2. Public Visibility mode: Public Member of the base class become public members of the Derived Class.
3. Private Visibility mode: Public Member of the base class become private members of the Derived Class.
4. Private members of the bass class will never became inheritanced by the Derived Class.

*/

class Programmer : public Employee
{
public:
int languageCode;
    Programmer(int inpid)
    {
        id = inpid;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

// Creating a Programmer class derived from Employee Base class
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}
