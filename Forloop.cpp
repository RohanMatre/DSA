#include<iostream>
using namespace std;

int main(){
/*
    int n;
    cout<<"Enter the Value of n: "<<endl;
    cin>>n;
    cout<<"Printing sum from 1 to n :"<<endl;
    int sum=0;
    for(int i=1;i<=n;i++){
        //sum=sum+i;  
        sum+=i;
    }
        cout<<sum<<endl;

*/
 

// Fibonacci Series
/*
int n=10;
int a=0;
int b=1;
cout<<a<<" "<<b<<" "<<endl;
for(int i=1;i<=n;i++){
    int nextNumber = a + b;
    cout<<nextNumber<<" "<<endl;

    a=b;
    b=nextNumber;
}
*/
/*
// Prime Number 
int n;
cout<<"Enter the Value of n :"<<endl;
cin>>n;
bool isPrime=1;


for(int i=2;i<n;i++){

    //rem = 0 ---> Not Prime
    if(n%i==0){
        //cout<<"Not Prime No."<<endl;
        isPrime=0;
        break;
    }
}


if(isPrime==0){
    cout<<"Not a Prime No."<<endl;
}
else{
    cout<<"is a Prime No."<<endl;
}
*/
/* Q-1
// Continue Statement 
    for(int i=0;i<5;i++){
        cout<<" HI "<<endl;
        cout<<" Hey "<<endl;
        continue;
        cout<<"reply toh Karde "<<endl;

    }
*/

/*  Q-2
for(int i=0;i<=5;i--){
    cout<<i<<" "<<endl;
    i++;
}
*/
/* Q-3
for(int i=0;i<=15;i+=2){
    cout<<i<<" ";

    if(i&1){
        continue;
    }
    i++; 
}
*/
/* Q-4
for(int i=0;i<5;i++){
    for(int j=1;j<=5;j++){
        cout<<i << " " <<j<<endl; 
    }
}
*/

// Q-5
for(int i=0;i<5;i++){
    for(int j=0;j<=5;j++){
        if(i+j==10){
            break;
        }
        cout<<i<<" "<<j<<endl;
    }
}






/*
   int i=1;
    for(;;){
        if(i<=n){
        cout<<i<<endl;
        }else{
            break;
        }
        i++;
    }

    for(int a=10,b=10,c=23; a>=0 && b>=1,c>=1;a--,b++,--c){
            cout<<a<<" "<<b<<" "<<c<<endl;
    }
*/
    return 0;
}