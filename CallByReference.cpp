// Call By Reference
#include<iostream>
using namespace std;

int sum(int &,int &);

int sum(int &x,int &y){
        int temp=x;
        x=y;
        y=temp;
        return (x+y);
}



int main(){
    int a=5,b=6;
    int s=sum(a,b);
    cout<<s<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}