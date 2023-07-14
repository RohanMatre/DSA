// Array of Structure

#include<iostream>
using namespace std;

struct Employee{
    int id;
    char name[20];
    int salary;
};

int main(){
    struct Employee a[5];
    for (int i = 0; i < 5; i++)
    {
       cout<<"Enter the id of employee "<<i+1<<":"<<endl;
       cin>>a[i].id;
       cout<<"Enter the Name of employee :"<<i+1<<":"<<endl;
       cin>>a[i].name;
       cout<<"Enter the salary of employee :"<<i+1<<":"<<endl;
       cin>>a[i].salary;

    }

    for (int i = 0; i < 5; i++)
    {
       cout<<"The Id of Employee "<< i+1 <<" is :"<<a[i].id<<endl;
       cout<<"The Name of Employee "<< i+1 <<" is :"<<a[i].name<<endl;
       cout<<"The salaray of Employee "<< i+1 <<" is :"<<a[i].salary<<endl;
    }
    
    return 0;
}