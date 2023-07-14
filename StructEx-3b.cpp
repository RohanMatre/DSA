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
    struct Employee e[5];
};

int main(){
    int a;
    cout<<"No. of Organisations :"<<endl;
    cin>>a;
    struct Organisation o[a];

    for (int i = 0; i < a; i++)
    {
       cout<<"Enter the id of organisation "<<i+1<<":"<<endl;
       cin>>o[i].id;
       cout<<"Enter the Name of organisation "<<i+1<<":"<<endl;
       cin>>o[i].name;  
    
    for(int j=0;j<5;j++){

       cout<<"Enter the id of employee "<<j+1<<" in Organisation "<<i+1<<":"<<endl;
       cin>>o[i].e[j].id;
       cout<<"Enter the Name of employee "<<j+1<<" in Organisation "<<i+1<<":"<<endl;
       cin>>o[i].e[j].name;
       cout<<"Enter the salary of employee "<<j+1<<" in Organisation "<<i+1<<":"<<endl;
       cin>>o[i].e[j].salary;
        }
    }

    for (int i = 0; i < a; i++)
    {
       cout<<"The Id of organisation "<< i+1<<endl;
       cout<<"The Name of organisation "<< i+1<<endl;
       
       for (int j = 0; j < 2; j++)
    {
       cout<<"The Id of Employee"<<j+1<<" in organisation "<< i+1 <<" is :"<<o[i].e[j].id<<endl;
       cout<<"The Name of Employee"<<j+1<<" in organisation "<< i+1 <<" is :"<<o[i].e[j].name<<endl;
       cout<<"The salaray of Employee"<<j+1<<" in organisation "<< i+1 <<" is :"<<o[i].e[j].salary<<endl;
    }

       
    }
    
    return 0;
}