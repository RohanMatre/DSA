// 3. Sum of Even Loop/odd Loop
#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int i=2;
    while(i<=n){
        if((i%2)==0){    // ----> Even No.   
       // if((i%2)!=0){ ---> Odd No.
        cout<<i<<endl;
        sum=sum+i;
        }
        i++;
    }
    cout<<"The Sum of value of all the even no. is :"<<sum<<endl;
    return 0;
}