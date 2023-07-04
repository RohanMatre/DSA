//-------------Array of Objects & Passing Objects as Function Arguments in C++-----------------
#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 50000;
        cout << "Enter the id of Employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The Id of this Employee is : " << id << endl;
    }
};

int main()
{
    // Employee harry,rohan,lavish,khushi;
    // harry.setId();
    // harry.getId();
    Employee ig[4];
    for (int i = 0; i < 4; i++)
    {
        ig[i].setId();
        ig[i].getId();
    }

    return 0;
}
