// String Class

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
   // Method-1
   // char s[1000] = {'1','a','b','c','\0'};
   // Method-2
   // string s="Hello World"; //Dynamic Array - Size can be Change acc. to Demand(Run Time).
   // Method-3 : By Calling the Function 
   //  string s=("Hello World");
   // Method-4
    string s;
    
    int n=5;
    vector<string> sarr;
    string temp;

    while(n--){
        getline(cin,temp);
        sarr.push_back(temp);
    } 
    /*getline(cin,s,'.');    

    for(char ch : s){
        cout<<ch<<",";
    }
    cout<<s<<endl;

   // vector<string>...
    */
   for(string x : sarr){
       cout<<x<<","<<endl;
   }
 
  return 0;
}