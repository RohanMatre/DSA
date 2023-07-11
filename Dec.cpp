#include<iostream>
using namespace std;

int main(){
    // Ex-1
    /*int a=1,b=2;

    if(a-- >0 && ++b >2){   // --->  Ex-2 Just OR hatu
        cout<<"Stage-1 : Inside If"<<endl;
    }
    else{
        cout<<"Stage-2 : Inside else"<<endl;
    }
    cout<<a<<" "<<b<<endl;
*/
    // Ex-3
    int num=3;
    cout<<(25*(++num))<<endl;

    // Ex-4
    int a=1,b=a++,c=++a;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}
