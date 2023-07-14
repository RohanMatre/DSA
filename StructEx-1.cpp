// Employee with Data Members 
#include<iostream>
using namespace std;

struct Employee 
{
    int id;
    char name[20];
    int salary;
};

int main(){
    struct Employee a;
    cout<<"Enter id of Employee :"<<endl;
    cin>>a.id;
    cout<<"Enter the Name of Employee : "<<endl;
    cin>>a.name;
    cout<<"Enter the salary of Employee "<<endl;
    cin>>a.salary;

    cout<<"The Id of employee is :"<<a.id<<endl;
    cout<<"The Name of the employee is :"<<a.name<<endl;
    cout<<"The Salary of the employee is :"<<a.salary<<endl;
    cout<<"Size of employee :"<<sizeof(Employee)<<endl;
    return 0;
}