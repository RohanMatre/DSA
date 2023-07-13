#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of array: "<<endl;
    cin>>n;
    int a[n];

    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Before Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(i>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=key;
    }

    cout<<"After Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    return 0;
}