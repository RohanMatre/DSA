//-------------------Episode-13 : Arrays & Pointers Arithmetic in C++(Most Imp)-----------------
#include<iostream>
using namespace std;

int main(){
    //ArrayExample
    int marks[4]= {23,43,95,34};
    int mathmarks[4];
    mathmarks[0]=2323;
    mathmarks[1]=232;
    mathmarks[2]=323;
    mathmarks[3]=22 ;

    cout<<"These are Math Marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    marks[2] = 3222; //by adding it will Replace the Value. You  can change the Value of array.
   cout<<"These are Normal Marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

     //Printing Array as a Loop
    for (int i = 0; i < 4; i++)
    {
       cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    
// Quick Quiz:- Do the same thing using while and do-while loop:- 
// 1. Using While Loop:-  
//     int i=0;
//      while(i<4)
// {
//     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//     i++;
// }

// 2. Using Do-while Loop:- 
//  int i=0;
//  do {
//      cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//      i++;
//  } while(i<4); 
    

// Pointers and Arrays in Array of C++ :- (V.V.V. Imp)
int* p=marks ;// & is Not Required 
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*p<<endl;
    cout<<"The Address of marks[0] is "<<&marks[0]<<endl;
    cout<<"The Address of marks[1] is "<<&marks[1]<<endl;
    cout<<"The Address of marks[2] is "<<&marks[2]<<endl;
    cout<<"The Address of marks[3] is "<<&marks[3]<<endl;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

//difference of simple Pointers :- 
    // int a=3;
    // int* b = &a;//& is added
    // cout<<"The Address of a is "<<&a<<endl;
    // cout<<"The Value of a is "<<*b<<endl;
 return 0;
}



