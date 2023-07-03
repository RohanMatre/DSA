//------------------------Structures, Unions & Enums in C++(V.V.V. IMP)-----------------------------
#include<iostream>
using namespace std;

typedef struct employee //Struct ----> Data types of Merge with Different datatypes like int,float,char,etc. 
{
    int eID; // 4     (Total- 9 Byte will work here)
    char favChar; // 1
    float salary; // 4
} ep;// By Using typedef Shortcut we can Whole Statement state's as-----> ep(Do not need to be Confused). 
// Draw in Struct(in almost Similiar to Classes):- Data Hiding (So it is Not Safe.),Function Nahi Dal Sakte.
// Imp :- IF CODERS WANT TO SAVE ONLY DATA THEN IT USES STRUCT.BUT IF WANT TO PROTECT THEN CLASSES ARE THE BEST.


 union money // Union(Memory Shared) ------> from 3, 1 is to be fixed to perform Memory Optimum(max. Memory Locate like 4) 
{
    int rice;// bytes - 4
    char car;// bytes - 1
    float pounds;// bytes - 4 
};


int main(){
    /* Struct
    ep rohan;// Initial--> struct employee converted to short form ep
    ep  Meet; 
    ep  Dev; 
    rohan.eID = 1;
    rohan.favChar = 'k';
    rohan.salary = 2500000;
    cout<<"The Value is "<<rohan.eID<<endl;
    cout<<"The Value is "<<rohan.favChar<<endl;
    cout<<"The Value is "<<rohan.salary<<endl; */

    /* Union
    union money m1;
    m1.rice = 34;
    m1.car= 'c'; // By using this Garbage value is Obtained----> by asking this Correct answer will be their
    cout<<m1.rice<<endl;  */

    //Enum //Postion of index is Find .
    enum Meal{breakfast,lunch,dinner};//enum meal Become a Data Type in which char to int saved 
    //Meal m1 = breakfast;
    Meal m1 = lunch;
    //Meal m1 = dinner;
    cout<<(m1==1)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    return 0;
}









