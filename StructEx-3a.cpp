#include<iostream>
using namespace std;
struct Employee{
    int id;
    char name[20];
    int salary;
};
struct Organisation{
    int id;
    char name[20];
    struct Employee a;
};

int main(){
    struct Organisation a[2];
    for (int i = 0; i < 2; i++)
    {
       cout<<"Enter the id of organisation "<<i+1<<":"<<endl;
       cin>>a[i].id;
       cout<<"Enter the Name of organisation "<<i+1<<":"<<endl;
       cin>>a[i].name;

       cout<<"Enter the id of employee "<<i+1<<":"<<endl;
       cin>>a[i].a.id;
       cout<<"Enter the Name of employee "<<i+1<<":"<<endl;
       cin>>a[i].name;
       cout<<"Enter the salary of employee "<<i+1<<":"<<endl;
       cin>>a[i].a.salary;
    }

    for (int i = 0; i < 2; i++)
    {
       cout<<"The Id of Employee in organisation "<< i+1 <<" is :"<<a[i].a.id<<endl;
       cout<<"The Name of Employee in organisation "<< i+1 <<" is :"<<a[i].name<<endl;
       cout<<"The salaray of Employee in organisation "<< i+1 <<" is :"<<a[i].a.salary<<endl;
    }
    
    
    return 0;
}