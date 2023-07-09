// -------------------- Episode:- 61 : File I/O in C++ --------

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Connecting our File with out stream
    ofstream out("sample60.txt");

    //Creating a name string and filling it with string entered by the user. 
    string  name ;
    cout<<"Enter your name :";
    cin>>name;

    // writing a string to the file.
    cout<<name + " is my name"<<endl;
    out.close();

    ifstream in("sample60.txt");
    string content;
    in>>content;
    cout<<"The Content of this file is : "<<content<<endl;
    in.close();
    return 0;
}  