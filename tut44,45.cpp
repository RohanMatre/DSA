//-------------- Episode:- 44 : Virtual Base Class in C++ ----------
/* ------------- Episode:- 45 : Code Example Demonstrating Virtual Base Class in C++ ------
Virtual Base Class :- Virtual base classes are used in virtual inheritance
 in a way of preventing multiple “instances” of a given class appearing 
 in an inheritance hierarchy when using multiple inheritances.
*/
#include<iostream>
using namespace std;

/*
Inheritance:- 
student -----> test [Done]
student -----> sports [Done]
test --------> result [Done]
sports ------> result [Done]

*/
class student{
    protected:
    int roll_no;
    public:
    void set_no(int a){
        roll_no = a;
    }
    void print_number(void){
        cout<<"Your roll no is "<<roll_no<<endl;
    }
};

class test : virtual public student{
        protected:
        float maths,physics;
        public:
        void set_marks(float m1,float m2){
            maths = m1;
            physics = m2;
        } 

        void print_marks(void){
            cout<<"Your result is here : "<<endl
                <<"Maths : "<<maths<<endl
                <<"Physics : "<<physics<<endl;
        }
};

class sports : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    } 

    void print_score(void){
        cout<<"Your PT score is "<<score<<endl;
    }
};

class Result : public test, public sports{
    private:
    float total;
    public:
    void display(void){
        total = (maths + physics + score); 
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is : "<<total<<endl;
    } 
};
int main(){
    Result harry;
    harry.set_no(34);
    harry.set_marks(73.5,93.25);
    harry.set_score(9);
    harry.display();
    return 0;
}