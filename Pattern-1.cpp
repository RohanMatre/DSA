#include<iostream>
using namespace std;

int main(){
    // Input 
    int n;
    cin>>n;

    //Initialize
    int i=1;  // i --> Row
// Starting Loop
    while(i<=n){
        int j=1; // j --> Column
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}