//------------Function Overloading with Examples in C++(V.V.V. IMP) ----------------
// OverLoading Means Single Thing Has been Used For too Many Thing's (polymorphism means Single Thing which has to many Forms)(Same Name But Work Different)
#include<iostream>
using namespace std;

int sum(int  a,int b ){
    cout<<"Using Function with 2 Arguments "<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"Using Function with 3 Arguments "<<endl;
    return a+b+c ;
}
// Example of Function Overload:- 
//(Calculate the Volume of Cylinder)
 int volume(double r,int h){
     return (3.14*r*r*h); 
 }
 //(Calculate the Volume of Cube)
 int volume(int a){
     return (a*a*a); 
 }
 //(Calculate the Volume of Rectangle )
 int volume(int l,int b,int h){
     return (l*b*h); 
 }

int main(){
    cout<<"The Sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The Sum of 3,5 and 6 is "<<sum(3,5,6)<<endl;
    cout<<"The Volume of cuboid of 3 is "<<volume(3)<<endl;
    cout<<"The Volume of Cylinder of 3 and 5 is "<<volume(3,5)<<endl;
    cout<<"The Volume of Rectangle of 3,5 and 6 is "<<volume(3,5,6)<<endl;
    return 0;
}









