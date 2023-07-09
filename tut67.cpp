// --------- Episode:- 67 : C++ Function Templates & Function Templates with Parameters ------------

#include<iostream>
using namespace std;

//int funcAverage(int a,int b){
//    float avg =(a+b)/2;
//    return avg;
//}
//int funcAverage2(int a,float b){
//   float avg =(a+b)/2;
//    return avg;
//}
template<class T>
void swapp(T &a,T &b){
    T temp = a;
    a=b;
    b=temp;

}
template<class T1,class T2>
float funcAverage(T1 a,T2 b){
    float avg =(a+b)/2;
    int x=3,y=4;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return avg;
}
int main(){
    float  a;
    a=funcAverage(5,3.4);
    cout<<a<<endl;
    return 0;
};