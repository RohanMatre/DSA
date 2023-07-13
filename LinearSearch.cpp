#include<iostream>
using namespace std;

int search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,23};

    // Whether 7 is Present is it or not?
    cout<<"Enter the Key : "<<endl;
    int key;
    cin>>key;

    int found = search(arr,10,key);

    if(found != -1){
        cout<<"Key is Present at "<<found<<endl;
    }else{
        cout<<"Key is Absent."<<endl;
    }
    return 0;
}