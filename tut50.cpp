//----- Episode:- 50 :Revisiting Pointers: new and delete Keywords in CPP ----

#include<iostream>
using namespace std;

int main(){
    //Basic Example 
    // Pointer ? ----> A Variable(data Type) 
    int a=4;
    int* ptr = &a;
    *ptr=992;
    cout<<"The Address of a is "<<&(ptr)<<endl;
    cout<<"The Value of a is "<<*(ptr)<<endl;

    // New Keyword 
    //int *p = new int(40);
    float *p = new float(40.43);
     cout<<"The Value of address p is "<<*(p)<<endl;

     int *arr = new int[3];
     arr[0]=20;
     *(arr+1)=40;
     arr[2]=60;
     //delete[] arr; // Continuous Block break 
     cout<<"The Value of arr[0] is :"<<arr[0]<<endl;
     cout<<"The Value of arr[1] is :"<<arr[1]<<endl;
     cout<<"The Value of arr[2] is :"<<arr[2]<<endl;

    // Delete Keyword (Operator):-


    return 0;
}