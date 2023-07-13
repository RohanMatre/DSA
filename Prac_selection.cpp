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

    for (int i=0;i<n-1; i++)
    {
        int j=i+1;
        int min=a[j];
        if(a[i]>min){
            swap(a[i],a[j]);
        }
    }
    


     cout<<"After Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    return 0;
}