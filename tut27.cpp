// -------Episode #27:- Friend Classes & Member Friend Function in C++------

#include <iostream>
using namespace std;
// Forward Declaration :- We Ensure Compiler that Class Complex is ahead.
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually Declaring Functions as Friends
    friend int Calculator::sumRealComplex(Complex, Complex);
    friend int Calculator::sumCompComplex(Complex, Complex);

   // Ailter : Declaring the entire calculator class as Friend.
//friend class Calculator;// Declaring Whole Class as Friend.

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your Number is : " << a << " + " << b << " i " << endl;
    }
};
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The Sum of Real Part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The Sum of Complex Part of o1 and o2 is " << resc << endl;
    return 0;
}
