//-------Episode #24:- Static Data Members & Methods in C++ OOPS-------
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;// Static Variable ko 0 se Intialize Karni Ki Jarurat Nahi hai,By default it is Started for 0.

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    // Count is the Static data member of class Employee 
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}


// 1.) Here, First static Varariable like count is Used.
// 2.) Also, Static Function is Used bcz it is used when It allow Only Access to Static variable(Members) Only.