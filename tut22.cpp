//---------Episode #22:- OOP's Recap &  Nesting of Member Function's-----
// 1.------------------------------------------ OOP Recap:----------------------------------------------------------
// OOP's - Classes and Objects
// C++ -----> Intially Called ----> C with Classes by Stroustroup
// class ------> Extension of Structure's in C
// Structure Had Limitations:-
//   - Members are public
//   -  No Method's
//   Classes --> Structures + More
//   Classes --> Can Have Method's(Funtion's) and Properties(Value)
//   Classes --> can Make few Member's as Public or Private
//   Structure's in C++  ---> are Typedefed
// You can Declare Objects along with the Class Declaration Like this :
/* class Employee{
    class Definition
} harry,rohan,Lavish;*/
// harry,salary = It make No sense if Salary is Private.

//------------------------------------------ 2. Nesting of Member Function's:----------------------------------------
#include <iostream>
#include <string>
using namespace std;

// Nesting of Member Functions
class binary// First of all, we made A Class.
{
//private: ----> By Default in Classes Private is their If not Write it is Consider as it as.
    string s;// Input - String
     void chk_bin(void);
public:
    void read(void);// It read Function
    // void chk_bin(void);// It Check Function
    void ones_compliment(void);// It Compliment the Function
    void display(void);// It Display the Function
};

void binary::read(void)
{
    cout << "Enter a Binary Number : " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}
// Complimentary Function's
void binary::ones_compliment(void)
{
    // chk_bin();// This is Example of Nesting.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "Displaying Your Binary Number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();// b----> Object Name 
    b.display(); 
    return 0;
}