// Vector (Complete)
#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Demo Vector 
    //vector <int> arr={1,2,10,12,15};
    
    // Fill Constructor 
    vector<int> arr(10,7);
    
    // Fill Constructor
    vector<int> visited(100,0); 
    
    //pop_back
    arr.pop_back();
    //Push_Back O(1)
    arr.push_back(16);
    
    // Print all the elements
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
/*
    // Size of the Vector (No. of the elements)
    cout<<arr.size()<<endl; 
    // Capacity of the vector 
    cout<<arr.capacity()<<endl;
*/
    return 0;
}