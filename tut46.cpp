// ---------- Episode:-46 : Constructors in Derived Class -----------
/*
Constructor:- Example How to Create an Constructor 
class A{
    int a,b;
    public:
    a(x,y){
        a=x;
        y=b;
    }
};

(1) Constructor's in Derived Classes :-
---> We can Use Constructors in Derived Classes in C++.
---> If Base Class Constructor does not have any arguments,there ia no need of any
     Constructor in Derived Class.
---> But if there are one or more arguments in the Base class Constructor derived 
     class need to pass arguments to the base class constructor.
---> If Both Base & Derived Classes Have Constructors Base Class Constructor is 
     executed first.

(2) Constructors in Multiple Inheritance:- 
---> In Multiple Inheritance,Base Classes are Constructed in the order in which they 
     appear in the class Declaration 
---> In Multilevel Inheritance, Constructors are exceuted in the order of Inheritance.

(3) Special Syntax:- 
---> C++ Supports an Special Syntax for passing arguments to multiple Base Classes.
---> The Constructor of the derived class Receives all the arguments at once and then
     will pass the calls to the Respective Base Classes.
---> The Body is called after all the Constructors are finished executing.

Syntax :- 

Derived Constructor(arg1,arg2,arg3,.....) : Base1-Constructor(arg1,arg2),Base2-Constructor(arg3,arg4)


(4) Special Cases of Virtual Base Class:-
---> The Constructors for virtual Base Classes are Invoked before an non-virtual
     Base.
---> If there multiple virtual base classes,they are invoked in the order declared.
---> Any Non-virtual base Class are then Constructed before the Derived Class 
     Constructor is executed.
*/