//--------------- Episode:- 40 : Multilevel Inheritance Deep Dive with Code Example--------------
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);  // here Function set_roll_number contain Integer number which can store.
    void get_roll_number(void); //  set(Dete hai)---->(int)Aayega  while get(lete hai)----->(void)aayega
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The Roll Number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "The Marks Obtained in Maths are : " << maths << endl;
    cout << "The Marks Obtained in Physics are : " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your Result is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    /*
    Notes:
    * If we are Inheriting B from A and C From B: [A-----> B -------> C]
    1. A is the Base Class for B and B is the Base class for C.
    2. ABC is Called Inheritance Path.

    */
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(95.0, 80.0);
    harry.display_results();
    return 0;
}
